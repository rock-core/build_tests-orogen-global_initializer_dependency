#ifndef GLOBAL_INITIALIZER_DEPENDENCY_DATA_HPP
#define GLOBAL_INITIALIZER_DEPENDENCY_DATA_HPP

#include <iostream>

namespace global_initializer_dependency {
    struct Data {
        int value = 0;

        Data() {
            std::cout << "global_initializer_dependency::Data()" << std::endl;
        }
    };
}

#endif