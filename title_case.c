#include <stdio.h>
#include <string.h>

int main(){
	int i; //Deklarasi variabel bertipe int
	char string[255]; //Deklarasi array bertipe char

	printf("\t\t==* Program Titlecase *==\n");
	printf("\nMasukkan sebuah Kalimat: ");
	scanf("%[^\n]", string);

	//Fungsi yang melakukan pengecekan apakah huruf awal dan akhir suatu kalimat itu adalah huruf besar atau huruf kecil, 
	//jika kecil maka akan dirubah menjadi huruf besar dengan menggunakan statement condition for
	for (i=0; string[i]!='\0'; i++){
		if(i==0) {
			if(string[i]>='a' && string[i]<='z'){
			string[i] -= 32;
			continue;
			}else if(string[i]>='A'&& string[i]<='Z'){
				continue;	
			}
		} if(string[i]==' '){
			if (string[i+1]>='a' && string[i+1]<='z'){
				string[i+1]-=32;
			i++;
			}else if(string[i+1]>='A'&& string[i+1]<='Z'){
				i++;	
			}
		} else {
			if(string[i]>='A' && string[i]<='Z'){
				string[i] += 32;
				}
		}
	} 
	printf("Hasil Dari title case: %s\n\n", string);
	return 0;
}
