#include <stdio.h>
#include <stdlib.h> /*Malloc kullanabilmek i�in ekledim.*/
#include <locale.h> /*konum belirterek konsol ekran�nda T�rk�e karakterlerin var olabilmesi i�in.*/

typedef struct /*n isminde bir struct olu�turduk*/
{
    int data;
    struct n * next; /*n struct'� tipinde bir next pointer'� olu�turdum.*/
}n;
/*typedef struct n node; /*node d���m anlam�na gelir n struct�n� g�steren tip isimlendirdim.*/

int main()
{
    setlocale(LC_ALL, "Turkish");
    n * root = (n *)malloc(sizeof(n));
    /*
    node tipinde yan� n struct'� tipinde bir k�k yani root pointer'� olu�turup yer ay�rd�k. root pointer'�
	bizim basit ba�l� listemiszin ilk eleman�n� g�sterecek. (node *)malloc(); �eklinde tan�mlad�k ��nk� malloc
	geriye void tipinde bir de�er d�nderir. Bizim node tipinde d�ndermesini istiyoruz ve n struct'� kadar yer
	ay�rd�k.
    */
    n * iter;
    iter = root;
    /*
    iter -> iterator �eklinde bir node tipinde pointer olu�turduk ��nk� bu pointer bizim basit ba�l�
	listemizde serbeste gezinmesini ve bizim i�imizi kolayla�t�rmas�n� istiyoruz root -> next -> next -> ...
	�eklinde uzatmak yerine
    iter -> data = 5;
    iter = iter -> next; �eklinde bir ad�m ilerleme yapabiliyoruz*/
    /*�imdi 10 kutuluk ba�l� liste olu�turaca��z ve bu 10 kutuluk ba�l� listemize 1 - 10'a kadar olan say�lar�
    at�p yazd�raca��z.*/
    int i;
    for(i = 0; i < 10; i++)/*Bu for d�ng�s�nde yer ay�rmas� yap�yoruz.*/
    {
        iter = (n *)iter -> next;
        iter = (n *)malloc(sizeof(n));
    }
    iter = (n *)root; /*iter son kutuya kadar ilerlemi�ti tekrar ilk kutuya ald�k.*/
    for(i = 1; i <= 10; i++)/*Burada de�er atamas�n� yapt�k.*/
    {
    	sleep(1);
    	printf("%d ", i);
        iter -> data = i;  
        iter = (n *)iter -> next;
        printf("- ");
    }
    iter = (n *)root;
    for(i = 0; i < 10; i++)
    {
        printf("\n%d.Kutu = %d", i + 1, iter -> data);
        iter = (n *)iter -> next;
    }
    free(iter);
    free (root);
    return 0;
}
