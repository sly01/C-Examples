#include<stdio.h>
#include<stdlib.h>

int main(){
	int sayi1=0,sayi2=0,kucukSayi=0,buyukSayi=0,i=0;
	printf("Sayi 1 giriniz=");
	scanf("%d",&sayi1);
	printf("Sayi 2 giriniz=");
	scanf("%d",&sayi2);
	if(sayi1 > sayi2){
 	 	kucukSayi = sayi2;
		buyukSayi = sayi1;
	}
	else{
		kucukSayi = sayi1;
		buyukSayi = sayi2;
	}
	for(i=kucukSayi;i<=buyukSayi;i++){
		if(i%3 == 0 || i%4 ==0 || i%5 == 0)
		printf("%d ",i);
	}


return 0;
}
