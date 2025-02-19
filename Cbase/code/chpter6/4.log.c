/*************************************************************************
	> File Name: 4.log.c
	> Author: chenjianyu
	> Mail: 1975546640@qq.com
	> Created Time: Thu 13 Feb 2025 04:21:18 PM CST
 ************************************************************************/

#include<stdio.h>

#define DEBUG 1
#define ERROR 2
#define FATAL 3
#define NO_LOG 4
#define LOG(level)\
if(level >= LOG_LEVEL)\
printf("[%s : %d]", __FILE__, __LINE__),\
printf

int main(){
    LOG(DEBUG)("level = DEBUG\n");
    LOG(ERROR)("level = ERROR\n");
    LOG(FATAL)("level = FATAL\n");
    LOG(NO_LOG)("level = NO_LOG\n");
    return 0;
}
