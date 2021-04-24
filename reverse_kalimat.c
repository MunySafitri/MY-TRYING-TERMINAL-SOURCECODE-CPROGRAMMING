#include<stdio.h> 
#include <string.h>
#include<stdlib.h> 
int main(){
	char string[255],reverse[255],ulangi[255];
	int urutan=0,i=0;
	printf("masukkan kalimat yang akan di-reverse (max 255 karakter): ");
	scanf(" %[^\n]",string);
	int kalimat=strlen(string);//fungsi menghitung panjang array
	for (i=0;i<kalimat;i++){
		if (string[i]>='A' && string[i]<='Z'){
			string[i]=string[i]+32;
		}
	}
	int panjang=kalimat-1;
	if(panjang<=255){
	printf("\nhasil reverse ");
	//mereverse array 
	for(i=panjang;i>=0;i--){ 
		printf("%c",string[i]);	
		}
	}else {
		printf("string yang anda masukkan lebih dari 255 karakter..");
	}
	return 0 ;
}
