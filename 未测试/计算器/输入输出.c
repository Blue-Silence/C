#include<stdio.h>
#include"Struct.h"

int main(void)
    {
        void Calculate(struct struction * start,struct struction * end);
        struct struction * Create_List(int numberof);

        struct struction * head=Create_List(2);
        (head->ptrnext)->sign=-3;
        struct struction * ptrnow=head->ptrnext;
        struct struction * a;
        while(1)
            {
                a=ptrnow->ptrnext=Create_List(1);
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

        Calculate(head->ptrnext,a);
        printf("%f",(head->ptrnext->num));

        return 0;
    }