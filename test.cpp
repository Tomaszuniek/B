#include "SqrTest.cpp"
#include <gtest/gtest.h>

TEST(EquationTest, NoZeros) {
// some incorrect values
//    zero_exception ex;
    Kwadrat test_1(10,1,1);
    EXPECT_THROW(test_1.miejscezerowe(1), myexception);
    Kwadrat test_2(10,2,1);
    EXPECT_THROW(test_2.miejscezerowe(2), myexception);
}

TEST(EquationTest, OneZero) {
    //    one correct equation
    Kwadrat test_3(1,2,1);
    ASSERT_EQ(test_3.miejscezerowe(1), -1);
    Kwadrat test_4(1,2,1);
    EXPECT_THROW(test_4.miejscezerowe(2), myexception);

}

TEST(EquationTest, TwoZeros) {
//    some correct values
    Kwadrat test_5(1,2,1);
    EXPECT_THROW(test_5.miejscezerowe(2), myexception);
    Kwadrat test_6(1,-4,3);
    ASSERT_EQ(test_6.miejscezerowe(2), 3);
    ASSERT_EQ(test_6.miejscezerowe(1), 1);
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
