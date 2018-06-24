#include<stdio.h>
#include"Struct.h"
#include<stdlib.h>
#define create() (struct struction * )malloc(sizeof(struct struction))
int main(void)//输入算式并以字符/符号结尾
    {
        void Calculate(struct struction * start,struct struction * end);
        

        struct struction * head=create();
        head->ptrnext=create();
        head->ptrnext->ptrlast=head;
        (head->ptrnext)->sign=-3;
        struct struction * ptrnow=head->ptrnext;
        struct struction * a;
        while(1)
            {
                a=ptrnow->ptrnext=create();
                a->ptrlast=ptrnow;
                a->ptrnext=NULL;
                a->sign=0;

                char ch;

                if(scanf("%lf",&(a->num)))
                    ;
                else
                    {
                        ch=getchar();

                        if(ch=='(')
                            a->sign=-3;
                        else if(ch=='/')
                            a->sign=-2;
                        else if(ch=='-')
                            a->sign=-1;
                        else if(ch=='+')
                            a->sign=1;
                        else if(ch=='*')
                            a->sign=2;
                        else if(ch==')')
                            a->sign=3;
                        else
                            {
                                a->sign=3;
                                break;
                            }
                        
                    }
                ptrnow=ptrnow->ptrnext;
            }

        a->ptrnext=create();
        Calculate(head->ptrnext,a);
        printf("%f",(head->ptrnext->num));

        return 0;
    }