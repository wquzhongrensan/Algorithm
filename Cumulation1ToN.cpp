//
//  Cumulation1ToN.cpp
//  
//
//  Created by duoyi on 2018/8/3.
//

#include <stdio.h>

/**
 计算 1+2+3+...+n
 要求不能使用 加减乘除 for while if else switch case关键字  (A?B:C)
 */

typedef unsigned int (*fun)(unsigned int);

unsigned int Solution3_Teminator(unsigned int n)
{
    return 0;
}

unsigned int Sum_Solution3(unsigned int n)
{
    static fun f[2] = {Solution3_Teminator, Sum_Solution3};
    return n + f[!!n](n - 1);
}

int main(int argc, char* argv[])
{
    int expected = 55;
    const unsigned int n = 10;
    if(Sum_Solution3(n) == expected)
        printf("Solution3 passed.\n");
    else
        printf("Solution3 failed.\n");
    
    return 0;
}


class A;
A* Array[2];

class A
{
public:
    virtual unsigned int Sum (unsigned int n)
    {
        return 0;
    }
};

class B: public A
{
public:
    virtual unsigned int Sum (unsigned int n)
    {
        return Array[!!n]->Sum(n-1) + n;
    }
};

int Sum_Solution2(int n)
{
    A a;
    B b;
    Array[0] = &a;
    Array[1] = &b;
    
    int value = Array[1]->Sum(n);
    
    return value;
}
