/*************************************************************************
	> File Name: 2.str.c
	> Author: chenjianyu
	> Mail: 1975546640@qq.com
	> Created Time: Thu 13 Feb 2025 03:24:04 PM CST
 ************************************************************************/

#include<stdio.h>

#define RUN(func){\
    func;\
    printf("%s done\n", #func);\
}

void test1(){
    printf("this is test1\n");
    return;
}

void test2(int a, int b){
    printf("this is test2: %d, %d\n", a, b);
    return;
}


int main(){
    RUN(test1);
    RUN(test2(2, 3));
}
