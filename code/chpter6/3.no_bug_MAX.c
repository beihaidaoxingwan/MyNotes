/*************************************************************************
	> File Name: 3.no_bug_MAX.c
	> Author: chenjianyu
	> Mail: 1975546640@qq.com
	> Created Time: Thu 13 Feb 2025 03:32:36 PM CST
 ************************************************************************/

#include<stdio.h>

#define P(func){\
    printf("%s = %d\n", #func, func);\
}

#define MAX(a, b) ({\
    int __a = (a), __b = (b);\
    __a > __b? __a : __b;\
})

int main(){
    P(MAX(2, 3));
    P(5 + MAX(2, 3));
    P(MAX(2, 3 > 4 ? 3 : 4));
    int a = 7;
    P(MAX(a++, 6));
    printf("a = %d\n", a);

    return 0;
}
