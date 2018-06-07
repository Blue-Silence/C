#include<stdio.h>
#include<stdlib.h>
#include"Struct.h"
struct struction * Create_List(int numberof);

struct struction * ca(int num)
    {
        void choose(struct struction * head);

        struct struction * head=Create_List(num-1);
        struct struction * ptr=head;
        unsigned long long timer=1;

        while(timer!=num)
            {
                ptr->num=++timer;
                ptr=ptr->ptrnext;
            }
        choose(head);
        return head;
    }

void freeob(struct struction * ptr)
    {
        if(ptr->ptrnxte!=NULL)
            (ptr->ptrnext)->ptrlast=ptr->ptrlast;
        (ptr->ptrlast)->ptrnext=ptr->ptrnext;
        free(ptr);
    }

void del(struct struction * ptr)
    {
        unsigned long long mark=ptr->num;
        

        for(struct struction * ptrnow=ptr->ptrnext;ptrnow!=NULL;)
            {
                
                if((ptrnow->ptrlast->num)%mark==NULL)
                    {
                        ptrnow=ptrnow->ptrnext;
                        freeob(ptrnow->ptrlast);
                    }
                else
                    ptrnow=ptrnow->ptrnext;

            }
    }

void choose(struct struction * head)
    {
        for(struct struction * ptrnow=head;(ptrnow=ptrnow->ptrnext)!=NULL;del(ptrnow))
    }
