#ifndef _DUMMYPROJECT_DUMMY_HPP_
#define _DUMMYPROJECT_DUMMY_HPP_

namespace global_initializer_dependency
{
    class DummyClass
    {
        public: 
            /**
             * Print a welcome to stdout
             * \return nothing
             */
            void welcome();
    };

} // end namespace global_initializer_dependency

#endif // _DUMMYPROJECT_DUMMY_HPP_
