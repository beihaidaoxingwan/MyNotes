/*************************************************************************
	> File Name: 2.HZOJ-467.c
	> Author: chenjianyu
	> Mail: 1975546640@qq.com
	> Created Time: Sat 08 Feb 2025 10:42:27 AM CST
 ************************************************************************/

#include<stdio.h>


long f(int n){
    if(n == 1) return 1;
    return n * f(n - 1);
}

int main(){
    int n = 0;
    scanf("%d", &n);
    printf("%ld\n", f(n));
    return 0;
}
