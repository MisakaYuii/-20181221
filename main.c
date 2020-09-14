#include "head.h"
#include<stdio.h>
//20181221曾宇涛
int main(void){
    int a, b;
    printf("enter two numbers:");
    scanf("%d %d", &a, &b);
    printf("add:%d\n", add(a, b));
    printf("sub:%d\n", sub(a, b));
    printf("mul:%d\n", mul(a, b));
    printf("div:%lf\n", div(a, b));
    return 0;
}
