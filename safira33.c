#include<stdio.h>
#include<stdlib.h>
int main()
{
    // inisialisasi variabel
    int N,bil,prima;    
    // judul program
    printf("======================================================\n"
           "        PROGRAM MENAMPILKAN N BILANGAN PRIMA \n"
           "    ( Author : Aristiawan [rowcode.blogspot.com] )         \n"
           "======================================================\n\n");    
    printf("Masukkan banyak bilangan prima : ");
    scanf("%d",&N);   
    for(int cetak = 0, bil = 0 ; cetak < N ; bil++ )
    {            
        if(bil == 2 || bil == 3 || bil == 5 || bil == 7)
        {
            prima = 1;            
        }
        else
        {        
            if(bil % 2 == 0 || bil == 1)
            {
                prima = 0;
            }
            else
            {
                if(bil % 3 == 0)
                {
                    prima = 0;
                }
                else if(bil % 5 == 0)
                {
                    prima = 0;
                }
                else if(bil % 7 == 0)
                {
                    prima = 0;
                }
                else 
                {
                    prima = 1;
                }    
            }        
        }  
        // untuk menampilkan bilangan prima pada layar monitor
        if(prima == 1)
        {
            cetak++; // untuk mengetahui banyak bilangan prima yang dicetak
            printf("%d ",bil);
        }    
    }
}