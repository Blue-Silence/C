    #include<stdio.h>
    int main(void)
    {
        double all=0,timer=1,x=0,input;
        int Bool;
        printf("Enter a number,please.");
        Bool=scanf("%lf",&input);
        if(Bool=1)
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
                    timer=timer/10;
                    }
            }if(all==input)
            printf("The number is  %f.",x);
            else
            printf("The number is about %f.",x-0.5*timer);
        }
        else
        printf("Error.");
    }
    //开二次方