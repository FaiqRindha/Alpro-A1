/*
Nama File : FaktorBil.c
Deskripsi : Menentukan faktor-faktor bilangan dari bilangan integer sembarang
Pembuat : Fa'iq Rindha Maulana -- 24060121130091
Tanggal : 16 Maret 2022
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //kamus
    int N;
    int i;

    //Algoritma
    printf("Masukkan bilangan : ");
    scanf("%d", &N);

    if(N > 0){
    	printf("Faktor dari bilangan %d : \n", N);
		for (i=1; i<=N; i++){
			if (N % i == 0){
				printf("%d ", i);
			}
		}
	}

	else{
		printf("Masukkan harus positif");
	}

    return 0;
}
