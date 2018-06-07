#include<stdio.h>
    int main(void)
        {
            double numa;
            double numb;
            double numall=0;
            double xall=0;
            int bool;
            char letter;

            scanf("%lf",&numa);
            
            while(1)
                {
                    numb=numa;
                    bool=scanf("%lf",&numa);
                    
                    if(bool==1)
                        numall=numall-numb;
                    else
                        {
                            scanf("%c",&letter);

                            if(letter=='x')
                                {
                                    xall=xall+numb;
                                    numa=0;
                                    scanf("%lf",&numa);
                                }
                            else
                                {
                                    numall=numall-numb;
                                    break;
                                }
                        }
                }
            
            scanf("%lf",&numa);
           
            while(1)
                {
                    numb=numa;
                    bool=scanf("%lf",&numa);

                    if(bool==1)
                        numall=numall+numb;
                
                    else
                        {
                            scanf("%c",&letter);

                            if(letter=='x')
                                {
                                    xall=xall-numb;
                                    numa=0;
                                    scanf("%lf",&numa);
                                }
                            else
                                {
                                    numall=numall+numb;
                                    break;
                                }
                        }
                }

                double result=numall/xall;
                printf("%f",result);
                return 0;
        }