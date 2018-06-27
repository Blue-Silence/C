#include <stdio.h>
int mark;
int main()//m个相同苹果放到n个相同篮子里有多少种放法?（允许有篮子不放)
    {
        void x(int m,int n,int level,int * mark,int last);
        int m,n;//m为苹果数，n为篮子数
        scanf("%d,%d",&m,&n);
        x(m,n,1,m+1);
        printf("%d",mark);
        return 0;
    }

void x(int m,int n,int level,int last)
    {
        if(m==0)
            mark++;

        else
            for(int a=1;a<=m&&a<=last;a++)
                if(a*(n-level+1)>=m)
                    x(m-a,n,level+1,mark,a);

    }