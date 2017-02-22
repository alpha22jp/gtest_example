#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include "mylib.hpp"

using namespace ::testing;

class MyTest : public Test {};

class FooBarMock : public FooBar {
 public:
    MOCK_METHOD0(foo, void());
    MOCK_METHOD0(bar, void());
};

TEST_F(MyTest, test) {
    FooBarMock foobar;
    {
        InSequence s;
        EXPECT_CALL(foobar, foo());
        do_foo(foobar);
    }
    {
        InSequence s;
        EXPECT_CALL(foobar, bar());
        do_bar(foobar);
    }
}
