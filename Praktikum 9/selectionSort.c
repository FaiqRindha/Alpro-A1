/*
Nama File : selectionSort.c
Deskripsi : Menampilkan urutan array mulai dari terkecil sampai besar menggunakan Selection Sort.
Pembuat : Fa'iq Rindha Maulana -- 24060121130091
Tanggal : 30 April 2022
*/

#include <stdio.h>

void SelectionSort(int arr[], int n)
{
    //Kamus Lokal
    int i;
    int j;
    int min;
    int temp;

    //Algoritma
    for(i = 0; i < (n-1); i++)
    {
        min = i;

        for(j = (i+1); j < n; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
}

int main()
{
    //Kamus
    int array[100] ,n ,i, j;

    //Algoritma
    printf("---Selection Sort Ascending---\n");
    printf("Masukkan jumlah banyaknya data: ");
    scanf("%d", &n);
    printf("Masukkan %d angka integer\n", n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    SelectionSort(array, n);
    printf("Array setelah diurutkan adalah:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
