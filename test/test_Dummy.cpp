#include <boost/test/unit_test.hpp>
#include <global_initializer_dependency/Dummy.hpp>

using namespace global_initializer_dependency;

BOOST_AUTO_TEST_CASE(it_should_not_crash_when_welcome_is_called)
{
    global_initializer_dependency::DummyClass dummy;
    dummy.welcome();
}
