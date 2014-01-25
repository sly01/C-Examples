#include<stdio.h>


int main()
{

srand(time(0));
int sayi,j=0,k=0,i,a;

printf("bir sayi gir");
scanf("%d",&sayi);


for(i=0;i<sayi;i++){
a=rand();
if(a%2==0){
printf("%d \n",a);
k++;
}
else{
printf("%d \n",a);
j++;
}
}
printf("%d tane cift sayi vardir",k);
printf("%d tane tek sayi vardir",j);




return 0;
}
