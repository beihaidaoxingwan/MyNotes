/*************************************************************************
	> File Name: 7.sprintf.c
	> Author: 
	> Mail: 
	> Created Time: Fri 24 Jan 2025 06:20:34 PM CST
 ************************************************************************/

#include<stdio.h>

int main(){
    char str[100] = "192.168.1.245";
    int a,b,c,d;
    sscanf(str, "%d.%d.%d.%d", &a, &b, &c, &d);
    sprintf(str, "%d:%d:%d:%d", a, b, c, d);
    printf("str = %s\n", str);

    return 0;
}
