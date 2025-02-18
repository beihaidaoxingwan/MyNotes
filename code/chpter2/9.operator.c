/*************************************************************************
	> File Name: 9.operator.c
	> Author: 
	> Mail: 
	> Created Time: Sat 25 Jan 2025 09:14:00 AM CST
 ************************************************************************/

#include<stdio.h>
#define PRINT(stmt, func){\
    printf("%s\n", #stmt);\
    stmt;\
    func;\
}

int main(){
    int a = 5, b = 2, c = 7, d;
    printf("a = %d, b = %d, c = %d\n", a, b, c);
    PRINT(a = c, printf("a = %d, b = %d, c = %d\n", a, b, c));
    PRINT(d = a + c, printf("d = %d\n", d));
    PRINT(d = a * c, printf("d = %d\n", d));
    PRINT(d = a - c, printf("d = %d\n", d));
    PRINT(d = a / c, printf("d = %d\n", d));
    return 0;
}
