/*************************************************************************
	> File Name: 4.practice_n_byte.c
	> Author: 
	> Mail: 
	> Created Time: Fri 24 Jan 2025 03:54:41 PM CST
 ************************************************************************/

//使用printf函数，求解一个数字n的十进制表示的数字位数
#include<stdio.h>

int main(){
    int n, digits;
    printf("Please input number n:\n");
    scanf("%d", &n);
    digits = printf("%d", n);
    printf(" have %d byte(decimal)\n", digits);

    return 0;
}
