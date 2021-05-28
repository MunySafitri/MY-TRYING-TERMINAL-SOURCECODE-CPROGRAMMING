#include <stdio.h>
#include <string.h>
int polindrome(char masukan[], int i, int j){

  int k=j/2;
  if (j==k){//jika 1==1 maka dijalankan program ini
    printf("Palindrom : Benar, kata %s merupakan polindrom\n",masukan);
    return 1;
  } else if(masukan[i] != masukan[j]){//jika ujung dan ujung tidak sama maka dijalankan program ini
    printf("Palindrom : Salah, kata %s bukan merupakan polindrom\n",masukan);
    return 0;
  } else{//jika ujung dan ujung samamaka dijalankan program ini
    return polindrome(masukan, i+1, j-1);
  }
}

int main(){
    char kata[100]; 
    printf("Masukkan sebuah kata:");
    scanf("%s", kata);
    polindrome(kata, 0, strlen(kata)-1);
}
