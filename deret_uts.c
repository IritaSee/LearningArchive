#include <stdio.h>
int a,b,beda;
void deret();
int main()
{
    printf("Masukkan bilangan pertama: ");scanf("%d",&a);
    if(a%2==0)
    {
        printf("Masukkan jumlah deret "); scanf("%d",&b);
        printf("Masukkan beda antar bilangan: ");scanf("%d",&beda);
        deret();
    }
}
void deret()
{
    int tot,i;
    i=0;
    while(i<b)
    {
        tot=tot+a;
        printf("%d, ",a);
        a=a+beda;
        i++;
    }
    printf("Jumlah bilangan : %d \n",tot);
}
