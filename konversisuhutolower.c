#include<stdio.h>
#include<ctype.h>
int main(){
	float suhu;
	float Suhu;
	float reamur;
	float fahren;
	float kelvin;
	char answer;
	int i=0;
	
	do{
	printf("Masukkan Suhu dalam Celcius: ");
	scanf("%f",&suhu);
	Suhu=(float)suhu;
	printf("Hasil Konversi %.2f celcius ialah: \n", Suhu);
	reamur= (float)suhu*4/5;
	printf("\t Reamur: %.2f \n",reamur);
	fahren= ((float)suhu*9/5)+32;
	printf("\t Fahrenheit : %.2f \n", fahren);
	kelvin= (float)suhu +273;
	printf("\t Kelvin : %.2f \n", kelvin);
	
	printf("\n");
	printf("apakah anda ingin konversi lagi (y/n): ");
	scanf("%s", &answer);
	
	if(toupper(answer)=='y'){
		continue;		
	}if (toupper(answer)=='n'){
		break;
	}else{
		do{
			if (toupper(answer)=='n'){
				break;
		}printf("\nmasukkan input dengan benar: ");
		scanf("%s",&answer);
	}while(toupper(answer)!= 'y' );
	}
	} while(toupper(answer)=='y');
	
	return 0;
	
}
