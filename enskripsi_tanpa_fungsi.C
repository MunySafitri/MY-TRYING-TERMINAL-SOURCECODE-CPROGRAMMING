#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//void enkripsi_baru(char *, char *, int );
//void enkripsi_baru(char * data, char * arah, int pergeseran);
	/*	
	for(i=0;i<sizeof(string)/sizeof(int);i++){
		if(pergeseran[i]>='A' && pergeseran[i]<='Z' ){
			geser[i]=geser[i]+32;
	if (strcmp(arah,"kanan")==0){
		for(i=0;i<strlen(data);i++){
			data[i]=data[i]+besar;
		}
		
	}else if(strcmp(arah,"kiri")==0){
		for(i=0;i<strlen(data);i++){
			data[i]=data[i]-besar;
		}
	}
	
	printf("hasil enskripsi: ");
	for(i=0;i<strlen(data);i++){
			printf("%c",data[i]);
	}*/


int main(){
	char  string[255],geser[10];
	int i,besar;
	//String[255];
	printf("masukkan string: ");
	scanf(" %[^\n]",string);
	for(i=0;i<sizeof(string)/sizeof(int);i++){
		if(string[i]>='A' && string[i]<='Z' ){
			string[i]=string[i]+32;
		}	
	}
	printf("%s",string);
	getchar();
	do{
	
	printf("masukkan besar pergeseran karakter: ");
	scanf(" %d",&besar);
	getchar();
	}while(besar<0||besar>183);	
	do{
	
	printf("arah pergeseran karakter:");
	scanf(" %s",geser);
	getchar();

	for(i=0;i<strlen(geser);i++){
		if(geser[i]>='A' && geser[i]<='Z' ){
			geser[i]=geser[i]+32;
		}
		}
//		printf("%i",strcmp(geser,"kanan"));
		
    }while(strcmp(geser,"kanan")!=0 && strcmp(geser,"kiri")!=0 );
//    while(geser!="kanan");
	for(i=0;i<sizeof(string)/sizeof(int);i++){
		if(geser[i]>='A' && geser[i]<='Z' ){
			geser[i]=geser[i]+32;
		}

		
	}
//	printf("%s",geser);
//	getchar();
	
	if (strcmp(geser,"kanan")==0){
		for(i=0;i<strlen(string);i++){
			string[i]=string[i]+besar;
		}
		
	}else if(strcmp(geser,"kiri")==0){
		for(i=0;i<strlen(string);i++){
			string[i]=string[i]-besar;
		}
	}
	
	printf("hasil enskripsi: ");
	for(i=0;i<strlen(string);i++){
			printf("%c",string[i]);
	}
	
	
	
	return 0;
}

