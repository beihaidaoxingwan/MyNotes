/*************************************************************************
	> File Name: 15.HZOJ-90.c
	> Author: chenjianyu
	> Mail: 1975546640@qq.com
	> Created Time: Sat 25 Jan 2025 05:01:38 PM CST
 ************************************************************************/

#include<stdio.h>

int main(){
    int a = 0;
    scanf("%d", &a);
    int bai, shi, ge;
    bai = a / 100;
    shi = a % 100 / 10;
    ge = a % 10;
    printf("%d\n", bai);
    printf("%d\n", shi);
    printf("%d\n", ge);
    return 0;
}
