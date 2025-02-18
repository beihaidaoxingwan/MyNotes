/*************************************************************************
	> File Name: 3.scanf.c
	> Author: 
	> Mail: 
	> Created Time: Fri 24 Jan 2025 03:20:38 PM CST
 ************************************************************************/

#include<stdio.h>

int main(){
    int a, b, n;
    printf("normal scanf, input a, b:");
    n = scanf("%d%d", &a, &b);
    printf("a = %d, b = %d\n", a, b);
    printf("n is %d\n", n);
    printf("special scanf, input a, b:");
    n = scanf("%dabc%d", &a,&b);
    printf("a = %d, b = %d\n", a, b);
    printf("n is %d\n", n);

    return 0;
}
