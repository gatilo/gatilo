//
// Created by ashokpant on 9/21/16.
//

#include <iostream>
#include "gtest/gtest.h"

TEST(GatiloTests, serverTest) {
    EXPECT_EQ(1, 1);
}

TEST(IndependentMethod, clientTest) {
    EXPECT_NE(0, 1);
}
int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}