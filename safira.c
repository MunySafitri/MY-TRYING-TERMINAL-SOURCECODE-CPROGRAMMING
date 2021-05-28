//tugas 1 selesai
#include <stdio.h>
#include<stdlib.h>
void pengurutan (int arr[], int n){
  int i, j, tmp;
  for(i = 0; i < n; i++){
    for(j=0; j < n-i-1; j ++){
      if(arr[j] > arr[j+1]){
        tmp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = tmp;
      }
    }
  }
}
int main() {
  int nilai[1000],n;
  printf("Masukkan banyak elemen: ");
  scanf("%d", &n);
  for(int i = 0; i < n; i++){
      nilai[i]=rand();  
  }
  pengurutan(nilai, n);
  printf("Hasil pengurutan sebagai berikut:\n");
  for(int i = 0; i < n; i++){
    printf("%d ", nilai[i]);
  }
  printf("\n");
}
