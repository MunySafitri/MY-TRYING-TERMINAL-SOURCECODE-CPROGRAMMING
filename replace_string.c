#include <stdio.h>
/* prototype fungsi */
char *ganti_karakter(char*, char, char);
char *ganti_karakter(char *data, char find, char replace){
while(*data !='\0'){
  /* fungsi mengubah string */
  if (*data==find){
  	*data=replace;
  }
  data++;
  }
}
int main(){
  char string[255], cari, timpa;
  //meminta user masukan inputan
  printf("\nMasukkan sebuah string: ");
  scanf("%[^\n]", string);
  printf("Karakter yang dicari: ");
  getchar();
  
  scanf("%c", &cari);
  printf("Karakter pengganti: ");
  getchar();
  
  scanf("%c", &timpa);
  *ganti_karakter(string,cari, timpa);//memanggil fungsi
  //mencetak hasil substitusi
  printf("\nstring hasil substitusi %s\n\n", string);
  return 0;
} 

