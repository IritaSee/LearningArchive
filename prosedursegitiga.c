#include <stdio.h>
main ()
{
    float alas,tinggi,luas;
    float hitung(float a, float t, float *l);
    printf("Alas= ");scanf("%f",&alas);
    printf("Tinggi= ");scanf("%f",&tinggi);
    hitung(alas,tinggi,&luas);
    printf("Luas= %0.2f\n",luas);
}
float hitung(float a,float t,float *l)
{
    *l=a*t*0.5;
}
