/*
Nama File : countingSort.c
Deskripsi : Menampilkan urutan array mulai dari terkecil sampai besar menggunakan Counting Sort.
Pembuat : Fa'iq Rindha Maulana -- 24060121130091
Tanggal : 30 April 2022
*/

#include <stdio.h>

void countingSort(int arr1[],int n,int max, int min){

    //Kamus Lokal
    int count[100]={0},i,j;

    //Algoritma
    for(i=0;i<n;++i)
        count[arr1[i]-min]=count[arr1[i]-min]+1;
    for(i=0;i<=max-min;++i)
        for(j=1;j<=count[i];++j)
            printf("%d ",i+min);
}

//PROGRAM UTAMA
int main(){
    //Kamus
    int i, n, *arr, max=0, min=1;

    //Algoritma
    scanf("%d", &n);
    arr = (int*) malloc(n * sizeof(int));
    for(i=0;i<n;i++){
        printf("Nilai array n ke-%d : ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Unsorted Array : ");
    for(i = 0; i < n; i++){
        if(arr[i]>max)
            max=arr[i];
        (arr[i]<min)? min=arr[i] : min;
        printf("%d ", arr[i]);
    }

    printf("\nSorted Array : ");
    countingSort(arr,n,max, min);
    return 0;
}
