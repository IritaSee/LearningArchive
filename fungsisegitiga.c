#include <stdio.h>
main ()
{
    float alas,tinggi,luas;
    float hitung(float a, float t);
    printf("Alas= ");scanf("%f",&alas);
    printf("Tinggi= ");scanf("%f",&tinggi);
    luas=hitung(alas,tinggi);
    printf("Luas= %0.2f\n",luas);
}
float hitung(float a,float t)
{
    return a*t*0.5;
}
