#include<stdio.h>
int main(void)
{
    double timer=1,x,input,all;
    int Bool;
    printf("Enter a number,please.");
    Bool=scanf("%lf",&input);

    if(Bool=1)
    {
        x=input*0.5;

        if(input<4)
            {
               while(timer>0.0000001) 
               {
                   all=x*x;

                   if(all<input)
                    x=x+timer;

                   else if(all==input)
                    break;
                   
                   else
                   {
                       x=x-timer;
                       timer=timer*0.1;
                   }
               }
            }

            else if(input>4)
            {
                while(timer>0.0000001)
                {
                    all=x*x;

                    if(all>input)
                        x=x-timer;
                    
                    else if(all==input)
                        break;
                    
                    else
                    {
                        timer=timer*0.1;
                        x=x+timer;
                    }

                }
            }

            else
                x=2;

    
        printf("The number is about %f.",x-0.5*timer);
    }
    else
    printf("Error.");
}
//开二次方(改进)