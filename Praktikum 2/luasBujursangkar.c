/*Nama File	: luasBujursangkar.c*/
/*Deskripsi	: Menghitung luas bujursangkar*/
/*Pembuat	: Fa'iq Rindha Maulana - 24060121130091*/
/*Tgl pembuatan	: Selasa, 01-03-2022 11:35 WIB*/

#include <stdio.h>
#include <stdlib.h>



int main() 
{
	/*Kamus*/
	int S; //variabel sisi 
	int L; //variabel luas
	
	/*Algoritma*/
	printf("Sisi : ");
	scanf("%d", &S);
	//Luas=Sisi*Sisi
	L=S*S;
	
	printf("Luas : %d", L);
	
	return 0;
}
