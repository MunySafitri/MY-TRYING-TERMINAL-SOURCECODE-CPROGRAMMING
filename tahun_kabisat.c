#include<stdio.h>
int main(){
	int tahun;
	
	int bulan;
	int i;
	const char *urutan[12]={"Januari","Februari","Maret","April","Mei","Juni","Juli","Agustus","September","Oktober","November","Desember"}; //untuk membuat element string
	int tanggal[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	
	printf("masukkan tahun: ");
	scanf("%i",&tahun);
	do{
	printf("masukkan bulan: ");
	scanf("%i",&bulan);
    }while(bulan>12);
	
	//syarat tahun kabisat
	if (tahun%400==0){
		printf("tahun %i adalah TAHUN KABISAT \n",tahun);	
	} else if (tahun %400 !=0){
		printf("tahun %i adalah bukan TAHUN KABISAT \n",tahun);
	}else if((tahun %400!=0 && tahun%100!=0) && tahun%4==0){
		printf("tahun %i adalah TAHUN KABISAT \n",tahun);
	}else{
		printf("tahun %i adalah bukan TAHUN KABISAT \n",tahun);
	}
	
	if(bulan==2 && tahun%4==0){
		tanggal[1]=29;
	}else if(bulan ==2 && tahun %4!=0){
		tanggal[1]=28;
	}
	
	
	printf("jumlah hari pada bulan %s tahun %i adalah %i",urutan[bulan-1],tahun,tanggal[bulan-1]);	
	return 0;	
		
	}


