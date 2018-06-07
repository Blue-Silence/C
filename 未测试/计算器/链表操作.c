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



