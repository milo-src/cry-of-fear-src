# TODO list for xash-rt and RayTracedGL1, ordered by importance.


- [ ] FSR4 Support
    - AMD have delighted me by releasing the FSR Redstone SDK with VK support literally yesterday (As of the 29th of October 2026)
    - Reading up proved me wrong about the INT8 upscaling and FG model being absolute ass on the older GPUs that support it.
    - They have also provided FSR4 support for RX 6xxx series, so we can FULLY drop FSR3.1
    
- [x] Change the behaviour of the menu/engine when toggling between FSR3, DLSS + FG ON/OFF
    - Remove the separate rt_framegen_tech cvar and just automatically use the frame generator for the currently selected upscaler (e.g remove rt_framegen_tech cvar, keep rt_framegen cvar for toggling FG on/off)
    - Do the same with the rt_upscale_fsr3/dlss - just keep rt_upscale_tech and rt_upscale_quality
    - ONLY keep rt_upscale_tech, rt_upscale_quality and rt_framegen - if rt_upscale_quality is 0 on game boot dont build swapchains (consider 0 as disabled and dont build swapchains OR build swapchains so user can quickly re-enable upscaling + keep rt_upscale_enabled and add a toggle for it)
    - When changing upscalers, require a game restart - dont try rebuilding swapchain stack
    - Build swapchain stack ONLY on game boot
    - Unify FSR and DLSS stack - keep upscaling and FG OFF by default, let user choose on first game boot/first boot after update, ultra perf in FSR3 = ultra perf in DLSS etc. Both FSR3 and DLSS get the same data from one single place in the codebase, no messy workarounds for one or the other.
    - FULLY remove obsolete _rt_fsr3_framegen_available cvar

- [x] DLSS4.5 support

	- [x] Upscaling
    - [x] Frame gen
    - [ ] Ray Reconstruction

- [ ] Update the ray tracing calculations so denoisers already get semi-clean data to work off of
    - [x] ReSTIR GI
    - [x] Quasi Monte Carlo
    - [ ] LTC for HL1 beam particles


- [ ] Rework base HL1 campaign scenes to be up-to-date for this engine fork.

- [ ] Get a better way to toggle RTGL1 devmode, maybe a cvar or launch argument or a dev/non-dev build
    - Potential FPS savings for non-dev builds because devmode does take quite a lot of FPS to run and a non-dev build could have all of the dev mode functionality stripped out.

- [x] Refactor all shaders
    - Bloom is unstable and flickers, lens flares dont work, volumetrics are over powering scenes, lights look wonky.

- [ ] Launcher app for updating/managing the installation
    - atp this project is so bloated and installing it is such a mess I might just whip up a simple .net or Electron app to manage installations.
    - Would include an updater, detailed writeups of what works what doesnt etc.

- [ ] Platform specific denoisers
	- DLSS Ray Reconstruction for nVidia
	- AMD Ray Regeneration for AMD RDNA3+ - NRD fallback
   		- Might also just drop RDNA2 support, its an old dying platform.
      	- Lower end RDNA3 cards struggle with the WMMA model, better to use NRD on them. The option will be there though, for the masochists who enjoy playing at 30 FPS.
      	- AMD RR is also DX12 only like its cousin FSR4 - This will require waiting for the VK release as passing every bit of data a denoiser needs through a DX12 interop would kill performance.
	- NRD for other platforms (Intel, [*Snapdragon?!??!?! Apple Silicon?!?!?!?!*](https://youtu.be/h3lZXXO8qTk?t=15))
		- I am not writing OIDN code for the 4 Intel GPU users in the world.
    - DLSS RR will have to wait until AMD drops the Redstone SDK for Vulkan. I will cross both those bridges at the same time.

- [ ] **STOP** RTGL1 bouncing light so much (I dont get it, why does every surface bounce light so much by default?????)
    - PBR Estimation?
        - PBR is so old there is hundreds if not thousands of very good ways of doing this automatically (GIMP is a very good example of this, can create normal and roughness maps on even 128x128 images.)
        - Or just run a one-time algo that will do this for EVERY material in the game, this however is a lot of work requiring export of EVERY material in EVERY HL1 mod and then building all the BXT7 compressed .ktx2 files for them (100 textures took 20 minutes to bake...)
        - A custom python script based on OpenCV worked well.
        - laigter/OpenBump also work very well.
    - texture.json overrides?
        - Options like Roughness, Concrete etc. that dont affect the look of the material but affect how light interacts.

- [] Release automation
    - One click workflow that creates a release with all the required files
    - Auto fills changes with recent commits (Preferrably run through some AI to make them readable by the average Joe)

- [ ] Finding a better way of estimating Quake polygon lights (Yes, **QUAKE** polygon lights, HL1 inherited those with VRAD)
    - BSP files dont contain light entity data, only the VRAD data. Genuinely 0 clue on what to do here.
    - This mainly helps with automatic gLTF scene creation when loading a map that does not have one.
    - This will hopefully obsolete manual scene creation and editing in the future 🤞 

- [ ] PBR materials for HD models
    - The Gauss Gun, Rocket Launcher, Barney model, HEV model, Revolver, MP5 and all of that do not have PBR textures and therefore dont get the same visual flair as the LD models.


- [ ] Linux native builds



