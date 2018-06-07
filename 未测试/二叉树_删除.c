#include<stdlib.h>
#include"Struct.h"


struct struction *  Delete(int num,struct struction * ptr)//num 为需删除单元数字，ptr 为Root，返回新Root，错误则返回NULL
    {
        struct struction *  To_The_End(struct struction * ptr);
        struct struction *  Search(int num,struct struction * ptr);

        struct struction * ptr_rem;
        struct struction * a=Search(num,ptr);
        struct struction * beginning;
        int mark;
        
        if(a==NULL)
            {
                if(ptr->num==num)
                    ;
                else
                 return NULL;
                ptr_rem=ptr;
                mark=-1;
            }
        else
            {
                if(num<(a->num))
                    {
                        ptr_rem=a->ptrlast;
                        mark=0;
                    }
                else
                    {
                        ptr_rem=a->ptrnext;
                        mark=1;
                    }
            }

        if(ptr_rem->ptrlast!=NULL)
                (To_The_End(ptr_rem->ptrlast))->ptrnext=ptr_rem->ptrnext;
        else
            ptr_rem->ptrlast=ptr_rem->ptrnext;
        
        if(mark==0)
            a->ptrlast=ptr_rem->ptrlast;
        else if(mark==1)
            a->ptrnext=ptr_rem->ptrlast;
        else
            ;

        free(ptr_rem);

        if(mark==-1)
            return ptr_rem->ptrlast;
        else
            return ptr;
    }

struct struction * To_The_End(struct struction * ptr)
    {
        struct struction * ptr_return=ptr;
        
        while(ptr_return->ptrnext!=NULL)
            {
                ptr_return=ptr_return->ptrnext;
            }
        
        return ptr_return;
    }

struct struction * Search(int num,struct struction * ptr)
    {
        struct struction *a;

        if(num==ptr->num)
            return NULL;
        else
            ;    

        while(1)
            {
                if(num>(ptr->num)&&ptr->ptrnext!=NULL)
                    {
                        a=ptr;
                        ptr=ptr->ptrnext;
                    }
                else if(num<(ptr->num)&&ptr->ptrlast!=NULL)
                    {
                        a=ptr;
                        ptr=ptr->ptrlast;
                    }
                else if(num==ptr->num)
                    return a;
                else
                 return NULL;
            }
            
    }
