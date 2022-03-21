/*
Nama File : CekPrima.c
Deskripsi : Mengecek apakah suatu bilangan termasuk bilangan prima
Pembuat : Fa'iq Rindha Maulana -- 24060121130091
Tanggal : 16 Maret 2022
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Kamus
    int N;
    int i;
	int faktorBilangan; //jumlah faktor bilangan


    //Algoritma
    printf("Masukkan bilangan : ");
    scanf("%d", &N);
	faktorBilangan = 0;

	if(N >= 2){
		faktorBilangan = 2; //1 dan N pasti faktor bilangan N
		for(i=2; i<=N-1; i++){ //1 dan N pasti bisa membagi N
			if(N%i==0){
				faktorBilangan += 1;
			}

		}

		if(faktorBilangan == 2){
			printf("%d adalah bilangan prima", N);

		}
		else{
			printf("%d bukan bilangan prima", N);
		}
	}

	else{
		printf("%d bukan bilangan prima", N);
	}
    return 0;
}
