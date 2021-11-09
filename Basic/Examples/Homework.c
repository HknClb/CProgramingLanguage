#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

/*Dosyalama i�lemleri;
	int gibi FILE tipi vard�r tan�mlanmas�;
	FILE *dosyaismi = fopen(); �eklindedir.
fopen() -> ��erisine iki adet arg�man al�r dosyay� a�mak i�in kullan�l�r.
1.Dosya ad� a.txt gibi.
2.Dosya modu 6 adet dosya modu vard�r bunlar.
w->Sadece yazmak i�in a�ar e�er dosya yoksa tekrardan dosya olu�turur varsa �zerine olu�turur. Cursor
dosyan�n ba��ndad�r.
r->Sadece okumak i�in a�ar e�er dosya yoksa a�maz hata verir.
a->Eklemek i�in a�ar yoksa olu�turur cursor dosyan�n sonundad�r.
w+->Yazmak i�in a�ar e�er dosya yoksa tekrardan dosya olu�turur varsa �zerinde olu�turur. Ayn� zamanda
okuma i�lemi de yapar cursor dosyan�n ba��ndad�r.
r+->Hem okuyum hep yazmak i�in a�ar dosya yoksa olu�turmaz cursor dosyan�n ba��ndad�r.
a+->Eklemek i�in yazar okumada yap�labilir cursor dosyan�n sonundad�r dosya yoksa onu a�ar.
kullan�m� -> fopen(dosyaismi.txt, dosyamodu(w, r, a, w+, r+, a+));

fclose() -> i�erisine tek arg�man al�r dosyay� kapatmak i�in kullan�l�r.
1.Dosya ismi.
kullan�m�->fclose(dosyaismi);

getc() -> i�erisinde tek arg�man al�r dosyadan karakter okur.
1.Dosya ismi.
kullan�m� -> char kr = getc(dosyaismi);

putc() -> i�erisinde iki adet arg�man al�r dosyaya karakter yazar.
1.Yaz�lacak karakter.
2.Dosya ismi.
kullan�m� -> putc(kr, dosyaismi);

feof() ve EOF -> feof i�erisinde tek arg�man al�r EOF ise fonksiyon de�ildir. Cursor sonda olup
olmad���n� kontrol eder.
feof() true yada false de�erler al�r.
1.Dosya ismi
feof() kullan�m� -> feof(dosyaismi);
EOF kullan�m� char kr = getc(dosyaismi) != EOF;

fprintf() -> formatl� dosyaya veri yazd�rmak i�in kullan�l�r.
kullan�m� -> fprintf(dosyaismi, "%d gibi de�i�ken �eyleri veya metin", degiskenismi);

fscanf() -> Belirtilen formatta konsol ile ayn� �ekilde dosyadan veri al�r.
kullan�m� -> fscanf(dosyaismi, "%d gibi de�i�ken �eyleri", &degiskenismi);

fputs() -> Direkt olarak istedi�imiz veriyi dosyaya yazmam�z� sa�lar i�erisine iki adet arg�man al�r.
1.Veri.
2.Dosya ismi.
kullan�m� -> fputs(dosyaismi, "Yaz�lacak veri");

fgets() -> Direkt olarak isteddi�imiz veriyi dosyadan okumam�z� sa�lar i�erisinde �� adet arg�man al�r.
1.Okunacak verinin tutuldu�u de�i�ken.
2.Ka� karakterlik veri at�laca�� n ise n-1 karakter.
3.Dosya ismi.
kullan�m� -> fgets(degiskenismi, okumaboyutu, dosyaismi);

fwrite() -> Direkt olarak dizi yazmam�z� sa�lar �� adet arg�man al�r.
1.Yaz�lacak dizi.
2.Dizi boyutu.
3.Dosya ismi.
kullan�m� -> fwrite(dizi, diziboyut, dosyaismi);

fread() -> Dizi �zerinden direkt olarak veri okumam�z� sa�lar �� adet arg�man al�r.
1.Okunan dizinin tutulaca�� dizi.
2.Dizi boyutu.
3.Dosya ismi
kullanimi(dizi, diziboyut, dosyaismi)

fseek() -> Dosya i�erisinde ki cursor'un pozisyonunu ayarlamam�z� sa�lar �� adet arg�man al�r.
1.Dosyaismi
2.Cursorun ilerletme miktar�.
3.Ba�tan ortadan veya sondan yani 0, 1, 2;
kullan�m� -> fseek(dosyaismi, ilerletmemiktari, cursorbastamisondamiortadami).
*/

int main()
{
	setlocale(LC_ALL, "Turkish");
	FILE f = fopen("a.txt", a);
	fwrite()
	fclose(f);
	return 0;
}
