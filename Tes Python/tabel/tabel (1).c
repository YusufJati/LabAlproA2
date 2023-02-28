/* Program   : tabel.c */
/* Deskripsi : */
/* NIM/Nama  : 24060120120002/Jason Al-Hilal Sabda Dewa */
/* Tanggal   : 31 Agustus 2021*/
/***********************************/

#include <stdio.h>
#include <stdbool.h>
#include "tabel.h"

/*procedure createTable( output T: Tabel)
	{I.S.: -}
	{F.S.: size=0, setiap elemen wadah=-999}
	{Proses: menginisialisasi T} */
void createTable(Tabel *T)
{
	// kamus lokal
	int i;

	// algoritma
	(*T).size = 0; //ruang array yg terisi (panjang array terisi)
	for (i = 0; i < 10; i++)
	{
		(*T).wadah[i] = -999;
	}
}
/*procedure createTableCustom( output T: Tabel)
	{I.S.: -}
	{F.S.: size=0, setiap elemen wadah sesuai inputan}
	{Proses: menginisialisasi T} */
void createTableCustom(Tabel *T)
{
	// kamus lokal
	int i;

	// algoritma
	printf("Masukkan nilai tabel : ");
	(*T).size = 0; //ruang array yg terisi (panjang array terisi)
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &(*T).wadah[i]);
	}
}

/*procedure printTable ( input T:Tabel )
	{I.S.: T terdefinisi}
	{F.S.: -}
	{Proses: menampilkan semua elemen T ke layar} */
void printTable(Tabel *T)
{
	// kamus lokal
	int i;

	// algoritma
	for (i = 0; i < (*T).size; i++)
	{
		printf("%d", (*T).wadah[i]);
	}
}

/*function getStize( T: Tabel) -> integer
	{mengembalikan banyak elemen pengisi T } */
int getSize(Tabel *T)
{
	// algoritma
	return (*T).size;
}

/*procedure viewTable ( input T:Tabel )
	{I.S.: T terdefinisi}
	{F.S.: -}
	{Proses: menampilkan elemen T yang terisi ke layar} */
void viewTable(Tabel *T)
{
	// kamus lokal
	int i;

	// algoritma
	for (i = 0; i < (*T).size; i++)
	{
		if ((*T).wadah[i] != 0)
		{
			printf("%d", (*T).wadah[i]);
		}
	}
}

/*function countEmpty( T: Tabel) -> integer
	{mengembalikan banyak elemen T yang belum terisi } */
int countEmpty(Tabel *T)
{
	// algoritma
	return 10 - (*T).size;
}

/*function isEmptyTable( T: Tabel) -> boolean
	{mengembalikan True jika T kosong } */
