#include <stdio.h>
int main ()
{
    int b,c,d;
    b=c=d=0;
    for(int a=500;a<=1000;a++)
    {
        if (a%4==0)
        {
            if(a%42==0)d++;
            c++;
            if(a%6!=0 && a%7!=0) b++;
        }

    }
    printf("%d %d %d\n",c,b,d);
}
