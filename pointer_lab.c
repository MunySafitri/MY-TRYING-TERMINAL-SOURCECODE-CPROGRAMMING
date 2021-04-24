#include<stdio.h>
//#include<string.h>
int main(){
	char nama[30],huruf,baru;
	int i;
	char *a;
	printf("masukkan nama; ");
	scanf(" %[^\n]",nama);
	a=nama;
	printf("huruf yang ingin diubah: ");
	getchar();
	scanf("%c",&huruf);
	printf("menjadi: ");
	getchar();
	scanf("%c",&baru);
	
	
	while(*a++ != '\0'){
		if (*a ==huruf){
			*a=baru;
		}
	}printf("Nama yang diubah: %s\n",nama);
	return 0;	
}
