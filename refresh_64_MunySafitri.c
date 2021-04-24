ref#include<stdio.h>
int main(){
	char a[30];
	
	printf("masukkan sebuah kalimat: ");
	scanf("%[^\n]s",&a);
	printf("%s", a);
	//printf("lab pemograman A");
	return 0;
}
