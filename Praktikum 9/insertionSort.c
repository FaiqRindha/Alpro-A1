/*
Nama File : insertionSort.c
Deskripsi : Menampilkan urutan array mulai dari terkecil sampai besar menggunakan Insertion Sort.
Pembuat : Fa'iq Rindha Maulana -- 24060121130091
Tanggal : 30 April 2022
*/

#include <stdio.h>

void InsertionSort(int arr[], int n)
{
    //Kamus Lokal
    int i, j ,temp;

    //Algoritma
    for (i = 1; i < n; i++)
    {
        temp = arr[i];

        for (j = i-1; j >= 0 && arr[j] > temp; j--)
        {
            arr[j+1] = arr[j];
        }
        arr[j+1] = temp;
    }
}

int main()
{
    //Kamus
    int n, array[100], i , j, temp;

    //Algoritma
    printf("---Insertion Sort Ascending---\n");
    printf("Masukkan jumlah banyaknya data: ");
    scanf("%d", &n);
    printf("Masukkan nilai: \n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    InsertionSort(array, n);
    printf("Array setelah diurutkan adalah : ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
