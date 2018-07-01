#include<stdio.h>
int main(void)
{

    int mark[5]={0};
    char * end;
    char data[10000];
    int num=1;
    scanf("%d",&num);
    getchar();
    int x(char * ptr,char * end);
    for(int timer=0;timer<num;timer++)
    {
        gets(data);
        for(end=data;*(end+1)!='\0';end++)
        ;
        mark[timer]=x(data,end);
    }
    for(int timer=0;timer<num;timer++)
    {
        if(mark[timer]==0)
            puts("Yes");
        else
            puts("No");
    }
    return 0;
}

/*
int x(char * ptr)
{

   while(*ptr!='\0')
    {
        if(*ptr=='(')
            {
                if(*(ptr+1)!=')')
                return 1;
            }
        else if(*ptr=='[')
            {
                if(*(ptr+1)!=']')
                    return 1;
            }
        else
            return 1;
        ptr+=2;
    }
    return 0;
}
*/
int x(char * ptr,char * end)
    {
        if(ptr+1==end)
            if(*ptr=='('&&*end==')')
                return 0;
        while(ptr!=end+1)
            {   
                if(ptr==end)
                    return 1;
                else if(*ptr=='(')
                    { 
                        char *a=ptr;
                        ptr++;
                        for(int mark=1;mark!=0;ptr++)
                        {
                            if(ptr>end)
                                return 1;
                            else if(*ptr=='(')
                                mark++;
                            else if(*ptr==')')
                                mark--;
                            else
                                ;       
                        }
                        if(a+1!=ptr-1)
                        if(x(a+1,ptr-2)!=0)
                            return 1;
                    }
                 else if(*ptr=='[')
                    { 
                        char *a=ptr;
                        ptr++;
                        for(int mark=1;mark!=0;ptr++)
                        {
                            if(ptr>end)
                                return 1;
                            else if(*ptr=='[')
                                mark++;
                            else if(*ptr==']')
                                mark--;
                            else
                                ;       
                        }
                        if(a+1!=ptr-1)
                        if(x(a+1,ptr-2)!=0)
                            return 1;
                    }
                else
                    return 1;
                
            }
        return 0;
    }