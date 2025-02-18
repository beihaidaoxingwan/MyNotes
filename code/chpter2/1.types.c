/*************************************************************************
	> File Name: 1.types.c
	> Author: 
	> Mail: 
	> Created Time: Fri 24 Jan 2025 01:45:05 PM CST
 ************************************************************************/

#include<stdio.h>
#include<inttypes.h>

int main(){
    int a = 123, b = 97, c, d;
    long long e;
    c = 2147483647;
    d = 9651;
    printf("a = %d,\nb = %d,\nc = %d,\nd = %d\n", a, b, c, d);
    c = c + 1;
    printf("now c is %d\n", c);
    printf("INT32_MIN = %d\n", INT32_MIN);
    printf("INT32_MAX = %d\n", INT32_MAX);
    e = INT32_MAX + 1LL;
    printf("e is %lld\n", e);
    float f = e + 0.1;
    double ff =e + 0.1;
    printf("float f is %f\n", f);
    printf("double ff is %lf\n", ff);
    char g = 'a';
    printf("g is %c\n", g);
    printf("g's number is %lu\n", g);
    printf("sizeof(int) is %lu\n", sizeof(int));
    printf("sizeof(long long) is %lu\n", sizeof(long long));
    printf("sizeof(float) is %lu\n", sizeof(float));
    printf("sizeof(double) is %lu\n", sizeof(double));
    printf("sizeof(char) is %lu\n", sizeof(char));

    return 0;
}
