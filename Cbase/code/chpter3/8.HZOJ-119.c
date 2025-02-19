/*************************************************************************
	> File Name: 7.HZOJ-119.c
	> Author: chenjianyu
	> Mail: 1975546640@qq.com
	> Created Time: Fri 07 Feb 2025 08:31:35 AM CST
 ************************************************************************/

#include<stdio.h>

int days(int y, int m){
    int day = 0;
    switch(m){
        case 2: day = 28 + ((!(y % 4) && y % 100) || (!(y % 400))); break;
        case 7: day = 31; break;
        default: day = 30 + ((m % 7) % 2); break;
    }
    return day;
}

void output_last_day(int y, int m, int d){
    d -= 1;
    if(d == 0){
        m = m - 1;
        if (m == 0){
            y = y - 1;
            m = 12;
        }
        d = days(y, m);
    }
    printf("%d %d %d\n", y, m, d);
}

void output_next_day(int y, int m, int d){
    d += 1;
    if(d > days(y, m)){
        m += 1;
        if(m > 12){
            y += 1;
            m = 1;
        }
        d = 1;
    }
    printf("%d %d %d\n", y, m, d);
}

int main(){
    int y, m, d;
    scanf("%d %d %d", &y, &m, &d);
    output_last_day(y, m, d);
    output_next_day(y, m, d);
    return 0;
}
