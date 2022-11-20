#include "duplicate.h"
#include <stdio.h> 
/*
    Masukkan semua elemen array arr ke suatu Set, kemudian kembalikan Set tersebut
        Contoh:
            arrToSet
                <- arr = [1, 1, 3]
                <- arrSize = 3
            -> [1, 3]
*/
Set arrToSet(int* arr, int arrSize)
{
	Set s;
	CreateEmpty(&s);
	int i;
	i = 0;
	for (i; i < arrSize;i++)
	{
		Insert(&s,arr[i]);
	}
	return s;
	}
/*
    Dengan memanfaatkan fungsi arrToSet, hapuslah elemen duplikat pada array arr
    kemudian kembalikan isinya secara menurun
 
    Penjelasan Parameter:
    Parameter 1: arr, merupakan array masukan yang perlu dihapus elemen duplikatnya
    Parameter 2: arrSize, merupakan panjang arr
    Parameter 3: arrRes, merupakan array keluaran, hasil pengapusan elemen duplikat
        dan elemen-elemennya terurut menurun
    Parameter 4: arrResSize, merupakan panjang arrRes
 
    Contoh: 
        removeDuplicate
            <- arr = [1, 1, 2, 3]
            <- arrSize = 4
            -> arrRes = [3, 2, 1]
            -> arrResSize = 3
        removeDuplicate
            <- arr = [3, 1, 1]
            <- arrSize = 3
            -> arrRes = [3, 1]
            -> arrResSize = 2
*/
void removeDuplicateDesc(int* arr, int arrSize, int* arrRes, int* arrResSize)
{
	Set s1;
	s1 = arrToSet(arr,arrSize);
	*arrResSize = s1.Count;	
	int i,j;
	i = 1;
	int temp;
	for (i; i < *arrResSize;i++)
	{
		temp = s1.Elements[i];
		j = i - 1;
		while ( j >= 0 && s1.Elements[j] < temp)
		{
			s1.Elements[j+1]  = s1.Elements[j];
			j = j - 1;
			}
		s1.Elements[j+1]  = temp;
		}
	for (i = 0; i < *arrResSize;i++)
	{
		arrRes[i] = s1.Elements[i];
		}
}
 
 