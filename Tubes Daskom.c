#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define dlt system("cls");
struct Tubes_Daskom{
	char username_admin[100],password_admin[100],input_endorsement[100],edit_endorsement[100],hapus_endorsement[100],username_user[100],password_user[100];
}x,l;
struct endors{
	char tipe[100],durasi[100],harga[100],terima[100],aadc[100];
}y,z;
char pw[100];
int a,b,c,d,as,bu,aa,input_harga_endorsement,edit_harga_endorsement,hapus_harga_endorsement,cu,en;
FILE*dota;
int bool;
void admin();void user();
void regis_admin();void login_admin();
void tentang_endorsement();void input_endorsement();void edit_endorsement();void hapus_endorsement();
void regis_user();void login_user();
void list_endorsement(char x[100]);void terima_tolak();
void diterima();void pesan(char x[100]);void riwayat();
main(){
	
	dlt;
	printf("<-----------------------------------|| Selamat Datang di paket endorsement Amirul Mu'minin ||----------------------------------->\n");
	printf("1) Admin\n2) User\n3) Exit\nMasukan Input : ");
	scanf("%i",&a);getchar();fflush(stdin);
	switch(a){
		case 1 : admin();break;
		case 2 : user();break;
		case 3 : exit(0);break;
		default :printf("\nInput Salah silahkan coba lain");getchar();main();
	}	
	}

