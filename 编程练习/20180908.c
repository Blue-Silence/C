#include<stdio.h>
#define charmax 10000
#define srtnummax 1000
_Bool check(char * str);

int main(void)
{
    _Bool result[srtnummax];
    unsigned int num=0;

    while(1)
    {
        char str[charmax];
        scanf("%s",str);

        if(*str=='0')
            break;

        result[num]=check(str);
        num++;
    }

    for(int timer=0;timer!=num;timer++)
    {
        if(result[timer])
            puts("No");
        else
            puts("Yes");
    }

    return 0;
}


_Bool check(char * str)
{
    if(*str=='\0')
        return 0;
    else if(*str=='0')
        return check(str+1);
    else
        ;
    char sear;

    if(*str=='(')
        sear=')';
    else if(*str=='[')
        sear=']';
    else
        return 1;

    for(char * ptr=str+1;*ptr!='\0';ptr++)
        if(*ptr==sear)
        {
            *ptr='0';
            return check(str+1);
        }
    
    return 1;
}