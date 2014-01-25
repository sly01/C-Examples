#include<stdio.h>


int main(){

int toplam=0,sayi;


while(sayi!=0){
printf("bir sayi gir");
scanf("%d",&sayi);	
toplam=toplam+sayi;

}

printf("toplam=%d dir",toplam);


return 0;
}