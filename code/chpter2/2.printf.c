/*************************************************************************
	> File Name: 2.printf.c
	> Author: 
	> Mail: 
	> Created Time: Fri 24 Jan 2025 03:03:48 PM CST
 ************************************************************************/

#include<stdio.h>
int main(){
    int n1, n2;
    n1 = printf("hello world!\n");
    printf("%d\n", '\n');
    int a = 123;
    n2 = printf("hello world: %d\n", a);
    printf("n1 = %d, n2 = %d\n", n1, n2);

    return 0;
}
