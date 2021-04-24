#include<stdio.h>
int main(){
	
	int i,jumlah_kertas[10],jumlah_koin[10],total_kertas=0, total_koin=0,total_semua=0,sum_kertas=0,sum_koin=0;
	int nominal[10]={500000, 100000, 50000, 20000, 10000, 5000, 2000, 1000};
	int satuan[7]={500,200,100,50,10,5,1};
	for(i=0;i<8;i++){
		printf("masukkan jumlah uang kertas bernilai %i  : ",nominal[i]);
		scanf("%d",&jumlah_kertas[i]);
	}for(i=0;i<7;i++){
		printf("masukkan jumlah uang kertas bernilai %i  : ",satuan[i]);
		scanf("%d",&jumlah_koin[i]);
	}
	printf("\n-----------------------------------------------\n");
	printf("Pecahan \t\t Jumlah\n");
	printf("-----------------------------------------------\n");
	for(i=0;i<8;i++){
		printf("%7i \t\t %-3i\n",nominal[i],jumlah_kertas[i]);//untukleft justify
		total_kertas=nominal[i] * jumlah_kertas[i];//perkalian jumlah kertas ke i dikali dengan nominal ke i
		sum_kertas+=total_kertas;//menetapkan jumlah total uang kertas
	}for(i=0;i<7;i++){
		printf("%7d \t\t %-3i\n",satuan[i],jumlah_koin[i]);
		total_koin=satuan[i] *jumlah_koin[i];////perkalian jumlah uang koin ke i dikali dengan nilai koin ke i
		sum_koin+=total_koin;// menetapkan jumlah total koin
		
	
	}

	total_semua=sum_kertas+sum_koin;//total semuanya
	printf("jumlah uang %i",total_semua);
}

