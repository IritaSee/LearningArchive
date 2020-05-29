#include <stdio.h>
int data[100];
void swap(int *x, int *y)
{
    int temp;
    temp= *x;
    *x = *y;
    *y = temp;
}
void sort(int n)
{
    int temp;
    int max;int e,f;
    for(e=0;e<n;e++)
    {
        max=0;
        for(f=1;f<n-e;f++)
        {
          if(data[max]<data[f]) max=f;
        }
     swap(&data[max],&data[n-1-e]);

    }
}
int search(int cari,int ujung)//return index
{
    int kiri,kanan,tengah;
    kiri=0; kanan=ujung-1;
    tengah=(kiri+kanan)/2;
    while(kiri<kanan && data[tengah]!=cari)
    {
        if(data[tengah]>cari)
        {
        kanan=tengah-1;
        }else if(data[tengah]<cari) kiri=tengah+1;
        tengah=(kiri+kanan)/2;
    }
    if(cari==data[tengah])return tengah;
        else return -1;
}
int main ()
{
    int a,b,c;
    printf("Jumlah data: ");scanf("%d",&a);
    for(b=0;b<a;b++)
    {
        printf("Data ke-%d: ",b+1);
        scanf("%d",&data[b]);
    }
    sort(a);
    printf("\n");
    for(b=0;b<a;b++)
    {
        printf("%d ",data[b]);
    }
    printf("\nMasukkan data yang ingin dicari: ");scanf("%d",&c);
    if(search(c,a)<0)
    {
        printf("\nangka tidak ditemukan ");
    }else printf("Angka ditemukan pada index %d\n",search(c,a)+1);

}
