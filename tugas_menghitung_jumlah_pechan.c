#include<stdio.h>
int main(){
	//int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
	int i;
	int jumlah_kertas[10];
	int jumlah_koin[10];
	int total_kertas=0;
	int total_koin=0;
	int total_semua=0;
	int sum_kertas=0;
	int sum_koin=0;
	int nominal[10]={500000, 100000, 50000, 20000, 10000, 5000, 2000, 1000};
	//printf("%.3f", nominal[5]);
	int satuan[7]={500,200,100,50,10,5,1};
	//printf("%i",satuan[2]);
	for(i=0;i<8;i++){
		printf("masukkan jumlah uang kertas bernilai %i  : ",nominal[i]);
		scanf("%d",&jumlah_kertas[i]);
	}for(i=0;i<7;i++){
		printf("masukkan jumlah uang kertas bernilai %i  : ",satuan[i]);
		scanf("%d",&jumlah_koin[i]);
	}
	
	/*
	printf("masukkan jumlah uang kertas yang bernilai 500.000: ");
	scanf("%i",&a);
	printf("masukkan jumlah uang kertas yang bernilai 100.000: ");
	scanf("%i",&b);
	printf("masukkan jumlah uang kertas yang bernilai 50.000: ");
	scanf("%i",&c);
	printf("masukkan jumlah uang kertas yang bernilai 20.000: ");
	scanf("%i",&d);  
	printf("masukkan jumlah uang kertas yang bernilai 10.000: ");
	scanf("%i",&e);
	printf("masukkan jumlah uang kertas yang bernilai 5.000: ");
	scanf()*/
	printf("\n-----------------------------------------------\n");
	printf("Pecahan \t\t Jumlah\n");
	printf("-----------------------------------------------\n");
	for(i=0;i<8;i++){
		printf("%7i \t\t %-3i\n",nominal[i],jumlah_kertas[i]);//untukleft 
		total_kertas=nominal[i] * jumlah_kertas[i];
		sum_kertas+=total_kertas;
		//printf("\n total kertas%i\n",sum_kertas);
	}for(i=0;i<7;i++){
		printf("%7d \t\t %-3i\n",satuan[i],jumlah_koin[i]);
		total_koin=satuan[i] *jumlah_koin[i];
		sum_koin+=total_koin;
		//printf("\n total koin %i\n",sum_koin);
	}
	//printf("\n total kertas%i\n",total_kertas);
	//printf("\n total koin %i\n",total_koin);
	total_semua=sum_kertas+sum_koin;
	printf("jumlah uang %i",total_semua);
}

