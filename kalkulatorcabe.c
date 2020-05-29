#include <stdio.h>
int main ()
{
    float angka1,angka2,hasil;
    int operasi;
    printf("Masukkan angka pertama : ");scanf("%f",&angka1);
    printf("Masukkan angka kedua : ");scanf("%f",&angka2);
    printf("Masukkan operasi (1.penjumlahan 2.pengurangan 3.perkalian 4.pembagian) : \n");scanf("%d",&operasi);
    if(operasi==1)
    {
    hasil=angka1+angka2;
    printf("Hasil Operasi = %0.2f\n",hasil);
    }
    if(operasi==2)
    {
    hasil=angka1-angka2;
    printf("Hasil Operasi = %0.2f\n",hasil);
    }
    if(operasi==3)
    {
    hasil=angka1*angka2;
    printf("Hasil Operasi = %0.2f\n",hasil);
    }
    if(operasi==4)
    {
    hasil=angka1/angka2;
    printf("Hasil Operasi = %0.2f\n",hasil);
    }
     if(operasi<1 || operasi>4)printf("Input operasi salah\n");
}
