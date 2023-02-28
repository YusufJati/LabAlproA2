/* Program   : mtabel.c */
/* Deskripsi : */
/* NIM/Nama  : 24060120120002/Jason Al-Hilal Sabda Dewa */
/* Tanggal   : 31 Agustus 2021*/
/***********************************/

#include <stdio.h>

#include "tabel.h"
#include "tabel.c"

int main()
{
    // kamus
    Tabel t1;
    int i;
    int size, cari, add, change, select, delete, deleteAll, pilihan;

    // algoritma
    printf("====== START =======\n");
    printf("Masukkan size table : ");
    scanf("%d", &size);
    populate1(&t1, size);
    printf("====== SIZE TABLE =======\n");
    printf("size dari table : %d", getSize(&t1));
    printf("\n====== PRINT TABLE =======\n");
    printTable(&t1);
    printf("\n====== VIEW TABLE =======\n");
    viewTable(&t1);
    printf("\n=====COUNT EMPTY TABLE=======\n");
    printf("Elemen kosong sebanyak : %d", countEmpty(&t1));
    printf("\n=====IS EMPTY TABLE=======\n");
    printf("%s", isEmptyTable(&t1) ? "true (tabel kosong)" : "false (bukan tabel kosong)");
    printf("\n=====IS FULL TABLE=======\n");
    printf("%s", isFullTable(&t1) ? "true (tabel penuh)" : "false (tabel tidak penuh)");
    printf("\n=====SEARCH X1=======\n");
    printf("Masukkan nilai yang dicari : ");
    scanf("%d", &cari);
    fflush(stdin);
    searchX1(&t1, cari);
    printf("\n=====BANYAK X1=======\n");
    countX(&t1, cari);
    printf("\n=====GETMAX TABLE=======\n");
    if (t1.size == 0)
    {
        printf("Elemen Max Tabel : %s", getMaxEl(&t1));
    }
    else
    {
        printf("Elemen Max Tabel : %d", getMaxEl(&t1));
    }
    printf("\n=====GETMIN TABLE=======\n");
    if (t1.size == 0)
    {
        printf("Elemen Min Tabel : %s", getMinEl(&t1));
    }
    else
    {
        printf("Elemen Min Tabel : %d", getMinEl(&t1));
    }
    printf("\n=====ADDX TABLE=======\n");
    printf("Apakah Anda ingin menambahkan nilai dalam tabel (1/0) ? : ");
    scanf("%d", &pilihan);
    fflush(stdin);
    if (pilihan == 1)
    {
        printf("Masukkan nilai yang ingin ditambahkan : ");
        scanf("%d", &add);
        fflush(stdin);
        addXTable(&t1, add);
    }
    else
    {
        printf("Tidak menambahkan nilai apapun ke dalam tabel\n");
    }
    printf("====== SIZE TABLE =======\n");
    printf("size dari table menjadi: %d", getSize(&t1));
    printf("\n=====PRINT TABLE=======\n");
    printTable(&t1);
    printf("\n=====UPDATEX TABLE=======\n");
    printf("Masukkan nilai yang ingin diganti : ");
    scanf("%d", &change);
    fflush(stdin);
    printf("Masukkan nilai pengganti : ");
    scanf("%d", &select);
    fflush(stdin);
    updateX(&t1, change, select);
    printf("=====PRINT TABLE=======\n");
    printTable(&t1);
    printf("\n=====DELX TABLE=======\n");
    printf("Masukkan nilai yang ingin dihapus : ");
    scanf("%d", &delete);
    fflush(stdin);
    delXTable(&t1, delete);
    printf("=====PRINT TABLE=======\n");
    printTable(&t1);
    printf("\n=====DELALLX TABLE=======\n");
    printf("Masukkan nilai yang ingin dihapus (All) : ");
    scanf("%d", &deleteAll);
    fflush(stdin);
    delAllXTable(&t1, deleteAll);
    printf("\n=====PRINT TABLE=======\n");
    printTable(&t1);
    return 0;
}