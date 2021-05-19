#include<stdio.h>
#include<stdlib.h>
#include<math.h>


int DesimalBiner()
{

	int n,i=1, k;
    int j;
    int biner[8]; //deklarasi variabel digit biner agar tidak lebih dari 8 digit

        printf("\n\t---Anda memilih program konversi Desimal ke Biner---\n\n");

	do{	
				
    	printf("Masukkan bilangan desimal : ");
        scanf("%d",&n); //membaca angka ke dalam n


		if (n<0) {	
			printf("Maaf, bilangan desimal negatif tidak dapat dikonversi dengan program ini. \n"); // jika nilai yang diinput kurang dari 0
		}

		else if (n>255){
			printf("\n\t\t---Nilai yang anda masukan berlebihan---\n");
			printf("\t---Silahkan input kembali nilai yang ingin di konversi---\n\n"); // jika nilai yang diinput lebih dari 255
		}

		else {
			while(n>0) { //jika nilai yang diinput lebih dari 0 dan kurang dari 256 maka akan diproses
        		biner[i]=n%2;
         		n=n/2;
         		i=i+1;
         		k=i;
    		}

    		printf("Nilai biner dari x : "); //nilai hasil yang akan keluar

    		for(j=k-1;j>0;j--) 
    		{
				printf("%d", biner[j]); //cetak nilai dari array ‘biner[]’
				
			}
    	}


	}while(n>255 || n<0);

}

int BinerDesimal()
{
    int num=0; // deklarasi variabel untuk bilangan desimal
    int bin; // deklarasi variabel untuk nilai biner
    int bindigit; // variabel untuk menampung digit biner individu
    int i=0; // penghitung variabel untuk menghitung pangkat 2
    
    printf("\n\t---Anda memilih program konversi Biner ke Desimal---\n\n");
    printf("Masukan bilangan biner: "); 
    scanf("%d", &bin); // Membaca angka ke dalam 'bin'

    while(bin){ // loop sampai bin bukan 0
      bindigit = bin%10;      //ekstrak digit biner tunggal
      num += bindigit*pow(2, i); 
      bin = bin/10; // bagi bilangan dengan 10 untuk mendapatkan digit biner berikutnya
      i++;  // penghitung kenaikan
    }

    printf("Bilangan Desimal: %d", num);
    return 0;
}


int DesimalOktal()
{
    int num; // variabel 'num' untuk menampung angka desimal
    int oct_arr[100]; // array untuk menampung nilai oktal
    int i=0; // counter untuk elemen array iterate / index
    
    printf("\n\t---anda memilih program konversi Desimal ke Oktal---\n\n");
    printf("Masukan bilangan Desimal: "); 
    scanf("%d", &num); // Baca angka menjadi 'num'
    
    while(num){ // ulangi sampai num bukan 0
      oct_arr[i] = num%8; // num%8 akan memberikan satu digit oktal 
      
      num = num/8; // bagi bilangan dengan 8 untuk mendapatkan digit oktal berikutnya
      
      i++;  // increment counter untuk menampung elemen array berikutnya
    }

    printf("Bilangan Oktal: ");
    while(i--){ // mengulangi array dari indeks besar ke 0
      printf("%d", oct_arr[i]); // mencetak digit oktal satu per satu
    }
    return 0;
}


int OktalDesimal()
{
    int num=0; // variabel untuk menampung angka desimal
    int oct; // variabel untuk menampung angka oktal
    int octdigit; // variabel untuk menampung digit oktal individu
    int i=0; // penghitung variabel untuk menghitung pangkat 2
    
    printf("\n\t---Anda memilih program konversi Oktal ke Desimal---\n\n");
    printf("Msukan bilangan Oktal: "); 
    scanf("%d", &oct); // Baca angka menjadi 'oct'

    while(oct){ // loop sampai bin bukan 0
      octdigit = oct%10;      // ekstrak satu digit oktal
      num += octdigit*pow(8, i); 
      oct = oct/10; // bagi bilangan dengan 10 untuk mendapatkan digit oktal berikutnya
      i++;  // increment counter
    }

    printf("Bilangan Desimal: %d", num);

    return 0;
}

int main() {

	int pilih;

	printf("\t---Ini merupakan program konversi bilangan---\n");
	printf("\t>>>Pilih menu konversi yang tersedia<<<\n");
	printf("1. Desimal ke Biner\n");
	printf("2. Biner ke Desimal\n");
	printf("3. Desimal ke Oktal\n");
	printf("4. Oktal ke Desimal\n");
	printf("\nMenu konversi yang dipilih: ");
    scanf("%i", &pilih);

    switch (pilih) {
    	case 1 :
    		DesimalBiner();
    	break;
    	case 2 :
    		BinerDesimal();
    	break;
    	case 3 :
    		DesimalOktal();
    	break;
    	case 4 :
    		OktalDesimal();
    	break;
    	default:
    		printf("\n\t---Maaf pilihan tidak tersedia---\n\n");
    	break;
    }

	return 0;

}