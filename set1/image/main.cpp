#include "image.h"

#include <gtest/gtest.h>

TEST(Image,DefaultConstuctor){

        Image a;
        //a.move(1,1);
        EXPECT_EQ(1,a.move(1,1));
}
