// cmake_app.h: 标准系统包含文件的包含文件
// 或项目特定的包含文件。

#pragma once

#include "cmake_app.h"

#include "test.h"
#include "test/test.h"
#include "math/circle.h"
#include "config.h"

#ifdef USE_MYMATH
    void foo()
    {
        std::cout << "def USE_MYMATH \n";
    }
#else
    void foo()
    {
        std::cout << "not def USE_MYMATH \n";
    }    
#endif

int main()
{
    printf("hello world!!\n");
    foo();
    print_test();
    test_print();
    circle c;
    std::cout << VERSION_MAJOR << std::endl;
    //std::cout << VERSION_MANOR << std::endl;
    return 0;
}
