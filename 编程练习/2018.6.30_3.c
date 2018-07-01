#include<stdio.h>
int main(void)
{

    unsigned alla[5]={0};
    unsigned allb[5]={0};
    char data[10];
    int num=1;
    scanf("%d",&num);
    getchar();
    void x(char * ptr,unsigned *x,unsigned *y);
    for(int timer=0;timer<num;timer++)
    {
        gets(data);
        puts(data);
        x(data,alla+timer,allb+timer);
    }
    for(int timer=0;timer<num;timer++)
    {
        if(alla[timer]==0&&allb[timer]==0)
            puts("Yes");
        else
            puts("No");
    }
    return 0;
}

void x(char * ptr,unsigned *x,unsigned *y)
{

    for(;(*ptr)!='\0';ptr++)
    {
        if(*ptr=='(')
            (*x)++;
        else if(*ptr==')')
            (*x)--;
        else if(*ptr=='[')
            (*y)++;
        else
            (*y)--;
    }
}