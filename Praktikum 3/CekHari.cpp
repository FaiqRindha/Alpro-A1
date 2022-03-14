/*Nama File	: CekHari.c*/
/*Deskripsi	: Merepresentasikan angka menjadi nama hari*/
/*Pembuat	: Fa'iq Rindha Maulana - 24060121130091*/
/*Tgl pembuatan	: Minggu, 13-03-2022 11:35 WIB*/

#include <stdio.h>
#include <stdlib.h>


int main()
{
	//Kamus
	int i;
	
	//Algoritma
	printf("Masukkan nilai angka yang ingin diterjemahkan kedalam nama hari : ");
	scanf("%d", &i);
	
	switch(i){
		case 1 :
			printf ("Senin");
			break;
		case 2 :
			printf ("Selasa");
			break;
		case 3 :
			printf ("Rabu");
			break;	
		case 4 :
			printf ("Kamis");
			break;	
		case 5 :
			printf ("Jumat");
			break;
		case 6 :
			printf ("Sabtu");
			break;	
		case 7 :
			printf ("Minggu");
			break;
			
		default :
			printf("Nilai masukkan tidak tepat.");
	}
	
	
	return 0;
}
