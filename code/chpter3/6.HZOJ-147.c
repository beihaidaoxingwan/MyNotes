/*************************************************************************
	> File Name: 6.HZOJ-147.c
	> Author: chenjianyu
	> Mail: 1975546640@qq.com
	> Created Time: Wed 05 Feb 2025 03:18:18 PM CST
 ************************************************************************/

#include<stdio.h>
#include<string.h>
#include<assert.h>

int main(){
    int len = 0;
    char num[10000] = "\0";
    printf("Please input number:");
    scanf("%s", num);
    len = strlen(num);
    int ret = *(num+len-1);
    printf("it is [%d]\n",ret);
    printf("%s\n", ret % 2 ? "NO" : "YES");
    return 0;
}
