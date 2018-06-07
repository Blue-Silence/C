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
    }
