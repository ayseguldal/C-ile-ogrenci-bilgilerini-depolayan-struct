#include <stdio.h>
#include <stdlib.h>

struct ogrenciler{
  char ad[15];
   char soyad[15];
   int numara;
    char sokak[15];
	char mahalle[15];
	char cadde[15];    	

}ogr[5]={
{"Aysegul","DAL",1302,"Gunes","Sakarya","Fatih"},
{"Enhar","AYDIN",576,"Bahcelievler","Saka","Okul"},
{"Ayfer","SARI",121,"Gunesli","Kirazli","Lale"},
{"Busra","YILMAZ",256,"Sanayi","Merkez","Gul"},
{"Aysun","DEMIR",451,"Nergis","Demirkapi","Sahin"}
};


int main() {
   
    printf("Adi:%s Soyadi:%s Numara:%d Sokak:%s Mahalle:%s Cadde:%s \n\n",ogr[0].ad,ogr[0].soyad,ogr[0].numara,ogr[0].sokak,ogr[0].mahalle,ogr[0].cadde);
    printf("Adi:%s Soyadi:%s Numara:%d Sokak:%s Mahalle:%s Cadde:%s \n\n",ogr[1].ad,ogr[1].soyad,ogr[1].numara,ogr[1].sokak,ogr[1].mahalle,ogr[1].cadde);
	printf("Adi:%s Soyadi:%s Numara:%d Sokak:%s Mahalle:%s Cadde:%s \n\n",ogr[2].ad,ogr[2].soyad,ogr[2].numara,ogr[2].sokak,ogr[2].mahalle,ogr[2].cadde);
	printf("Adi:%s Soyadi:%s Numara:%d Sokak:%s Mahalle:%s Cadde:%s \n\n",ogr[3].ad,ogr[3].soyad,ogr[3].numara,ogr[3].sokak,ogr[3].mahalle,ogr[3].cadde);
	printf("Adi:%s Soyadi:%s Numara:%d Sokak:%s Mahalle:%s Cadde:%s \n\n",ogr[4].ad,ogr[4].soyad,ogr[4].numara,ogr[4].sokak,ogr[4].mahalle,ogr[4].cadde);   

	return 0;

}


