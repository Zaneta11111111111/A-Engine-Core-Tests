#include <gtest/gtest.h>
#include "../Core/core/WindowProperties.hpp"

TEST(WindowProperties_test, BasicAssertions)
{
    Global::WindowProperties *test1 = &Global::WindowProperties::getInstance();
    //const int &getWindowHeight();
    // const int &getWindowWidth();
    //void setWindowWidth(int);
    //void setWindowHeight(int);
    int width = 50, height = 50;
    test1->setWindowWidth(width);
    test1->setWindowHeight(height);
    EXPECT_EQ(width, test1->getWindowWidth());
    EXPECT_EQ(height, test1->getWindowHeight());

}
