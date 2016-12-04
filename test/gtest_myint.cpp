#include "gtest/gtest.h"

#include "myint.h"

TEST(test_myint, is_odd)
{
    EXPECT_EQ(true, is_odd(1));
    EXPECT_EQ(false, is_odd(2));
    EXPECT_EQ(true, is_odd(3));
    EXPECT_EQ(false, is_odd(4));
}

TEST(test_myint, is_even)
{
    EXPECT_EQ(false, is_even(1));
    EXPECT_EQ(true, is_even(2));
    EXPECT_EQ(false, is_even(3));
    EXPECT_EQ(true, is_even(4));
}

#include "myint.hpp"

class MyIntTest : public ::testing::Test {};

TEST_F(MyIntTest, isOdd) {
    MyInt mi1 = MyInt(10);
    EXPECT_EQ(false, mi1.isOdd());

    MyInt mi2 = MyInt(13);
    EXPECT_EQ(true, mi2.isOdd());
}


TEST_F(MyIntTest, isEven) {
    MyInt mi1 = MyInt(10);
    EXPECT_EQ(true, mi1.isEven());

    MyInt mi2 = MyInt(13);
    EXPECT_EQ(false, mi2.isEven());
}