void admin(){
	dlt;
	printf(" Masukan Kata kunci :");gets(pw);dlt;
	if(strcmp(pw,"daskom")==0){
		printf("Masukan pilihan : \n1) Regis Admin baru\n2) Login Admin\n3) Kembali\n");
		scanf("%i",&b); fflush(stdin);
		switch (b){		
		case 1 : regis_admin();break;
		case 2 : login_admin();break;
		case 3 : main();break;
		default : printf("Salah inputan silahkan Coba lagi");getchar();main();break;}
		
}else printf("Kata kunci salah silahkan coba lagi");getchar();main();
}
void regis_admin(){
		dota=fopen("admin.dat","ab");dlt;
		printf("User Baru : ");gets(x.username_admin);
		printf("Password Baru : ");gets(x.password_admin);
		fwrite(&x,sizeof(x),1,dota);
		fclose(dota);
		dlt;admin();
}
void login_admin(){
	dota=fopen("admin.dat","rb");dlt;
	printf("Username : ");gets(l.username_admin);
	printf("Password : ");gets(l.password_admin);dlt;
	bool=0;
	while(fread(&x,sizeof(x),1,dota)==1){
		if(strcmp(l.username_admin,x.username_admin)==0&&strcmp(l.password_admin,x.password_admin)==0){	
			bool=1;
		} 
	}
	if (bool==1){
				printf("Selamat datang %s apa yang anda ingin kan?\n1) Tentang endorsement\n2) terima tolak tawaran endorsement\n3) Riwayat pembaran client\n4) Kembali\n",l.username_admin);
		printf("Masukan pilihan : ");
		scanf("%i",&c);getchar();dlt;
		switch (c){
			case 1 : tentang_endorsement();break;
			case 2 : terima_tolak();break;
			case 3 : riwayat();break;
			case 4 : admin();break;
		} 
	} else if (bool==0){
		printf("Username dan Password Admin salah silahkan coba lagi");getchar();admin(); 
	}fclose(dota);
}
void tentang_endorsement(){
	printf("1) Input Endorsement baru\n2) Mengedit Endorsement\n3) Hapus Endorsement\n4) Kembali\nMasukan pilihan : ");
	scanf("%i",&as);getchar();dlt;
	switch (as){
	case 1 : input_endorsement();break;
	case 2 : edit_endorsement();break;
	case 3 : hapus_endorsement();break;
	case 4 : admin();break;
	default : printf("Input salah silahkan coba lagi\n");tentang_endorsement();break;
	}
}
void terima_tolak(){
	FILE*lol;
	FILE*criticaleleven;
	char xz[100];
	lol=fopen("Order.dat","rb");
	while (fread(&y,sizeof(y),1,lol)==1){
			printf("\nNama Pemesan : %s",y.harga);
		
		
			printf("\nTipe endorsement : %s",y.tipe);
			printf("\nDurasi endorsement : %s\n",y.durasi);
			printf("Status : %s",y.terima);
		}getchar();fclose(lol);
	lol=
	fopen("Order.dat","ab");
	criticaleleven=fopen("Order2.dat","ab");
	printf("Nama user : "); gets(xz);
		printf("Silahkan masukkan tipe update : "); gets(y.terima);
		fwrite(&y,sizeof(y),1,criticaleleven);
		fclose(criticaleleven);
		fclose(lol);
		remove("Order.dat");
		rename("Order2.dat","Order.dat");getchar();
} 
void input_endorsement(){
	int aaa;dlt;
	dota=fopen("Endorsement.dat","ab");
	printf("Silahkan masukkan banyaknya endorsement yang ingin di tambah : ");
	scanf("%i", &en); getchar();
	for (aaa=1; aaa<=en; aaa++){
		printf("Tipe endorsement : "); gets(y.tipe);
		printf("Harga endorsemet : "); gets(y.harga);
		printf("Durasi endorsement : "); gets(y.durasi);
		fwrite(&y,sizeof(y),1,dota);
	}
	fclose(dota);
	dlt;tentang_endorsement();
}
void edit_endorsement(){
	int aaa;dlt;
	aaa =0;
	FILE*lol;
	FILE*hon;
	while(aaa!=1){
		printf("1.tipe\n2.durasi\n3.harga\n");
		int xm;
		
		hon=fopen("Endorsement.dat", "rb");
		lol=fopen("Endorsement2.dat", "wb");
		scanf("%i",&xm);getchar();
		if(xm==1){
		printf("Silahkan masukkan endorsement  yang akan diganti: ");gets(z.tipe);
		while (fread(&y,sizeof(y),1,hon)==1){
		if (strcmp(z.tipe,y.tipe)==0){
			printf("Silahkan masukkan tipe update : "); gets(y.tipe);
			}
		fwrite(&y,sizeof(y),1,lol);
		}
		fclose(hon);
		fclose(lol);
		remove("Endorsement.dat");
		rename("Endorsement2.dat","Endorsement.dat");
		}
		if(xm==2){
		printf("Silahkan masukkan tipe: "); gets(z.tipe);
		printf("Silahkan masukkan durasi update "); gets(z.durasi);
		while (fread(&y,sizeof(y),1,hon)==1){
		if (strcmp(z.tipe,y.tipe)==0){
			strcpy(y.durasi,z.durasi);
			}
		fwrite(&y,sizeof(y),1,lol);
		}
		fclose(hon);
		fclose(lol);
		remove("Endorsement.dat");
		rename("Endorsement2.dat","Endorsement.dat");
		}
		if(xm==3){
		printf("Silahkan masukkan tipe: ");gets(z.tipe);
		printf("Silahkan masukkan harga update ");gets(z.harga);
		while (fread(&y,sizeof(y),1,hon)==1){
		if (strcmp(z.tipe,y.tipe)==0){
			strcpy(y.harga,z.harga);
			}
		fwrite(&y,sizeof(y),1,lol);
		}
		fclose(hon);
		fclose(lol);
		remove("Endorsement.dat");
		rename("Endorsement2.dat","Endorsement.dat");
		}
		
		printf("input 1 untuk keluar/lainya untuk lanjut");
		scanf("%i",&aaa);getchar();dlt;
	}
	tentang_endorsement();
}
void hapus_endorsement(){
	FILE*lol;
	FILE*hon;
	hon=fopen("Endorsement.dat", "rb");
	lol=fopen("Endorsement2.dat", "wb");
	printf("Silahkan masukkan endorsement menu yang akan dihapus: ");gets(z.tipe);
	while (fread(&y,sizeof(y),1,hon)==1){
		if (strcmp(z.tipe,y.tipe)!=0){
			fwrite(&y,sizeof(y),1,lol);
			}
		}
	fclose(hon);
	fclose(lol);
	remove("Endorsement.dat");
	rename("Endorsement2.dat","Endorsement.dat");
	lol=fopen("Endorsement.dat","rb");
	while(fread(&y,sizeof (y),1,lol)==1){
	printf("\nTipe endorsement : %s",y.tipe);
	printf("\nHarga Endorsement : %s",y.harga);
	printf("\nDurasi endorsement : %s\n",y.durasi);
	}
	fclose(lol);
	tentang_endorsement();
}
void user(){dlt;
	printf("Masukan pilihan : \n1) User baru\n2) Login User\n3) Kembali\n");
		scanf("%i",&bu); fflush(stdin);
		switch (bu){ 
		case 1 : regis_user();break;
		case 2 : login_user();break;
		case 3 : main();break;
		default : printf("inputan salah");getchar();main();break;
		}
}
void regis_user(){
dlt;
dota=fopen("User.dat","ab");dlt;
		printf("User Baru : ");gets(x.username_user);
		printf("Password Baru : ");gets(x.password_user);
		fwrite(&x,sizeof(x),1,dota);
		fclose(dota);
		dlt;user();
}
void login_user(){
	int ll;
	dota=fopen("User.dat","rb");dlt;
	printf("Username : ");gets(l.username_user);
	printf("Password : ");gets(l.password_user);dlt;
	bool=0;
	while(fread(&x,sizeof(x),1,dota)==1){
		if(strcmp(l.username_user,x.username_user)==0&&strcmp(l.password_user,x.password_user)==0){	
			bool=1;
		} 
	}fclose(dota);
	if (bool==1){
		printf("Selamat datang %s apa yang anda ingin kan?\n1) List Paket Endorsement\n2) Paket yang telah di pesan\n3) Pembayaran Paket yang telah di terima\n4) Kembali\n",l.username_user);
		printf("Masukan pilihan : ");
		scanf("%i",&ll);getchar();
		switch (ll){
			case 1 : list_endorsement(l.username_user);break;
			case 2 : pesan(l.username_user);break;
			case 3 : diterima(l.username_user);break;
			case 4 : user();break;
			default : printf("inputan salah,silahkan coba lagi");login_user();break;
		} 
	} else if (bool==0){
		printf("Username dan Password User salah silahkan coba lagi");getchar();user(); 
	}
}
void list_endorsement(char x[100]){
	FILE*XS;
	XS=fopen("Endorsement.dat","rb");
	while(fread(&y,sizeof(y),1,XS)==1){
		printf("\nTipe endorsement : %s",y.tipe);
		printf("\nHarga endorsement : %s",y.harga);
		printf("\nDurasi endorsement : %s\n",y.durasi);
	}
	fclose(XS);
	XS=fopen("Order.dat","ab");
	printf("\nSilahkan isi data di bawah ini \n");
	printf("Tipe Order : \n"); gets(y.tipe);
	strcpy(y.harga,l.username_user);
	printf("Durasi berapa lama : \n"); gets(y.durasi);
	strcpy(y.terima,"menunggu");
	
	fwrite(&y,sizeof(y),1,dota);
	fclose(XS);
	dlt;login_user();
}
void pesan(char x[100]){
	FILE*lol;
	lol=fopen("Order.dat","rb");
	while (fread(&y,sizeof(y),1,lol)==1){
		if (strcmp(y.harga,x)==0){
			printf("\nTipe endorsement : %s",y.tipe);
			printf("\nDurasi endorsement : %s\n",y.durasi);
			}
		}getchar();fclose(lol);login_user();
}
void diterima(){
	FILE*lol;
	FILE*criticaleleven;
	lol=fopen("Order.dat","rb");
	while (fread(&y,sizeof(y),1,lol)==1){
			printf("\nNama Pemesan : %s",y.harga);
			printf("\nTipe endorsement : %s",y.tipe);
			printf("\nDurasi endorsement : %s\n",y.durasi);
			printf("Status : %s\n",y.terima);
		}getchar();fclose(lol);
	lol=fopen("Order.dat","ab");
	criticaleleven=fopen("Order2.dat","wb");
	printf("Apakah anda sudah membayar? : "); gets(y.aadc);
	fwrite(&y,sizeof(y),1,criticaleleven);
	fclose(criticaleleven);
	fclose(lol);
	remove("Order.dat");
	rename("Order2.dat","Order.dat");login_user();
} 
void riwayat(){
FILE*lol;
	FILE*criticaleleven;
	lol=fopen("Order.dat","rb");
	while (fread(&y,sizeof(y),1,lol)==1){
			printf("\nNama Pemesan : %s",y.harga);
			printf("\nTipe endorsement : %s",y.tipe);
			printf("\nDurasi endorsement : %s\n",y.durasi);
			printf("\nStatus : %s",y.terima);
			printf("\nPembayaran : %s",y.aadc);
		}getchar();fclose(lol);
	
}
