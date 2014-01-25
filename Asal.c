#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int asalMi(int sayi){
	int i=1;
	if(sayi < 2)
 	return 0;
	for(i=2;i<=sayi/2;i++){
	if(sayi%i==0)
	return 0;
	}
return 1;
}
main() {
	int dizi[10],i=0;
	srand(time(0));
	for(i=0;i<10;i++){
	 dizi[i]= rand()%100;
	}
	for(i=0;i<10;i++){
	if(asalMi(dizi[i])){
	printf("%d asaldir\n",dizi[i]);
	}
	else 
	printf("%d asal degildir\n",dizi[i]);
	}
	
}
