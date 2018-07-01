#include<stdio.h>
int main(void)
    {
        int all[100]={0},x,level=0;
        for(int mark;1;level++)
            {   
                scanf("%d",&mark);
                if(mark)
                        for(int timer=0;timer<mark;all[level]+=x,timer++)
                                scanf("%d",&x);
                else
                    break;
            }
        for(int timer=0;timer<=level;timer++)
            printf("%d",all[timer]);
        return 0;
    }