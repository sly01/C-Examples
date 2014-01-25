#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main()
{
	int dizi[20],i=0;
	srand(time(0));
	for(i=0;i<20;i++){
	dizi[i]=((rand()%49)+1)*2+1;
	printf("%d\n",dizi[i]);
	}
return 0;
}
