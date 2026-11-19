// Opt-in test layer. Copies the presented Vulkan image; never touches desktop
// windows, input or audio. One RT device; auxiliary instances are forwarded.
#define VK_NO_PROTOTYPES
#include <vulkan/vulkan.h>
#include <vulkan/vk_layer.h>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <vector>
#include <string>
#include <unordered_map>
#include <mutex>

static VkInstance instance;
static VkDevice device;
static VkPhysicalDevice physical;
static PFN_vkGetInstanceProcAddr nextI;
static PFN_vkGetDeviceProcAddr nextD;
static std::unordered_map<VkInstance,PFN_vkGetInstanceProcAddr> instances;
static PFN_vkSetDeviceLoaderData setLoaderData;
static PFN_vkGetPhysicalDeviceMemoryProperties memoryProperties;
static std::mutex guard;
struct Swap { VkExtent2D size; VkFormat format; std::vector<VkImage> images; };
static std::unordered_map<VkSwapchainKHR,Swap> swaps;
static std::unordered_map<VkQueue,uint32_t> queues;
static void trace(const char* message) {
    const char* r=getenv("COF_READBACK_REQUEST");if(!r)return;
    FILE* f=fopen((std::string(r)+".log").c_str(),"ab");if(f){fprintf(f,"%s\n",message);fclose(f);}
}
#define D(name) auto name=(PFN_##name)nextD(device,#name)
#define I(name) auto name=(PFN_##name)nextI(instance,#name)
extern "C" {
__declspec(dllexport) VKAPI_ATTR PFN_vkVoidFunction VKAPI_CALL vkGetInstanceProcAddr(VkInstance,const char*);
__declspec(dllexport) VKAPI_ATTR PFN_vkVoidFunction VKAPI_CALL vkGetDeviceProcAddr(VkDevice,const char*);
}

