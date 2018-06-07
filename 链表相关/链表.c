#include<stdlib.h>
#include"Struct.h"

struct struction * Create_List(int numberof)
//numberof 为需要单位个数，返回链表开头（已测试）
    {
        int timer=1;
        struct struction * ptralla=(struct struction *)malloc(sizeof(struct struction));
        
        struct struction * allbeginning=ptralla;
        allbeginning->ptrlast=NULL;

            while(timer<numberof)
                {
                    
                    
                    ptralla->ptrnext=(struct struction *)malloc(sizeof(struct struction));
                    (ptralla->ptrnext)->ptrlast=ptralla;
                    (ptralla->ptrnext)->ptrnext=NULL;
                    ptralla=ptralla->ptrnext;
                    timer++;
                }
           
        return allbeginning;
    }



struct struction * ptr_Read_List(struct struction * ptrbeginning,int number)
//ptrbeginning 为链表开始处，number 为所需处标号（从0计起）,返回值为所求处指针(已测试)
    {
        int timer=1;
        struct struction * ptrnow=ptrbeginning->ptrnext;
            while(timer<number)
                {
                    ptrnow=ptrnow->ptrnext;
                    timer++;

                }
        return ptrnow;
    }


void  Insertion(struct struction * ptr_inserttion_point,int insertion_point,
                struct struction * ptr_new,int insertion_beginning,int insertion_end)
//ptr_inserttion_point 为被插入链头指针，ptr_new 为插入链头指针
//insertion_point 为插入点序号（插入此单元后），insertion_beginning，insertion_end为插入函数起止序号
    {
        struct struction * newb;
        struct struction * newe;
        struct struction * oldb;

        newb=ptr_Read_Store(ptr_new,insertion_beginning);
        newe=ptr_Read_Store(ptr_new,insertion_end);
        oldb=ptr_Read_Store(ptr_inserttion_point,insertion_point);
        
        (newb->ptrlast)->ptrnext=newe->ptrnext;
        if((newe->ptrnext)==NULL)
            ;
        else
            (newe->ptrnext)->ptrlast=newb->ptrlast;

        newe->ptrnext=oldb->ptrnext;    
        if(oldb->ptrnext==NULL)
            ;
        else
            (oldb->ptrnext)->ptrlast=newe;
        
        newb->ptrlast=oldb;
        oldb->ptrnext=newe;

    }


void Delete(struct struction * ptrbeginning,int beginning,int end)
//ptrbeginning 为所需删除单位所在链头指针，beginning，end 为所需删除单元起止序号
    {
        struct struction * ptr_delete_beginning;
        struct struction * ptr_delete_end;
        ptr_delete_beginning=ptr_Read_Store(ptrbeginning,beginning);
        ptr_delete_end=ptr_Read_Store(ptrbeginning,end);

        if(ptr_delete_beginning->ptrlast=NULL)
            ;
         else   
            (ptr_delete_beginning->ptrlast)->ptrnext=ptr_delete_end->ptrnext;
        
        if(ptr_delete_end->ptrnext==NULL)
            ;
        else
            (ptr_delete_end->ptrnext)->ptrlast=ptr_delete_beginning->ptrlast;

        ptr_delete_end->ptrnext=NULL;

        struct struction * a;
        struct struction * b;
        a=ptr_delete_beginning;
        while(a!=NULL)
            {
                b=a->ptrnext;
                free(a);
                a=b;
            }

    }

    int Count(struct struction * ptr)//ptr 为链表头，返回链表项数
        {
            int num=0
            while(ptr!=NULL)
                {
                    num++;
                    ptr=ptr->ptrnext;
                }
            return num;
        }