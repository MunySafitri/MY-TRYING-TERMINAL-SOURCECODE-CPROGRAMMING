#include<stdio.h>
#include<ctype.h>
#include<string.h>
void replace (char *, char ,char );
void replace(char *data,char find,char replace){
	char temp;
	for(;*data!='\0';data++){
		temp=*data;
		if (temp==find){
			*data=replace;
		putchar(*data);
		}else{
		putchar(*data);
		}
	}
}
int main(){
	char kata[256];
	char cari;
	char ganti;
	printf("masukkan sebuah string: ");
	scanf(" %[^\n]",kata);
	getchar();
	printf("huruf yang ingin diganti: ");
	scanf("%c",&cari);
	getchar();
	printf("menjadi huruf: ");
	scanf("%c",&ganti);
	
	replace(kata, cari, ganti);
	printf("\n\n");
	//printf("output: %s",kata);
	
}

