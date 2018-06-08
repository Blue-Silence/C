#include"Struct.h"
#include<stdio.h>

struct struction * sort(struct struction * head)//head 为输入链表头，返回排序后的二叉树头
    {
        void x(struct struction * head,struct struction * ptr);
        struct struction * ptrnow=head->ptrnext;
        struct struction * a;

        while(ptrnow!=NULL)
            {
                a=ptrnow->ptrnext;
                x(head,ptrnow);
                ptrnow=a;
            }
        return head;
    }

void x(struct struction * head,struct struction * ptr)
    {
        struct struction * ptrnow=head;

        while(1)
            {
                if(ptr->num>ptrnow->num)
                    {
                        if(ptrnow->ptrnext!=NULL)
                            ptrnow=ptrnow->ptrnext;
                        else
                            break;
                    }
                else
                    {
                        if(ptrnow->ptrlast!=NULL)
                            ptrnow=ptrnow->ptrlast;
                        else
                            break;
                    }
            }
        if(ptr->num>ptrnow->num)
            ptrnow->ptrnext=ptr;
        else
            ptrnow->ptrlast=ptr;
        ptr->ptrnext=ptr->ptrlast=NULL;

    }