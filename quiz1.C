#include <stdio.h>
#include <string.h>
/*Iga Narendra P./ 1101184256*/
struct {
int nilai;
char nama[100];
}data[100];
int a,b,tempidx,x,y;
void max(int size, int *y);
void search(int size, int cari, int *y);
void sort(int size);
int main ()
{
    printf("Jumlah data: ");scanf("%d",&a);getchar();
    for(b=0;b<a;b++)
    {
        printf("\nNama ke-%d: ",b+1);gets(data[b].nama);
        printf("Nilai: ");scanf("%d",&data[b].nilai);getchar();
    }
    sort(a);max(a,&y);tempidx=y;
   // printf("\ny= %d",y);
  //  for(int c=0;c<a;c++)printf(" %s %d \n",data[c].nama,data[c].nilai);
    printf("\nNilai terbesar diraih oleh %s dengan nilai %d",data[tempidx].nama,data[tempidx].nilai);
    printf("\nMasukkan nilai yang ingin dicari :");scanf("%d",&x);
    search(a,x,&y);
   // printf("\ny= %d",y);
    if(y==-1)
    printf("\nData tidak ditemukan\n");
    else printf("\n%s nilainya: %d\n",data[y].nama,data[y].nilai);
}

void max(int size,int *y)
{
    *y=size-1;
}

void search(int size, int cari, int *y)
{
    int kiri,kanan,mid;
    kiri=0;kanan=size-1;mid=(kiri+kanan)/2;
    while(kiri<=kanan && data[mid].nilai!=cari)
    {
        if(data[mid].nilai<cari)kiri=mid+1;
        else if(data[mid].nilai>cari)kanan=mid-1;
        mid=(kanan+kiri)/2;
    }
    if(kiri>kanan) *y=-1;
    else *y=mid;
}

void sort(int size)
{
    int x,z,maxi,temp;
    char temps[100];
    for(x=0;x<size-1;x++)
    {
        maxi=0;
        for(z=1;z<size-x;z++)
        {
            if(data[maxi].nilai<data[z].nilai)
                maxi=z;
        }
        temp=data[maxi].nilai;data[maxi].nilai=data[size-x-1].nilai;data[size-x-1].nilai=temp;
        strcpy(temps,data[maxi].nama);strcpy(data[maxi].nama,data[size-x-1].nama);strcpy(data[size-x-1].nama,temps);//tujuan, asal
    }
}

