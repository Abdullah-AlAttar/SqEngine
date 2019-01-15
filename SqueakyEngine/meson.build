# project('SqueakyEngine', 'cpp',
#   version : '0.1',
#   default_options : ['warning_level=3', 'cpp_std=c++14'])

# These arguments are only used to build the shared library
# not the executables that use the library.
lib_args = ['-DBUILDING_SQUEAKYENGINE']

src_prfx = './src/sq/'
sources = [src_prfx + 'Application.cpp',
           src_prfx + 'Logger.cpp',
           src_prfx + 'Layer.cpp',
           src_prfx + 'LayerStack.cpp',
           src_prfx + 'platform/linux/LinuxWindow.cpp']
cmplr = meson.get_compiler('cpp')
deps = [cmplr.find_library('glfw'),
        cmplr.find_library('GL'),
        cmplr.find_library('GLU')]

shlib = shared_library('squeakyengine',
  sources : sources,
  dependencies : deps,
  cpp_args : lib_args,
  # cpp_pch : ['pch/sq.pch.h'],
  include_directories : [includes]
)

# test_exe = executable('squeakyengine', 'squeakyengine_test.cpp',
#   link_with : shlib)
# test('squeakyengine', test_exe)

# Make this library usable as a Meson subproject.
squeakyengine_dep = declare_dependency(
  dependencies : deps,
  link_with : shlib)
