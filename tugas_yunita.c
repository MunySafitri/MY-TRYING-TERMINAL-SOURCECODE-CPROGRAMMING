#include <stdio.h.>
int main (){
	int year;
	int month;
	int jumlah_hari[13]={31,28,31,30,31,30,31,31,30,31,30,31};
	do{
		printf("masukkan tahun : ");
		scanf("%i", &year);	
	}while(year>9999 ||year<1000);
	do{
		printf("masukkan bulan:");
		scanf("%i", &month);
	}while(month>12);
	
	
	if(year%400==0 && year%4==0){
		printf("tahun %i adalah tahun kabisat \n", year );
	}else if(year %400!=0 ){
		printf("tahun %i bukan tahun kabisat \n", year);
	}else if(year %4==0){
		printf("tahun %i adalah tahun kabisat \n", year);
	}else if(year %100!=0){
		printf("tahun %i bukan tahun kabisat \n", year);
	}else{
		printf("tahun %i bukan tahun kabisat \n", year);
	}
	
	if(month==2 && year%4==0){
		jumlah_hari[1]=29;
	}else if(month ==2 && year %4!=0){
		jumlah_hari[1]=28;
	}
	if(month==1 ){
		printf("jumlah hari pada bulan Januari tahun %i adalah %i",year,jumlah_hari[0]);
	}else if(month ==2){
		printf("jumlah hari pada bulan Februari tahun %i adalah %i",year,jumlah_hari[1]);
	}else if(month==3){
		printf("jumlah hari pada bulan Maret tahun %i adalah %i",year,jumlah_hari[2]);
	}else if(month==4){
		printf("jumlah hari pada bulan April tahun %i adalah %i",year,jumlah_hari[3]);
	}else if(month==5){
		printf("jumlah hari pada bulan Mei tahun %i adalah %i",year,jumlah_hari[4]);
	}else if(month==6){
		printf("jumlah hari pada bulan Juni tahun %i adalah %i",year,jumlah_hari[5]);
	}else if(month==7){
		printf("jumlah hari pada bulan Juli tahun %i adalah %i",year,jumlah_hari[6]);
	}else if(month==8){
		printf("jumlah hari pada bulan Agustus tahun %i adalah %i",year,jumlah_hari[7]);
	}else if(month==9){
		printf("jumlah hari pada bulan September tahun %i adalah %i",year,jumlah_hari[8]);
	}else if(month==10){
		printf("jumlah hari pada bulan Oktober tahun %i adalah %i",year,jumlah_hari[9]);
	}else if(month==11){
		printf("jumlah hari pada bulan November tahun %i adalah %i",year,jumlah_hari[10]);
	}else if(month==12){
		printf("jumlah hari pada bulan Desember tahun %i adalah %i",year,jumlah_hari[11]);
	}

	

	
	
	
	return 0;

	
}
