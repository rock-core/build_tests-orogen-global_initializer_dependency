rock_library(global_initializer_dependency
    SOURCES Dummy.cpp
    HEADERS Dummy.hpp)

rock_executable(global_initializer_dependency_bin Main.cpp
    DEPS global_initializer_dependency)

