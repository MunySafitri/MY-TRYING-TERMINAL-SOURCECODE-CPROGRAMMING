#include<stdio.h>
int main(){
	float a,b,c;
	int faltorial(int);
	int faktorial(int num) {
  		if(num == 0){
    	return 1;
  		}
    return num * faktorial(num-1);
	}
	int pilih;
	printf("======= Kalkulator Sederhana =======");
	do{
	
	printf("\nMenu : \n1. Tambah\n2. Kurang\n3. Bagi\n4. Kali\n5. Faktorial\n6. Modulus\n7. Keluar");
	printf("\nmasukkan pilihan anda: ");
	scanf("%i",&pilih);
	switch(pilih){
		case 1:
			printf("## Operasi Penambahan\n");
			printf("Masukkan Operan 1= ");
			scanf("%f",&a);
			printf("Masukkan Operan 2= ");
			scanf("%f",&b);
			printf("hasil penambahan= %.f\n",a+b);
			continue;
		case 2:
			printf("## Operasi Pengurangan\n");
			printf("Masukkan Operan 1= ");
			scanf("%f",&a);
			printf("Masukkan Operan 2= ");
			scanf("%f",&b);
			printf("hasil pengurangan= %.f\n",a-b);
			continue;
		case 3:
			printf("## Operasi Pembagian\n");
			printf("Masukkan Operan 1= ");
			scanf("%f",&a);
			printf("Masukkan Operan 2= ");
			scanf("%f",&b);
			printf("hasil pembagian= %.2f\n",a/b);
			continue;	
		case 4:
			printf("## Operasi Perkalian\n");
			printf("Masukkan Operan 1= ");
			scanf("%f",&a);
			printf("Masukkan Operan 2= ");
			scanf("%f",&b);
			printf("hasil perkalian= %.f\n",a*b);
			continue;
		case 5:
			printf("## Operasi faktorial\n");
			printf("Masukkan Operan 1= ");
			scanf("%f",&a);
			c=faktorial(a);
			printf("hasil Faktorial= %.f\n",c);
			continue;
		case 6:
			printf("## Operasi modulus\n");
			printf("Masukkan Operan 1= ");
			scanf("%f",&a);
			printf("Masukkan Operan 2= ");
			scanf("%f",&b);
			int c = (int)a%(int)b;
			printf("hasil modulus= %.d\n",c);
			//printf("hasil pembagian= %.f",c);
			continue;
		case 7:
			printf("====PROGRAM BERAKHIR,TERIMAKASIH==== \n");
			break;	
	}
}while(pilih>0&&pilih<7);			

	return 0;
}