boolean isEmptyTable(Tabel *T)
{
	// algoritma
	if ((*T).size == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

/*function isFullTable( T: Tabel) -> boolean
	{mengembalikan True jika T penuh } */
boolean isFullTable(Tabel *T)
{
	// algoritma
	if ((*T).size == 10)
	{
		return true;
	}
	else
	{
		return false;
	}
}

/*procedure populate1 ( input/output T:Tabel, input N: integer )
	{I.S.: T terdefinisi, N terdefinisi dalam rentang 1..10}
	{F.S.: T.wadah terisi sebanyak N elemen }
	{Proses: mengisi elemen T.wadah sebanyak N kali dari keyboard}
	{Syarat: angka-angka masukan keyboard > 0 }*/
void populate1(Tabel *T, int N)
{
	// kamus lokal
	int i;

	// algoritma
	(*T).size = N;
	printf("Masukkan nilai tabel : ");
	if (N > 0 && N <= 10)
	{
		for (i = 0; i < N; i++)
		{
			scanf("%d", &(*T).wadah[i]);
		}
	}
	else
	{
		printf("\nSize Table harus >0\n");
	}
}

/*procedure searchX1 ( input T:Tabel, input X: integer, output Pos: integer )
	{I.S.: T terdefinisi, X terdefinisi }
	{F.S.: Pos berisi posisi ketemu di T.wadah, atau -999 jika tidak ketemu }
	{Proses: mencari elemen bernilai X dalam T.wadah}*/
void searchX1(Tabel *T, int X)
{
	// kamus lokal
	int Pos;

	// algoritma
	(Pos) = 1;
	if ((*T).size == 0)
	{
		printf("Tabel tidak memiliki nilai (kosong)");
	}
	else if ((*T).size > 0 && (*T).size <= 10)
	{
		for (int i = 0; i < (*T).size; i++)
		{
			if ((*T).wadah[i] == X)
			{
				(Pos) = i + 1;
				break;
			}
			else
			{
				(Pos) = -999;
			}
		}
		if (Pos == -999)
		{
			printf("Nilai tidak ketemu (-999)");
		}
		else
		{
			printf("nilai yang dicari ada di posisi ke : %d", Pos);
		}
	}
}

/*procedure countX ( input T:Tabel, input X: integer, output Byk: integer )
	{I.S.: T terdefinisi, X terdefinisi }
	{F.S.: Byk berisi banyaknya X di T.wadah, atau 0 jika tidak ketemu }
	{Proses: menghitung elemen bernilai X dalam T.wadah}*/
void countX(Tabel *T, int X)
{
	// kamus lokal
	int Byk = 0;

	// algoritma
	for (int i = 0; i < (*T).size; i++)
	{
		if ((*T).wadah[i] == X)
		{
			(Byk) = (Byk) + 1;
		}
	}
	printf("Nilai %d ada sebanyak : %d", X, Byk);
}

/*function getMaxEl ( T: Tabel) -> integer
	{mengembalikan nilai elemen terbesar } */
int getMaxEl(Tabel *T)
{
	// kamus lokal
	int i;
	int temp = (*T).wadah[0]; //jika array kosong

	// algoritma
	if ((*T).size == 0)
	{
		temp = '\0';
	}
	else if ((*T).size > 0 && (*T).size <= 10)
	{
		for (i = 0; i < (*T).size; i++)
		{
			if (temp < (*T).wadah[i])
			{
				temp = (*T).wadah[i];
			}
		}
	}

	return temp;
}
/*function getMinEl ( T: Tabel) -> integer
	{mengembalikan nilai elemen terkecil } */
int getMinEl(Tabel *T)
{
	// kamus lokal
	int i;
	int temp = (*T).wadah[0]; //jika array kosong

	// algoritma
	if ((*T).size == 0)
	{
		temp = '\0';
	}
	else if ((*T).size > 0 && (*T).size <= 10)
	{
		for (i = 0; i < (*T).size; i++)
		{
			if (temp > (*T).wadah[i])
			{
				temp = (*T).wadah[i];
			}
		}
	}

	return temp;
}

/*procedure addXTable ( input/output T:Tabel, input X: integer )
	{I.S.: T terdefinisi, X terdefinisi }
	{F.S.: isi T.wadah bertambah 1 elemen jika belum penuh}
	{Proses: mengisi elemen T.wadah dengan nilai X}*/
void addXTable(Tabel *T, int X)
{

	// algoritma
	if ((*T).size >= 0 && (*T).size < 10)
	{
		int last = (*T).size;
		(*T).wadah[last] = X;
		(*T).size += 1;
	}
	else if ((*T).size == 10)
	{
		printf("Tabel Sudah Penuh !!");
	}
}

/*procedure delXTable ( input/output T:Tabel, input X: integer )
	{I.S.: T terdefinisi}
	{F.S.: isi T.wadah berkurang 1 elemen jika belum kosong}
	{Proses: menghapus 1 elemen bernilai X, geser semua elemen sisa}*/
void delXTable(Tabel *T, int X)
{
	// kamus lokal
	int i;
	int j;

	// algoritma
	if ((*T).size > 0 && (*T).size <= 10)
	{
		//cek ada/tidak angka di tabel
		int cek = 0;
		for (i = 0; i < (*T).size; i++)
		{
			if ((*T).wadah[i] == X)
			{
				cek++;
			}
		}
		if (cek == 0)
		{
			printf("Nilai tersebut tidak ada dalam Table !!\n");
		}

		// prorgam delete
		for (i = 0; i < (*T).size; i++)
		{
			if ((*T).wadah[i] == X)
			{
				if ((*T).size == 1)
				{
					(*T).wadah[(*T).size - 1] = '\0';
				}
				else
				{
					for (j = i; j < (*T).size; j++)
					{
						(*T).wadah[j] = (*T).wadah[j + 1];
					}
				}
				(*T).size -= 1;
				break;
			}
		}
	}
	else if ((*T).size == 0)
	{
		printf("Tabel Kosong !!");
	}
}

// procedure updateX ( input/output T:Tabel, input X: integer, input Y: integer )
// 	{I.S.: T terdefinisi, Y >= 0}
// 	{F.S.: isi T.wadah bernilai X diganti nilainya dengan Y}
// 	{Proses: mengganti elemen pertama bernilai X dengan nilai Y }
void updateX(Tabel *T, int X, int Y)
{
	// kamus lokal
	int i;
	int j;

	// algoritma
	if ((*T).size > 0 && (*T).size <= 10)
	{
		//cek ada/tidak angka di tabel
		int cek = 0;
		for (i = 0; i < (*T).size; i++)
		{
			if ((*T).wadah[i] == X)
			{
				cek++;
			}
		}
		if (cek == 0)
		{
			printf("Nilai tersebut tidak ada dalam Table !!\n");
		}

		// prorgam delete
		for (i = 0; i < (*T).size; i++)
		{
			if ((*T).wadah[i] == X)
			{
				(*T).wadah[i] = Y;
				break;
			}
		}
	}
	else if ((*T).size == 0)
	{
		printf("Tabel Kosong !!");
	}
}

/*procedure delAllXTable ( input/output T:Tabel, input X: integer )
	{I.S.: T terdefinisi}
	{F.S.: isi T.wadah berkurang semua elemen bernilai X jika belum kosong}
	{Proses: menghapus semua elemen bernilai X, geser elemen sisa}*/
void delAllXTable(Tabel *T, int X)
{
	// kamus lokal
	int i, count = 0;

	// algoritma

	// prorgam deleteAll
	for (i = 0; i < (*T).size; i++)
	{
		if ((*T).wadah[i] == X)
		{
			count += 1;
			(*T).wadah[i] = (*T).wadah[i + 1];
		}
	}

	(*T).size -= (count);

	// delete semua duplikat tanpa input
	// for (i = 0; i < (*T).size; i++)
	// {
	// 	for (j = i + 1; j < (*T).size; j++)
	// 	{
	// 		/* If any duplicate found */
	// 		if ((*T).wadah[i] == (*T).wadah[j])
	// 		{
	// 			/* Delete the current duplicate element */
	// 			for (k = j; k < (*T).size - 1; k++)
	// 			{
	// 				(*T).wadah[k] = (*T).wadah[k + 1];
	// 			}

	// 			/* Decrement (*T).size after removing duplicate element */
	// 			(*T).size--;

	// 			/* If shifting of elements occur then don't increment j */
	// 			j--;
	// 		}
	// 	}
	// }
}
