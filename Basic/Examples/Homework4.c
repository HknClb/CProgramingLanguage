#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Turkish");
	float sayi_1; float sayi_2; int toplam;
	printf("Aralar�nda + b�rakarak iki adet ger�el say� giriniz: ");
	scanf("%f+%f", &sayi_1, &sayi_2);
	toplam = sayi_1 + sayi_2;
	printf("Toplamlar�n�n int hali: %d", toplam);
	return 0;
}
