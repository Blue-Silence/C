#include"Struct.h"
struct struction * Lisp_To_Tree(struct struction * ptrb,struct struction * ptre)
//将链表变为二叉树，ptrb 为链表头， ptre 为链表尾，返回Root
    {
        struct struction * b=ptrb;
        struct struction * e=ptre;

        while(b!=e)
            {
                b=b->ptrnext;

                if(b!=e)
                    e=e->ptrlast;
                else
                    ;
            }
        
        if(ptrb->ptrnext==ptre)
                e->ptrnext=ptrb->ptrnext=ptrb->ptrlast=NULL;
        else if(ptrb->ptrnext==ptre->ptrlast)
            {
                b->ptrlast=ptrb;
                b->ptrnext=ptre;
            }
        else
            {
                b->ptrlast=Lisp_To_Tree(ptrb,b->ptrlast);
                b->ptrnext=Lisp_To_Tree(b->ptrnext,ptre);
            }
    }


struct struction * Tree_To_List(struct struction * ptrall)//反向，ptrall 为Root，返回链表头
    {
        
        void a(struct struction * ptr,struct struction ** ptr_b,struct struction ** ptr_e);
        
        struct struction ** ptr_l_return_b;
        struct struction ** ptr_l_return_e;
        struct struction ** ptr_r_return_b;
        struct struction ** ptr_r_return_e;

        if(ptrall->ptrnext=NULL)
            ;
        else
            {
                a(ptrall->ptrnext,ptr_r_return_b,ptr_r_return_e);
                ptrall->ptrnext=*ptr_r_return_b;
                (*ptr_r_return_b)->ptrnext=ptrall;
            }

        if(ptrall->ptrlast=NULL)
            return ptrall;
        else
            {
                a(ptrall->ptrlast,ptr_l_return_b,ptr_l_return_e);
                ptrall->ptrlast=*ptr_l_return_e;
                (*ptr_l_return_e)->ptrnext=ptrall;
                return *ptr_l_return_b;
            }

    }


void a(struct struction * ptr,struct struction ** ptr_b,struct struction ** ptr_e)
    {
        struct struction ** ptr_l_return_b;
        struct struction ** ptr_l_return_e;
        struct struction ** ptr_r_return_b;
        struct struction ** ptr_r_return_e;

        if(ptr->ptrlast=NULL)
            *ptr_b=ptr;
        else
            {
                a(ptr->ptrlast,ptr_l_return_b,ptr_l_return_e);
                *ptr_b=*ptr_l_return_b;
                ptr->ptrlast=*ptr_l_return_e;
                (*ptr_l_return_e)->ptrnext=ptr;
            }
        
        if(ptr->ptrnext=NULL)
            *ptr_e=ptr;
        else
            {
                a(ptr->ptrnext,ptr_r_return_b,ptr_r_return_e);
                *ptr_e=*ptr_r_return_e;
                ptr->ptrnext=*ptr_r_return_b;
                (*ptr_r_return_b)->ptrlast=ptr;
            }
    }