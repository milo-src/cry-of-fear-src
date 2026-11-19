from pathlib import Path
import os

def options(opt):
    pass

def configure(conf):
    root=Path(os.environ['COF_REPO_ROOT'])
    validator=root/'deps/rtx/rtgl-source/Source/FSR3/sdk/tools/binary_store/glslangValidator.exe'
    conf.find_program('glslangValidator',path_list=[str(validator.parent)],var='GLSLANG')
    conf.env.COF_SHADER_INCLUDES=['-I'+conf.path.abspath(), '-I'+conf.path.parent.find_dir('Generated').abspath(), '-I'+conf.path.find_dir('LPM').abspath()]

def compile_shader(task):
    return task.exec_command(list(task.env.GLSLANG) +
        ['-V', '--target-env', 'vulkan1.2'] + list(task.env.COF_SHADER_INCLUDES) +
        [task.inputs[0].abspath(), '-o', task.outputs[0].abspath()])

def build(bld):
    # dep_nodes on a rule task *generator* is not forwarded to the created task.
    # Make includes explicit inputs so changes to HitInfo / owned GLSL really
    # invalidate SPIR-V. Only input 0 is passed to glslang as a translation unit.
    includes=bld.path.ant_glob('**/*.h **/*.glsl **/*.inl')+bld.path.parent.find_dir('Generated').ant_glob('**/*.h')
    for shader in ('CmPrepareFinal.comp','RtVolumetric.rgen','RtRaygenDirect.rgen','RtRaygenPrimary.rgen','RtRaygenReflRefr.rgen','RtRaygenIndirectInit.rgen','RtRaygenIndirectFinal.rgen'):
        bld(rule=compile_shader, vars=['GLSLANG','COF_SHADER_INCLUDES'],
            source=[bld.path.find_resource(shader)]+includes,target=shader+'.spv',
            name='cof_'+shader)
