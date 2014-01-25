#include<stdio.h>



int main(){
	
	int sayi,basamak,toplam=0;

printf("bir sayi gir=");
scanf("%d",&sayi);


while(sayi!=0){

basamak=sayi%10;
toplam += basamak;
sayi=sayi/10;
}
printf("%d ",toplam);

return 0;
}