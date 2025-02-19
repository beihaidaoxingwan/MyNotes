/*************************************************************************
	> File Name: 3.HZOJ-466.c
	> Author: chenjianyu
	> Mail: 1975546640@qq.com
	> Created Time: Sat 08 Feb 2025 10:54:28 AM CST
 ************************************************************************/

#include<stdio.h>

int m = 0, sum = 0;

void transform(int n){
    if(n == 0)return;
    m = m * 10 + n % 10;
    return transform(n / 10);
}

void sum_special(int n){
    if(n == 0)return;
    transform(n);
    if (n == m)sum += 1;
    m = 0;
    return sum_special(n-1);
}


int main(){
    int n = 0;
    scanf("%d", &n);
    sum_special(n);
    printf("%d\n", sum);
    return 0;

}
