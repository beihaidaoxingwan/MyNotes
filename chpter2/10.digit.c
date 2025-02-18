/*************************************************************************
	> File Name: 10.digit.c
	> Author: 
	> Mail: 
	> Created Time: Sat 25 Jan 2025 09:29:12 AM CST
 ************************************************************************/

#include<stdio.h>

void print_digit(int x){
    for (int i = 31; i >= 0; i--){
        printf("%c", (x & (1 << i)) ? '1' : '0');
    }
    printf("\n");
    return ;
}

int main(){
    int a = 5, b = 3;
    printf("a = ");print_digit(a);
    printf("b = ");print_digit(b);
    printf("a & b = ");print_digit(a & b);
    printf("a | b = ");print_digit(a | b);
    printf("a & b = %d\n", a & b);
    printf("a | b = %d\n", a | b);
    return 0;
}
