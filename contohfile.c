#include <stdio.h>
#include <stdlib.h>


int main(){

   FILE *fi;

   fi = fopen("/home/tfa/mycoba/mylatih4.txt","a");

   if(fi==NULL){
     printf("Error, can't open file!!\n");
   }
   else{
     printf("File dapat diakses dan dibuka\n");
   }

   return EXIT_SUCCESS;
}

