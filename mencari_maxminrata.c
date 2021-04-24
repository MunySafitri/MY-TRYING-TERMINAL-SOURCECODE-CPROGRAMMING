#include<stdio.h>
#include<stdlib.h>
float min(float[],int);//mengenalkan fungsi pada komputer yang akan ditemukan nanti
float max(float[],int);

float max(float n1[], int N){//fungsi untuk menentukan nilai maks
	float maks;
	maks=n1[0];
	int i;
	for( i=0;i<N;i++){
		if(n1[i]>maks)
			maks=n1[i];		
	}
	return maks;
}
float min(float n2[], int M){//fungsi untuk mennetukan nilai minimum
	float min;
	min=n2[0];
	int i;
	for( i=0;i<M;i++){
		if(n2[i]<min)
			min=n2[i];
				
	}
	return min;
}
int main(){

	int i=0,j,ulangi=0;
	float data[80],jumlah=0,rata_rata,n;
	printf("jumlah data (n): ");
	scanf("%f",&n);
	if (n<=0 || n>80){
		printf("nomor yang anda masukkan keliru\n");
		do{
			if (ulangi==3)//diberi kesempatan 3x
				break;
			printf("masukkan data (n) 0<n<=80: ");
			scanf("%f",&n);
			ulangi++;
		}while(n<=0 || n>80);
	}
		for( j=0;j<n;j++){
			if (n>=0 && n<80){
			
			printf("data ke %d: ",j+1);
			scanf("%f",&data[j]);
			jumlah=jumlah+data[j];
			
			}
		}
		if(n>=0 && n<80){
		float maksimum= max(data,n);
		float minimum= min(data,n);
		rata_rata=(float)jumlah/n;
		printf("nilai maximum adalah: %.2f\n",maksimum);
		printf("nilai minimum adalah: %.2f\n",minimum);
		printf("nilai rata-rata adalah: %.2f\n",rata_rata);
		getchar();
	}else{
		printf("\nTerimakasih telah menggunakan aplikasi ini!");
	}
	return 0;
}

