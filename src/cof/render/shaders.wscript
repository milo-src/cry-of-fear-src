from pathlib import Path
import os

def options(opt):
    pass

def configure(conf):
    root=Path(os.environ['COF_REPO_ROOT'])
    validator=root/'deps/rtx/rtgl-source/Source/FSR3/sdk/tools/binary_store/glslangValidator.exe'
    conf.find_program('glslangValidator',path_list=[str(validator.parent)],var='GLSLANG')
    conf.env.COF_SHADER_INCLUDES=['-I'+conf.path.abspath(), '-I'+conf.path.parent.find_dir('Generated').abspath(), '-I'+conf.path.find_dir('LPM').abspath()]

def build(bld):
    for shader in ('CmPrepareFinal.comp','RtVolumetric.rgen','RtRaygenPrimary.rgen','RtRaygenReflRefr.rgen','RtRaygenIndirectInit.rgen','RtRaygenIndirectFinal.rgen'):
        bld(rule='${GLSLANG} -V --target-env vulkan1.2 ${COF_SHADER_INCLUDES} ${SRC} -o ${TGT}',
            source=shader,target=shader+'.spv',
            dep_nodes=bld.path.ant_glob('**/*.h **/*.glsl **/*.inl')+bld.path.parent.find_dir('Generated').ant_glob('**/*.h'),
            name='cof_'+shader)
