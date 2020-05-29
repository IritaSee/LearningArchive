#include <stdio.h>
void swap(int *a, int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int main()
{
    int c,d;
    printf("Masukkan bilangan pertama: ");scanf("%d",&c);
     printf("Masukkan bilangan kedua: ");scanf("%d",&d);
     swap(&c,&d);
    printf("Bilangan Pertama= %d\n",c);
     printf("Bilangan Kedua= %d\n",d);
}
