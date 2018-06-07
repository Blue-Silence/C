#include"Struct.h"

struct struction * sort(struct struction * ptr)//ptr 为链表头，返回值为排序后链表头
    {
        struct struction * ptra=ptr->ptrnext;

        while(1)
            {
                struct struction * ptrnow=ptra;
                if(ptrnow==NULL)
                    break;
                else
                    ;  
                
                struct struction * ptrbefore=ptrnow->ptrlast;

                while(1)
                    {
                        if(ptrbefore==NULL)
                            break;
                        else
                            ;
                        
                        if((ptrbefore->num)>(ptrnow->num))
                            ptrbefore=ptrbefore->ptrlast;
                        else
                            break;
                    }

                ptra=ptrnow->ptrnext;
                if(ptrbefore==NULL)
                    {
                        if(ptrnow->ptrnext==NULL)
                            ;
                        else
                            ptrnow->ptrnext->ptrlast=ptrnow->ptrlast;
                        ptrnow->ptrlast->ptrnext=ptrnow->ptrnext;
                        ptrnow->ptrnext=ptr;
                        ptr=ptrnow;
                        ptr->ptrlast=NULL;
                    }
               
                else
                    if(ptrbefore->ptrnext==ptrnow)
                        ;
                    else
                        {
                            if(ptrnow->ptrnext==NULL)
                                ;   
                            else
                                (ptrnow->ptrnext)->ptrlast=ptrnow->ptrlast;
                            (ptrnow->ptrlast)->ptrnext=ptrnow->ptrnext;
                            
                            ptrnow->ptrnext=ptrbefore->ptrnext;
                            ptrnow->ptrlast=ptrbefore;
                            ptrbefore->ptrnext=ptrnow;
                        }
                
            }
            return ptr;
    }