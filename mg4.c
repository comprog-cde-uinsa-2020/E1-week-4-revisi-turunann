#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include"mg4.h"

int main()
{
	//Definisikan Variabel
	float laju_pertambahan_volume_udara;
	float laju_pertambahan_jari;
	float jari_bola;
	float turunan_Volume_terhadap_jari;
	int i;
	char lanjut;
	//lanjut = Y/y;

	mulai:
	system("cls");
	printf("SELAMAT DATANG\n");
	int Absen[5]= {'1','4','5','8','9'};

    printf("Absen anggota kelompok ke-1: %c \n", Absen[0]);
    printf("Absen anggota kelompok ke-2: %c \n", Absen[1]);
    printf("Absen anggota kelompok ke-3: %c \n", Absen[2]);
    printf("Absen anggota kelompok ke-4: %c \n", Absen[3]);
    printf("Absen anggota kelompok ke-5: %c \n", Absen[4]);

    do{
		printf("\nPercobaan ke-%d\n", i);
		i = i+1;
	}while(i<=3);

	int x = 10;
	int *px;
	px = &x;
	printf("\nAlamat memori variabel x: %x\n", &x);
	printf("Alamat memori di pointer px: %x\n", px);
	printf("Nilai pada *px: %d\n", *px);

	/*printf("Menghitung Luas Permukaan Bola\n");
	printf("=======================\n");
	printf("Masukkan Jari-Jari Bola = ");
	scanf("%d",&jari_bola);
	volume(jari_bola*/
	printf("\nMasukkan Turunan Laju pertambahan Volume udara : ");
	scanf("%f", &laju_pertambahan_volume_udara);
	printf("Masukkan Turunan Laju pertambahan Jari-jari : ");
	scanf("%f", &laju_pertambahan_jari);
	//Menghitung turunan Volume terhadap jari-jari;
	turunan_Volume_terhadap_jari =(laju_pertambahan_volume_udara/laju_pertambahan_jari);
	//Menampilkan hasil
	printf("\n-> Jadi, turunan Volume terhadap jari-jari adalah %.2f\n", turunan_Volume_terhadap_jari);

    //Menghitung jari-jari bola;
	printf("\nMasukkan Volume: ");
	scanf("%f", &turunan_Volume_terhadap_jari);
	jari_bola = sqrt(turunan_Volume_terhadap_jari/(22/7));

	//Menampilkan hasil
	printf("\n-> Jadi, Jari-jari bola setelah ditiup adalah %.2f\n", jari_bola);

	printf("\nApakah kamu mau menghitung lagi? [Y/y]");
	scanf("%c",lanjut);
	if(lanjut=="Y/y"){
		goto mulai;
	}else{
		exit(0);
	}
	return 0;
}
