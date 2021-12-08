#include "gtest/gtest.h"


GTEST_API_ int main(int arg, char*argv[]){
    testing::InitGoogleTest(&arg,argv);
    int ret = RUN_ALL_TESTS();
    return ret;
}
