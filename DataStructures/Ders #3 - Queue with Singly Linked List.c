#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

typedef enum bl
{
	false = 0,
	true = 1
}boolean;

typedef struct n
{
	int data;
	struct n *next;
}node;

node *iter;
node *root;

int Insert()
{
	static boolean is_first = true;
	int inp;
	static int a = 0;
	if(is_first == true)
	{
		printf("Kuyru�a girmesini istedi�iniz eleman: ");
		scanf("%d", &inp);
		iter->data = inp;
		iter->next = NULL;
		is_first = false;
	}
	else
	{
		printf("Kuyru�a girmesini istedi�iniz eleman: ");
		scanf("%d", &inp);
		iter->next = (node *)malloc(sizeof(node));
		iter = iter->next;
		iter->data = inp;
		iter->next = NULL;
		if(a == 3)
			printf("%d\n", root->next->next->data);
	}
	a++;
	return 1;
}

int IsEmpty()
{
	node *fake_root = root;
	if(fake_root->data == 0 && fake_root->next == NULL)
		return 1;
	else
		return 0;
}

void Delete()
{
	if(IsEmpty(root) == 1)
		printf("Kuyruk bo�!\n\n");
	else
	{
		int del = root->data;
		node *fake_root = root->next;
		free(fake_root);
		root = fake_root;
		printf("%d eleman� kuyruktan ��kt�\n\n", del);
	}
}

void Display()
{
	node *fake_root = root;
	int a = 1;
	while(fake_root != NULL)
	{
		printf("%d.Eleman = %d ve adresi ->%p\n", a, fake_root->data, &(fake_root->data));
		fake_root = fake_root->next;
		a++;
	}
	printf("\n");
}

node *Search()
{
	node *fake_root = root;
	int inp; int a = 1;
	printf("Aramak istedi�iniz eleman: ");
	scanf("%d", &inp);
	while(fake_root != NULL)
	{
		if(fake_root->data == inp)
		{
			printf("Arad��n�z eleman kuyrukta %d.s�radad�r\n", a);
			return fake_root;
		}
		else
			fake_root = fake_root->next;
		a++;
	}
	return NULL;
}

int main()
{
	setlocale(LC_ALL, "Turkish");
	root = (node *)malloc(sizeof(node));
	iter = root;
	node *wanted;
	int selection;
	printf("\t\t\t\t\tKuyruk ��lemi\n");
	do
	{
		printf("Kuyru�a Eleman Ekle[1]\nKuyruktan Eleman ��kar[2]\n");
		printf("Kuyru�u G�ster[3]\nKuyrukta Eleman Ara[4]\n��k��[5]\nSe�iminiz: ");
		selection = getch() - '0';
		printf("%d\n", selection);
		switch(selection)
		{
			case 1:
				if(Insert() == 1)
					printf("Kuyru�a eleman eklendi...\n\n");
				else
					printf("��lem bir nedenden dolay� ba�ar�s�z oldu!\n\n");
				break;
			case 2:
				Delete();
				break;
			case 3:
				Display();
				break;
			case 4:
				wanted = Search();
				if(wanted != NULL)
					printf("Arad���n�z eleman %d ve adresi->%p\n\n", wanted->data, &(wanted->data));
				else
					printf("Aranan eleman bulunamad�!\n\n");
				break;
			case 5:
				free(root);
				break;
			default:
				printf("L�tfen ge�erli bir de�er giriniz!\n\n");
				break;
		}
	}while(selection != 5);
	return 0;
}







