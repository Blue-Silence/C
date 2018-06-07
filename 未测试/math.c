
double var(double * num,double ave,int numberof)//num 为数据数组，ave 为平均数，numberoff 为数据个数
                {
                    int timercp=numberof-1;
                    double numbers,all=0;

                    for(;timercp>-1;timercp--)
                        {
                            numbers=(ave-num[timercp])*(ave-num[timercp]);
                            all=all+numbers;
                        }
                    return (all/numberof);    
                }//求方差


void sort(double * num,int numberof) //num 为包含需排序数的数组，numberof 为需排序数的数量
    {
        int mark=0;

        while(mark!=numberof)
            {
                mark=1;
                int timer=0;

                while(timer+1<numberof)
                    {
                        double a=num[timer];

                        if(a<num[timer+1])
                            {
                                num[timer]=num[timer+1];
                                num[timer+1]=a;
                            }
                        else
                            mark++;
                            
                        timer++;
                        numberof--;
                    }
            }
    }//排序
