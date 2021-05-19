#include <stdio.h> 
void main() 
{ 
	int i,j,roll[3],marks[3][3],total[3]={0}; 
	 
	for(i=0; i<3; i++) 
	{ 
		printf("Enter student-%d roll number: ",i+1); 
		scanf("%d",&roll[i]); 
		 
		for(j=0; j<3; j++) 
		{ 
			printf("\tEnter subject-%d marks: ",j+1); 
			scanf("%d",&marks[i][j]); 
			total[i] += marks[i][j]; 
		} 
	} 
	 
	for(i=0; i<3; i++) 
	{ 
		printf("Total marks of student-%d = %d\n",i+1,total[i]); 
	}	 
} 
