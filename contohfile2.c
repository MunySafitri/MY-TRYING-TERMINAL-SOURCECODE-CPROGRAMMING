#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
int main (void){
 int c;
 FILE *fp;
 char *filename = "database1/data.txt";
 char *mode = "r";

 char kalimat[1024];
 char *pc = kalimat;
 
/*
 if((fp = fopen(filename, mode))==NULL){
   printf("Error reading file...\n");
   return EXIT_FAILURE;
}
*/
 
 fp = fopen(filename, mode);
 if(fp==NULL){
   printf("Error reading file...\n");
   return EXIT_FAILURE;
 }
 
 while((c=fgetc(fp)) != EOF){
   *pc = c;
   pc++;
 }

 *pc = '\0';

 fclose(fp);

 printf("Isi array kalimat = %s\n",kalimat);

  
 return EXIT_SUCCESS;
}


