/*************************************************************************
	> File Name: 6.sscanf.c
	> Author: 
	> Mail: 
	> Created Time: Fri 24 Jan 2025 04:42:15 PM CST
 ************************************************************************/

#include<stdio.h>

int main(){
    char s[100] = "123 456 789";
    int a, b, c;
    sscanf(s, "%d%d%d", &a, &b, &c );
    printf("a = %d, b = %d, c = %d\n", a, b, c);

    return 0;
}
