 #include <stdio.h>
 int main ()
 {
 struct {
     int jam;
     int menit;
     int detik;
 }waktumasuk, waktukeluar,hasiljam;
    printf("Masukkan waktu masuk  :");scanf("%d:%d:%d", &waktumasuk.jam,&waktumasuk.menit,&waktumasuk.detik);
	printf("Masukkan waktu keluar :");scanf("%d:%d:%d", &waktukeluar.jam,&waktukeluar.menit,&waktukeluar.detik);
    if(waktumasuk.jam>23 || waktukeluar.jam >23){printf("Batas input jam hanya dari pukul 00(12 malam) hingga 23\n"); return 0;}
    if(waktumasuk.menit>59 || waktukeluar.menit>59){printf("Batas input menit hanya dari 0-59, tolong konversikan\n");return 0;}
	if(waktumasuk.detik>59 || waktukeluar.detik>59){printf("Batas input detik hanya dari 0-59, tolong konversikan\n");return 0;}
 if(waktumasuk.detik>waktukeluar.detik)
    {
        waktukeluar.detik=waktukeluar.detik+60;
        waktukeluar.menit--;
    }
    if(waktumasuk.menit>waktukeluar.menit)
    {
        waktukeluar.menit=waktukeluar.menit+60;
        waktukeluar.jam--;
    }
	if(waktumasuk.jam>waktukeluar.jam)
    {
        printf("OVERTIME\n");
        return 0;
       // waktukeluar.jam=waktukeluar.jam+24;
    }
    hasiljam.jam=waktukeluar.jam-waktumasuk.jam;
    hasiljam.menit=waktukeluar.menit-waktumasuk.menit;
    hasiljam.detik=waktukeluar.detik-waktumasuk.detik;
    //--------------------------------------------------------*/
	printf("Selisih waktu  : %d Jam %d Menit %d Detik\n",hasiljam.jam,hasiljam.menit,hasiljam.detik);
 }
