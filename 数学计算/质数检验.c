int test(int x)//返回1为质数
    {
        if(x<3)
            return 1;
        for(int timer=2;timer<x;timer++)
            if(x%timer==0)
                return 0;
        return 1;
    }