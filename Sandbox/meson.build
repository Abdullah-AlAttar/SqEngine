# project('Sandbox', 'cpp',
#   version : '0.1',
#   default_options : ['warning_level=3', 'cpp_std=c++14'])


exe = executable('Sandbox',
           'main.cpp',
           dependencies : [squeakyengine_dep],
           include_directories : includes,
           cpp_args : ['-DFMT_HEADER_ONLY'])

benchmark('Sandbox benchmark', exe)