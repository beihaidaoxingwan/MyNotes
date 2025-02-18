/*************************************************************************
	> File Name: 4.HZOJ-465.c
	> Author: chenjianyu
	> Mail: 1975546640@qq.com
	> Created Time: Sat 08 Feb 2025 11:45:35 AM CST
 ************************************************************************/

#include<stdio.h>

int digit(long n, int i){
    if(i <= 1)return n % 10;
    return digit(n / 10, i - 1);
}

int main(){
    int  i = 0;
    long n = 0;
    scanf("%ld %d", &n, &i);
    printf("%d\n", digit(n, i));
    return 0;
}
