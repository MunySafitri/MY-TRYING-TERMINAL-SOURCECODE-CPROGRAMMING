#include<stdio.h>
int main(){
	float suhu;
	float reamur,fahren,kelvin,Suhu;
	char answer;
	 printf("===== Program Konversi Suhu ===== \n");
	printf("Masukkan Suhu dalam Celcius: ");
	scanf("%f",&suhu);
	Suhu=(float)suhu;
	printf("Hasil Konversi %.2f celcius ialah: \n", Suhu);
	reamur= Suhu*4/5;
	printf("\t Reamur: %.2f \n",reamur);
	fahren= (Suhu*9/5)+32;
	printf("\t Fahrenheit : %.2f \n", fahren);
	kelvin= Suhu +273;
	printf("\t Kelvin : %.2f \n", kelvin);
	printf("\n");
	printf("apakah anda ingin konversi lagi (y/n): ");
	scanf("%s", &answer);
	
	
	while(answer=='y'){
			printf("Masukkan Suhu dalam Celcius: ");
	scanf("%f",&suhu);
	Suhu=(float)suhu;
	printf("Hasil Konversi %.2f celcius ialah: \n", Suhu);
	reamur= Suhu*4/5;
	printf("\t Reamur: %.2f \n",reamur);
	fahren= (Suhu*9/5)+32;
	printf("\t Fahrenheit : %.2f \n", fahren);
	kelvin= Suhu +273;
	printf("\t Kelvin : %.2f \n", kelvin);
	printf("\n");
	printf("apakah anda ingin konversi lagi (y/n): ");
	scanf("%s", &answer);
	}	
}
