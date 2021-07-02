#include<stdio.h>
#include<conio.h>
#define Kelvin 273
int main(){
	int suhu;
	float reamur;
	float fahren;
	float kelvin;
	char answer[2];
	int i=0;
	
	do{
	printf("Masuuka Suhu dalam Celcius: \n");
	scanf("%i",&suhu);
	printf("Hasil Konversi %i celcius ialah: \n", suhu);
	reamur= (float)suhu*4/5;
	printf("\t Reamur: %.2f \n",reamur);
	fahren= ((float)suhu*9/5)+32;
	printf("\t Fahrenheit : %.2f", fahren);
	kelvin= (float)suhu +Kelvin;
	printf("\t Kelvin : %.2f", kelvin);
	
	
	printf("apakah anda ingin konversi lagi (y/n): ");
	scanf("%s", &answer);
	if(answer=="y"){
	i++;	
	}
	} 
	while(i==0);
	
	return 0;
	
}
