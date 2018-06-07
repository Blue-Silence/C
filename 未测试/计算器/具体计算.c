#include"Struct.h"

/*
输入从 "(" 开始，至 ")" 结束
sign定义：
0 -- NULL
-3 -- "("
-2 -- "/"
-1 -- "-"
1 -- "+"
2 -- "*"
3 -- ")"
*/

    void Calculate(struct struction * start,struct struction * end)
        {
            void x(struct struction * start,struct struction * end);

            struct struction * ptrnow=start->ptrnext;

            while(ptrnow->sign!=3)
                {
                    if(ptrnow->sign==-3)
                        {    
                            struct struction * a=ptrnow;
                            int mark=1;

                            while(mark)
                                {
                                    ptrnow=ptrnow->ptrnext;

                                    if(ptrnow->sign==3)
                                        mark--;
                                    else if(ptrnow->sign==-3)
                                        mark++;
                                    else
                                        ;
                                }
                            Calculate(a,ptrnow);
                        }
                    
                    ptrnow=ptrnow->ptrnext;
                }//处理括号

            ptrnow=start->ptrnext;

            while(ptrnow->sign!=3)
                {
                    if(ptrnow->sign==2||ptrnow->sign==-2)
                        {
                            struct struction * a=ptrnow->ptrlast;
                            int mark=0;
                            
                            while(1)
                                {
                                    if(ptrnow->sign==0)
                                        mark++;
                                    else
                                        mark--;
                                    
                                    if(mark==2)
                                        break;
                                    else
                                        ptrnow=ptrnow->ptrnext;
                                }
                            x(a,ptrnow->ptrlast);
                        }
                    
                    else
                        ptrnow=ptrnow->ptrnext;
                }//处理乘法

            ptrnow=start->ptrnext;

            while(ptrnow->ptrnext->sign!=3)
                {
                    if(ptrnow->ptrnext->sign==1)
                        {
                            (ptrnow->ptrnext->ptrnext)->num+=ptrnow->num;
                            ptrnow=ptrnow->ptrnext->ptrnext;
                        }
                    else if(ptrnow->ptrnext->sign==-1)
                        {
                            (ptrnow->ptrnext->ptrnext)->num-=ptrnow->num;
                            ptrnow=ptrnow->ptrnext->ptrnext;
                        }
                    
                    else
                        {
                            (ptrnow->ptrnext)->num+=ptrnow->num;
                            ptrnow=ptrnow->ptrnext;
                        }
                }

            ptrnow->ptrlast=start->ptrlast;
            ptrnow->ptrnext=end->ptrnext;
            (end->ptrnext)->ptrlast=ptrnow;
            (start->ptrlast)->ptrnext=ptrnow;
            

            
        }


    void x(struct struction * start,struct struction * end)
        {
            struct struction * ptrnow=start;
            
            while(ptrnow!=end)
                {
                    if((ptrnow->ptrnext)->sign==2)
                        (ptrnow->ptrnext->ptrnext)->num=((ptrnow->ptrnext->ptrnext)->num)*(ptrnow->num);
                    else
                        (ptrnow->ptrnext->ptrnext)->num=(ptrnow->num)/((ptrnow->ptrnext->ptrnext)->num);
                    
                    ptrnow=ptrnow->ptrnext->ptrnext;
                }
            
            ptrnow->ptrlast=start->ptrlast;
            ptrnow->ptrnext=end->ptrnext;

            (start->ptrlast)->ptrnext=ptrnow;
            (end->ptrnext)->ptrlast=ptrnow;

        }

