#include<stdio.h>
    int main(void)

        {
            int mark[100];
            double number[10000];
            char letter='.';
            //printf
            int bool;
            int timer=0;
            int timerx=0;
            int middle;


            while(letter!=';')
                {
                    bool=scanf("%lf",&number[timer]);
                    if(bool==1)
                        timer++;

                    else
                        {
                            scanf("%c",&letter);

                            if(letter=='x')
                            {
                                mark[timerx]=timer-1;
                                timerx++;
                            }
                            else if(letter=='=')
                                middle=timer-1;
                            else
                                continue;
                        }
                }

            double xall=0,numall=0;
            int timerxall=timerx;

            while(timerxall>0)
                {
                    if(mark[timerxall-1]<=middle)
                        {
                            xall=xall+number[mark[timerxall-1]];
                            timerxall--;             
                        }
                    else
                        {
                            xall=xall-number[mark[timerxall-1]];
                            timerxall--;
                        }    
                }

            
            timer=timer-1;
            while(timer>-1)
                {
                    if(timer>middle)
                        {
                            numall=numall+number[timer];
                            timer--;
                        }
                    else
                        {
                            numall=numall-number[timer];
                            timer--;
                        }    
                }
            numall=numall+xall;
            double result=(numall/xall);
            printf("x=%f",result);
            return 0;
        }
