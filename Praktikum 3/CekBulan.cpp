/*Nama File	: CekBulan.c*/
/*Deskripsi	: Merepresentasikan angka menjadi nama bulan*/
/*Pembuat	: Fa'iq Rindha Maulana - 24060121130091*/
/*Tgl pembuatan	: Minggu, 13-03-2022 12:00 WIB*/

#include <stdio.h>
#include <stdlib.h>


int main()
{
	//Kamus
	int i;
	
	//Algoritma
	printf("Masukkan nilai angka yang ingin diterjemahkan kedalam nama bulan : ");
	scanf("%d", &i);
	
	switch(i){
		case 1 :
			printf ("Januari");
			break;
		case 2 :
			printf ("Februari");
			break;
		case 3 :
			printf ("Maret");
			break;	
		case 4 :
			printf ("April");
			break;	
		case 5 :
			printf ("Mei");
			break;
		case 6 :
			printf ("Juni");
			break;	
		case 7 :
			printf ("Juli");
			break;
		case 8 :
			printf ("Agustus");
			break;
		case 9 :
			printf ("September");
			break;
		case 10 :
			printf ("Oktober");
			break;	
		case 11 :
			printf ("November");
			break;
		case 12 :
			printf ("Desember");
			break;	
		default :
			printf("Nilai masukkan tidak tepat.");
	}
	
	
	return 0;
}
