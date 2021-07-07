#include<stdio.h>
#include<windows.h>
#include<conio.h>

int i,j;
char map[20][20];

char player= 'O';
char player2= 'W';

int x =18, y=2;
int x2 =18, y2=6;
char walk;

void generateMap(){
	for(i=0;i<20;i++){
		for(j=0;j<20;j++){
			map[i][j] = ' ';
		}
	}
	map[x][y]= player;
	map[x2][y2]= player2;
} 


void printMap(){
	for(i=0;i<20;i++){
		for(j=0;j<20;j++){
			printf("%c",map[i][j]);
		}
		printf("\n");
	}
}

//x sebagai vertikal
//y sebagai horixontal
int main(){
	do{
		system("cls");
		generateMap();
		printMap();
		walk =getch();
		switch(walk){
			case 'o':
				if(map[x-1][y] ==' '){
					x--;
					//map[x+1][y]== ' ';
					map[x][y]=player;
				}
				continue;
			case 'w':
				if(map[x2-1][y2] ==' '){
					x2--;
					map[x2][y2]=player2;
				}
		}	
	}while(y<200);
		
	return 0;
}
