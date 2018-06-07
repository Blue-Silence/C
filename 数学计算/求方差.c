#include<stdio.h>
double ave;
int timer=0;//总数
double average(double *);
double var(double *);

    int main(void)
        {
            int timera;
            printf("How many numbers(about)?");
            scanf("%d",&timera);

            double num[timera*10];

            ave=average(num);
            double x=var(num);
            
            printf("The number is(about) %f.",x);
        }

            double average(double * num)
                {
                    double numbers,all=0;
                    int Bool;
                    printf("Enter a number?");

                    for(Bool=scanf("%lf",&numbers);Bool==1;timer++)
                        {
                            num[timer]=numbers;
                            all=all+numbers;
                            printf("Anything else?Enter a letter to quit.");
                            Bool=scanf("%lf",&numbers);
                        
                        }   
                        return (all/timer);
                     
                }//求平均数

            double var(double * num)
                {
                    int timercp=timer-1;
                    double numbers,all=0;

                    for(;timercp>-1;timercp--)
                        {
                            numbers=(ave-num[timercp])*(ave-num[timercp]);
                            all=all+numbers;
                        }
                    return (all/timer);    
                }//求方差
