#include <stdio.h>
int main()
{
    int a,b,c,d;
    printf("masukkan jumlah angka : ");scanf("%d",&a);
    printf("Masukkan bilangan ke 1: ");scanf("%d",&c);
    for(b=1;b<a;b++)
    {
         printf("Masukkan bilangan ke %d: ",b+1);scanf("%d",&d);
         if(d>c)c=d;
    }
    printf("Nilai terbesar: %d\n",c);
}
