project('Squeaky', 'cpp',
  version : '0.1',
  default_options : ['warning_level=3', 'cpp_std=c++17'])


includes = [include_directories('./SqueakyEngine/include'),
            include_directories('./SqueakyEngine/src'),
            include_directories('./external/spdlog')]
subdir('SqueakyEngine')
subdir('Sandbox')