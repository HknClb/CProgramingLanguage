#include <stdio.h> /*STANDART I/O K�T�PHANES�*/
#include <stdlib.h> /*MALLOC G�B� BAZI STANDART FONKS�YON K�T�PHANES�*/
#include <stdarg.h> /*ESNEK ARG�MAN AKTARIMI K�T�PHANES�*/
#include <errno.h> /*errno DE���KEN�N�N B�LD�R�M� YAPILAN K�T�PHANE*/
#include <time.h> /*TAR�H VE ZAMAN FONSK�YONLARININ K�T�PHANES�*/
#include <ctype.h> /*KARAKTERLER �ZER�NDE ��LEM YAPAN K�T�PHANE 1.1*/
#include <string.h> /*KATARLAR �ZER�NDE ��LEM YAPAN K�T�PHANE 2.1*/
#include <locale.h> /*LOKAL�ZASYON FONKS�YONLARININ B�LD�R�M� YAPILAN K�T�PHANE*/

void quicksort(int ary[], int left0, int right0)
{
	int left = left0;= r int right = right0; int pivot; int temp = left0; int i;
	for(i = 0; i < (right0 - left0) / 2; i++)
		temp++;
	pivot = ary[temp];
	do
	{	
		while(ary[left] < pivot)
			left++;
		while(ary[right] > pivot)
			right--;
		if(left < right)
		{
			temp = ary[left];
			ary[left] = ary[right];
			ary[right] = temp;
			if(ary[left] == ary[right])
				left++;	
		}
	}while(left < right);
	if(left0 < right)
		quicksort(ary, left0, right - 1);
	if(left < right0)
		quicksort(ary, left + 1, right0);	
}

void main()
{
	setlocale(LC_ALL, "Turkish");
	srand(time(NULL));
	int arylenght; int i;
	printf("Dizi boyutu: ");
	scanf("%d", &arylenght);
	int ary[arylenght];
	for(i = 0; i < arylenght; i++)
		ary[i] = -100 + rand() % 200; /*-100 ile 100 aras�nda de�er al�r.*/
	puts("Dizinin i�eri�i: ");
	for(i = 0; i < arylenght; i++)
		printf("ary[%d]: %d\n", i, ary[i]);
	puts("S�ralama fonksiyonu �a�r�l�yor !");
	quicksort(ary, 0, arylenght - 1);
	puts("Dizinin i�eri�i: ");
	for(i = 0; i < arylenght; i++)
		printf("ary[%d]: %d\n", i, ary[i]);
}
