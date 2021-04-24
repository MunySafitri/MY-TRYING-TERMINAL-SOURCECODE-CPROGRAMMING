#include<stdio.h>
#include<string.h>
int main(){
	char n[20];
	int i;
	printf("masukkan nama anda: ");
	scanf("%[^\n]s",n);
	//int panjang=strlen(n);
	int panjang=sizeof(n)/sizeof(int);
	//printf("%d",panjang);
	for(i=panjang;i>=0;i--){
		printf("%c",n[i]);
	}
	return 0;
}
