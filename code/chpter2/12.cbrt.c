/*************************************************************************
	> File Name: 10.cbrt.c
	> Author: 
	> Mail: 
	> Created Time: Sat 25 Jan 2025 02:31:13 PM CST
 ************************************************************************/

#include <stdio.h>
#include <math.h>
#include <float.h>

int main(){
    double x = 0;
    printf("Please input x:");
    scanf("%lf", &x);
    x = cbrt(x);
    printf("cbrt(x) = %lf\n", x);
    return 0;
}
