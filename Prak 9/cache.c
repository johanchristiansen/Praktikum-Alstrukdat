#include <stdio.h>
#include <stdlib.h>
#include "listlinier.h"

int main (){
	List l;
    CreateEmpty(&l);
    int i, N, x;
	address P;
	scanf("%d", &N);
	for (i = 0; i < N; i++)
	{
		P = Alokasi(N - i);
		InsertFirst(&l, P);
	}
	int Q;
	scanf("%d", &Q);
	for (int i = 0; i < Q; ++i)
	{
		scanf("%d", &x);
		P = Search(l, x);
		if (P != Nil)
		{
			DelP(&l, x);
			P = Alokasi(x);
			InsertFirst(&l, P);
			printf("hit ");
			PrintInfo(l);
			printf("\n");
		}
		else
		{
			DelLast(&l, &P);
			P = Alokasi(x);
			InsertFirst(&l, P);
			printf("miss ");
			PrintInfo(l);
			printf("\n");
		}
	}
}