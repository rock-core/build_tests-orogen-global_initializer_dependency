#include <iostream>
#include <global_initializer_dependency/Dummy.hpp>

int main(int argc, char** argv)
{
    global_initializer_dependency::DummyClass dummyClass;
    dummyClass.welcome();

    return 0;
}
