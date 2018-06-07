#include<stdio.h>
int main(void){
    int num,Bool;
    printf("Enter a number(under12),thanks.");
    Bool=scanf("%d",&num);
    int all=1;
    if(Bool==1)
    for(int i=1;Bool==1&&i<=num&&num<13;i++){
        all=all*i;
    }
    else
    printf("Try again.");
    printf("The number you need is %d.",all);
}//12以内的阶乘