static VKAPI_ATTR VkResult VKAPI_CALL createInstance(const VkInstanceCreateInfo* info,const VkAllocationCallbacks* alloc,VkInstance* out) {
    trace("createInstance");
    auto link=(VkLayerInstanceCreateInfo*)info->pNext;
    while(link && !(link->sType==VK_STRUCTURE_TYPE_LOADER_INSTANCE_CREATE_INFO && link->function==VK_LAYER_LINK_INFO)) link=(VkLayerInstanceCreateInfo*)link->pNext;
    if(!link) return VK_ERROR_INITIALIZATION_FAILED;
    auto dispatch=link->u.pLayerInfo->pfnNextGetInstanceProcAddr;
    auto create=(PFN_vkCreateInstance)dispatch(nullptr,"vkCreateInstance");
    link->u.pLayerInfo=link->u.pLayerInfo->pNext;
    VkResult r=create(info,alloc,out);
    if(r==VK_SUCCESS) {
        std::lock_guard lock(guard);
        instances[*out]=dispatch;
        // DLSS creates an auxiliary instance. It must not replace the dispatch
        // used by the RT device/physical device captured by this layer.
        if(!instance) {instance=*out;nextI=dispatch;}
    }
    return r;
}
static VKAPI_ATTR VkResult VKAPI_CALL createDevice(VkPhysicalDevice gpu,const VkDeviceCreateInfo* info,const VkAllocationCallbacks* alloc,VkDevice* out) {
    trace("createDevice");
    auto callback=(VkLayerDeviceCreateInfo*)info->pNext;
    while(callback && !(callback->sType==VK_STRUCTURE_TYPE_LOADER_DEVICE_CREATE_INFO && callback->function==VK_LOADER_DATA_CALLBACK)) callback=(VkLayerDeviceCreateInfo*)callback->pNext;
    if(!callback) return VK_ERROR_INITIALIZATION_FAILED;
    setLoaderData=callback->u.pfnSetDeviceLoaderData;
    auto link=(VkLayerDeviceCreateInfo*)info->pNext;
    while(link && !(link->sType==VK_STRUCTURE_TYPE_LOADER_DEVICE_CREATE_INFO && link->function==VK_LAYER_LINK_INFO)) link=(VkLayerDeviceCreateInfo*)link->pNext;
    if(!link) return VK_ERROR_INITIALIZATION_FAILED;
    nextD=link->u.pLayerInfo->pfnNextGetDeviceProcAddr;
    memoryProperties=(PFN_vkGetPhysicalDeviceMemoryProperties)nextI(instance,"vkGetPhysicalDeviceMemoryProperties");
    auto create=(PFN_vkCreateDevice)link->u.pLayerInfo->pfnNextGetInstanceProcAddr(instance,"vkCreateDevice");
    link->u.pLayerInfo=link->u.pLayerInfo->pNext;
    VkResult r=create(gpu,info,alloc,out); if(r==VK_SUCCESS) {device=*out;physical=gpu;} return r;
}
static VKAPI_ATTR void VKAPI_CALL getQueue(VkDevice d,uint32_t family,uint32_t index,VkQueue* q) {
    D(vkGetDeviceQueue);vkGetDeviceQueue(d,family,index,q);std::lock_guard lock(guard);queues[*q]=family;
}
static VKAPI_ATTR void VKAPI_CALL getQueue2(VkDevice d,const VkDeviceQueueInfo2* info,VkQueue* q) {
    D(vkGetDeviceQueue2);vkGetDeviceQueue2(d,info,q);std::lock_guard lock(guard);queues[*q]=info->queueFamilyIndex;
}
static VKAPI_ATTR VkResult VKAPI_CALL createSwap(VkDevice d,const VkSwapchainCreateInfoKHR* info,const VkAllocationCallbacks* a,VkSwapchainKHR* out) {
    trace("createSwapchain");
    I(vkGetPhysicalDeviceSurfaceCapabilitiesKHR);D(vkCreateSwapchainKHR);D(vkGetSwapchainImagesKHR);
    VkSurfaceCapabilitiesKHR cap{};
    if(vkGetPhysicalDeviceSurfaceCapabilitiesKHR(physical,info->surface,&cap)!=VK_SUCCESS || !(cap.supportedUsageFlags&VK_IMAGE_USAGE_TRANSFER_SRC_BIT)) return VK_ERROR_FEATURE_NOT_PRESENT;
    auto copy=*info;copy.imageUsage|=VK_IMAGE_USAGE_TRANSFER_SRC_BIT;
    VkResult r=vkCreateSwapchainKHR(d,&copy,a,out);
    if(r==VK_SUCCESS) {
        Swap s{copy.imageExtent,copy.imageFormat,{}};uint32_t count=0;
        vkGetSwapchainImagesKHR(d,*out,&count,nullptr);s.images.resize(count);
        vkGetSwapchainImagesKHR(d,*out,&count,s.images.data());
        std::lock_guard lock(guard);swaps[*out]=std::move(s);
    }
    return r;
}
static VKAPI_ATTR void VKAPI_CALL destroySwap(VkDevice d,VkSwapchainKHR swap,const VkAllocationCallbacks* a) {
    {std::lock_guard lock(guard);swaps.erase(swap);}D(vkDestroySwapchainKHR);vkDestroySwapchainKHR(d,swap,a);
}
static void capture(VkQueue queue,const VkPresentInfoKHR* present,const Swap& s,const std::string& output) {
    trace("capture begin");
    // Any error terminates this opt-in test, never switches to desktop capture.
    auto check=[](VkResult r){if(r!=VK_SUCCESS) {char msg[64];snprintf(msg,sizeof(msg),"Vulkan failure %d",int(r));trace(msg);std::abort();}};
    char diagnostic[128];snprintf(diagnostic,sizeof(diagnostic),"format=%u queue=%d",unsigned(s.format),int(queues.count(queue)));trace(diagnostic);
    bool bgra=s.format==VK_FORMAT_B8G8R8A8_UNORM || s.format==VK_FORMAT_B8G8R8A8_SRGB;
    if(!bgra && s.format!=VK_FORMAT_R8G8B8A8_UNORM && s.format!=VK_FORMAT_R8G8B8A8_SRGB) std::abort();
    if(!queues.count(queue)) std::abort();
    D(vkCreateBuffer);D(vkGetBufferMemoryRequirements);D(vkAllocateMemory);D(vkBindBufferMemory);
    D(vkCreateCommandPool);D(vkAllocateCommandBuffers);D(vkBeginCommandBuffer);D(vkEndCommandBuffer);
    D(vkCmdPipelineBarrier);D(vkCmdCopyImageToBuffer);D(vkQueueSubmit);D(vkCreateFence);D(vkWaitForFences);
    D(vkMapMemory);D(vkUnmapMemory);D(vkDestroyFence);D(vkDestroyCommandPool);D(vkDestroyBuffer);D(vkFreeMemory);
    auto vkGetPhysicalDeviceMemoryProperties=memoryProperties;

    VkDeviceSize bytes=VkDeviceSize(s.size.width)*s.size.height*4;
    VkBufferCreateInfo bi{VK_STRUCTURE_TYPE_BUFFER_CREATE_INFO};bi.size=bytes;bi.usage=VK_BUFFER_USAGE_TRANSFER_DST_BIT;
    VkBuffer buffer;check(vkCreateBuffer(device,&bi,nullptr,&buffer));

    VkMemoryRequirements req;vkGetBufferMemoryRequirements(device,buffer,&req);
    VkPhysicalDeviceMemoryProperties props;vkGetPhysicalDeviceMemoryProperties(physical,&props);

    uint32_t type=UINT32_MAX;
    for(uint32_t i=0;i<props.memoryTypeCount;++i) if((req.memoryTypeBits&(1u<<i)) && (props.memoryTypes[i].propertyFlags&(VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT|VK_MEMORY_PROPERTY_HOST_COHERENT_BIT))==(VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT|VK_MEMORY_PROPERTY_HOST_COHERENT_BIT)) {type=i;break;}
    if(type==UINT32_MAX) std::abort();
    VkMemoryAllocateInfo mi{VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_INFO};mi.allocationSize=req.size;mi.memoryTypeIndex=type;
    VkDeviceMemory memory;check(vkAllocateMemory(device,&mi,nullptr,&memory));check(vkBindBufferMemory(device,buffer,memory,0));

    VkCommandPoolCreateInfo pi{VK_STRUCTURE_TYPE_COMMAND_POOL_CREATE_INFO};pi.queueFamilyIndex=queues[queue];
    VkCommandPool pool;check(vkCreateCommandPool(device,&pi,nullptr,&pool));
    VkCommandBufferAllocateInfo ai{VK_STRUCTURE_TYPE_COMMAND_BUFFER_ALLOCATE_INFO};ai.commandPool=pool;ai.level=VK_COMMAND_BUFFER_LEVEL_PRIMARY;ai.commandBufferCount=1;
    VkCommandBuffer cmd;check(vkAllocateCommandBuffers(device,&ai,&cmd));
    // Layer-created dispatchable objects need the loader's device dispatch key.
    check(setLoaderData(device,cmd));
    VkCommandBufferBeginInfo begin{VK_STRUCTURE_TYPE_COMMAND_BUFFER_BEGIN_INFO};begin.flags=VK_COMMAND_BUFFER_USAGE_ONE_TIME_SUBMIT_BIT;check(vkBeginCommandBuffer(cmd,&begin));
    VkImageMemoryBarrier bar{VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER};bar.oldLayout=VK_IMAGE_LAYOUT_PRESENT_SRC_KHR;bar.newLayout=VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL;
    bar.srcQueueFamilyIndex=bar.dstQueueFamilyIndex=VK_QUEUE_FAMILY_IGNORED;bar.image=s.images.at(present->pImageIndices[0]);bar.subresourceRange={VK_IMAGE_ASPECT_COLOR_BIT,0,1,0,1};bar.dstAccessMask=VK_ACCESS_TRANSFER_READ_BIT;
    vkCmdPipelineBarrier(cmd,VK_PIPELINE_STAGE_TOP_OF_PIPE_BIT,VK_PIPELINE_STAGE_TRANSFER_BIT,0,0,nullptr,0,nullptr,1,&bar);
    VkBufferImageCopy region{};region.imageSubresource={VK_IMAGE_ASPECT_COLOR_BIT,0,0,1};region.imageExtent={s.size.width,s.size.height,1};
    vkCmdCopyImageToBuffer(cmd,bar.image,VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL,buffer,1,&region);
    bar.oldLayout=VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL;bar.newLayout=VK_IMAGE_LAYOUT_PRESENT_SRC_KHR;bar.srcAccessMask=VK_ACCESS_TRANSFER_READ_BIT;bar.dstAccessMask=0;
    vkCmdPipelineBarrier(cmd,VK_PIPELINE_STAGE_TRANSFER_BIT,VK_PIPELINE_STAGE_BOTTOM_OF_PIPE_BIT,0,0,nullptr,0,nullptr,1,&bar);check(vkEndCommandBuffer(cmd));
    VkFenceCreateInfo fi{VK_STRUCTURE_TYPE_FENCE_CREATE_INFO};VkFence fence;check(vkCreateFence(device,&fi,nullptr,&fence));
    std::vector<VkPipelineStageFlags> stages(present->waitSemaphoreCount,VK_PIPELINE_STAGE_TRANSFER_BIT);
    VkSubmitInfo submit{VK_STRUCTURE_TYPE_SUBMIT_INFO};submit.waitSemaphoreCount=present->waitSemaphoreCount;submit.pWaitSemaphores=present->pWaitSemaphores;submit.pWaitDstStageMask=stages.data();submit.commandBufferCount=1;submit.pCommandBuffers=&cmd;
    check(vkQueueSubmit(queue,1,&submit,fence));check(vkWaitForFences(device,1,&fence,VK_TRUE,10000000000ull));
    trace("copy complete");
    void* mapped;check(vkMapMemory(device,memory,0,bytes,0,&mapped));
    std::string tmp=output+".tmp";FILE* f=fopen(tmp.c_str(),"wb");if(!f) std::abort();
    fprintf(f,"P6\n%u %u\n255\n",s.size.width,s.size.height);
    auto data=(const unsigned char*)mapped;
    for(size_t i=0;i<bytes;i+=4) {unsigned char rgb[3]={data[i+(bgra?2:0)],data[i+1],data[i+(bgra?0:2)]};fwrite(rgb,1,3,f);}
    if(fclose(f)!=0) std::abort();vkUnmapMemory(device,memory);
    vkDestroyFence(device,fence,nullptr);vkDestroyCommandPool(device,pool,nullptr);vkDestroyBuffer(device,buffer,nullptr);vkFreeMemory(device,memory,nullptr);
    if(rename(tmp.c_str(),output.c_str())!=0) std::abort();
}
static VKAPI_ATTR VkResult VKAPI_CALL present(VkQueue q,const VkPresentInfoKHR* p) {
    static bool first=true;if(first){trace("present");first=false;}
    D(vkQueuePresentKHR);
    const char* request=getenv("COF_READBACK_REQUEST");
    if(!request || p->swapchainCount!=1) return vkQueuePresentKHR(q,p);
    FILE* f=fopen(request,"rb");if(!f) return vkQueuePresentKHR(q,p);
    trace("request opened");
    char path[2048]{};fgets(path,sizeof(path),f);fclose(f);
    if(!path[0]) return vkQueuePresentKHR(q,p);
    {std::lock_guard lock(guard);capture(q,p,swaps.at(p->pSwapchains[0]),path);}
    remove(request);
    auto copy=*p;copy.waitSemaphoreCount=0;copy.pWaitSemaphores=nullptr;
    return vkQueuePresentKHR(q,&copy);
}
extern "C" __declspec(dllexport) VKAPI_ATTR PFN_vkVoidFunction VKAPI_CALL vkGetDeviceProcAddr(VkDevice d,const char* n) {
#define HOOK(name,fn) if(!strcmp(n,name)) return (PFN_vkVoidFunction)fn
    HOOK("vkGetDeviceProcAddr",vkGetDeviceProcAddr);HOOK("vkGetDeviceQueue",getQueue);HOOK("vkGetDeviceQueue2",getQueue2);
    HOOK("vkCreateSwapchainKHR",createSwap);HOOK("vkDestroySwapchainKHR",destroySwap);HOOK("vkQueuePresentKHR",present);
    return nextD?nextD(d,n):nullptr;
}
extern "C" __declspec(dllexport) VKAPI_ATTR PFN_vkVoidFunction VKAPI_CALL vkGetInstanceProcAddr(VkInstance i,const char* n) {
    HOOK("vkGetInstanceProcAddr",vkGetInstanceProcAddr);HOOK("vkCreateInstance",createInstance);HOOK("vkCreateDevice",createDevice);
    // Device commands may also be looked up through the instance.
    if(!strcmp(n,"vkGetDeviceProcAddr") || !strcmp(n,"vkGetDeviceQueue") || !strcmp(n,"vkGetDeviceQueue2") || !strcmp(n,"vkCreateSwapchainKHR") || !strcmp(n,"vkDestroySwapchainKHR") || !strcmp(n,"vkQueuePresentKHR")) return vkGetDeviceProcAddr(device,n);
    PFN_vkGetInstanceProcAddr dispatch;
    {std::lock_guard lock(guard);auto it=instances.find(i);
     dispatch=it!=instances.end()?it->second:nextI;}
    return dispatch?dispatch(i,n):nullptr;
}
