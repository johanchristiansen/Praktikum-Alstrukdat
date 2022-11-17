#ifndef __ARRAY_DINAMIK__
#define __ARRAY_DINAMIK__

// Boolean
#define boolean unsigned char
#define true 1
#define false 0

#define InitialSize 10

typedef int IdxType;
typedef int ElType;
typedef struct {
    ElType *A;
    int Capacity;
    int Neff;
} ArrayDin;

/**
 * Konstruktor
 * I.S. sembarang
 * F.S. Terbentuk ArrayDin kosong dengan ukuran InitialSize
 */
ArrayDin MakeArrayDin();

/**
 * Destruktor
 * I.S. ArrayDin terdefinisi
 * F.S. arr->A terdealokasi
 */
void DeallocateArrayDin(ArrayDin *arr);

/**
 * Fungsi untuk mengetahui apakah suatu arr kosong.
 * Prekondisi: arr terdefinisi
 */
boolean IsEmpty(ArrayDin arr);

/**
 * Fungsi untuk mendapatkan banyaknya elemen efektif arr, 0 jika tabel kosong.
 * Prekondisi: arr terdefinisi
 */
int Length(ArrayDin arr);

/**
 * Mengembalikan elemen arr L yang ke-I (indeks lojik).
 * Prekondisi: arr tidak kosong, i di antara 0..Length(arr).
 */
ElType Get(ArrayDin arr, IdxType i);

/**
 * Fungsi untuk mendapatkan kapasitas yang tersedia.
 * Prekondisi: arr terdefinisi
 */
int GetCapacity(ArrayDin arr);

/**
 * Fungsi untuk menambahkan elemen baru di index ke-i
 * Prekondisi: arr terdefinisi, i di antara 0..Length(arr).
 */
void InsertAt(ArrayDin *arr, ElType el, IdxType i);

/**
 * Fungsi untuk menghapus elemen di index ke-i ArrayDin
 * Prekondisi: arr terdefinisi, i di antara 0..Length(arr).
 */
void DeleteAt(ArrayDin *arr, IdxType i);

#endif