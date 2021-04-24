#include<stdio.h>
int main(){
	int i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y;
	int jumlah=0,jumlah1=0,jumlah2=0,jumlah3=0,jumlah4=0,jumlah5=0,jumlah6=0,jumlah7=0,jumlah8=0,jumlah9=0,jumlah10=0,jumlah11=0,jumlah12=0,jumlah13=0,jumlah14=0,jumlah15=0;
	int hasil=0,hasil1=0,hasil2=0,hasil3=0,hasil4=0,hasil5=0,hasil6=0,hasil7=0,hasil8=0,hasil9=0,hasil10=0,hasil11=0,hasil12=0,hasil13=0,hasil14=0,hasil15=0;
	int sisa=0,sisa1=0,sisa2=0,sisa3=0,sisa4=0,sisa5=0,sisa6=0,sisa7=0,sisa8=0,sisa9=0,sisa10=0,sisa11=0,sisa12=0,sisa13=0,sisa14=0,sisa15=0;
	int input;
	int nominal[10]={500000, 100000, 50000, 20000, 10000, 5000, 2000, 1000};
	int satuan[7]={500,200,100,50,10,5,1};
	
	int tot_jumlah_kertas[8];
	for(i=0;i<8;i++){
		tot_jumlah_kertas[i]=0;
	}
	int tot_jumlah_koin[6];
	for(i=0;i<7;i++){
		tot_jumlah_koin[i]=0;
	}
	int total;
	int tot_uang;
	int tot_semua;
	
	printf("Masukkan jumlah uang: ");
	scanf("%i",&input);
	//pada saat 500000
	for(i=input;i>=500000;i-=500000){
		hasil+=i;
		sisa=input-500000;
		jumlah+=1;
		input=sisa;
		tot_jumlah_kertas[0]=jumlah;
		//printf("%i nilai 500k\n",jumlah);
		//printf("totjumlahkeryas: %i",tot_jumlah_kertas[0]);
		//printf("jumlah: %i",tot_jumlah_kertas[0]);
		//printf("jumlah uang %i\n",sisa);
		/*if(sisa<500000){
			tot_jumlah_kertas[0]=0;
		}*/
	}
	/*if(input==0){
		tot_jumlah_kertas[0]=0;
	}*/
	//tot_jumlah[0]=jumlah;
	//printf("%i",tot_jumlah_kertas[0]);
	//printf("%i",jumlah);
	
	
	//-printf("%i \n",tot_jumlah[0]);
	//printf("%i \n",jumlah);
	//pada saat 100k
	for(j=sisa;j>=100000;j-=100000){
		hasil1+=j;
		sisa1=sisa-100000;
		sisa=sisa1;
		
		
		jumlah1=jumlah1+1;
		tot_jumlah_kertas[1]=jumlah1;
		
		//printf("sisa1: %i",jumlah1);
		//printf("nilai 100k %i \n",jumlah1);
		//tot_jumlah[1]=jumlah1;
		//printf("sisa uang %i \n",sisa1);
		
		/*if(sisa1==0){
			tot_jumlah_kertas[1]=0;
		}
		printf("jumlah 100k: %i",jumlah1);	*/
	}
	/*if(sisa==0){
		tot_jumlah_kertas[1]=0;
	}*/
	//printf("sisa tadi %i",sisa);
	//printf("jumlah uang 100000 adalah %i\n",tot_jumlah[1]);
	//jumlah1-=1;
	//printf("%i \n",sisa1);
	//printf("%i\n",jumlah1);
	//pada saat 50k
	for(k=sisa;k>=50000;k-=50000){
		hasil2+=k;
		sisa2=sisa-50000;
		sisa=sisa2;
		jumlah2++;
		tot_jumlah_kertas[2]=jumlah2;
		
		//printf("sisa2: %i",sisa);
		//printf("nilai k: %i",k);
		//printf("nilai 50k %i \n",jumlah2);
		//tot_jumlah[2]=jumlah2;
		/*if(sisa==0){
			tot_jumlah_kertas[2]=0;
		}*/
	
	}//printf("JUMLAH UANG 50000 %i",tot_jumlah_kertas[2]);
	//jumlah2-=1;
	//pada saat 20k
	//printf("%i adalah jumlag index 1 dan jumlah1 %i",tot_jumlah[1],jumlah1);
	/*if(sisa==0){
		tot_jumlah_kertas[2]=0;
	}*/
	for(j=sisa;j>=20000;j-=20000){
		hasil3+=j;
		sisa3=sisa-20000;
		sisa=sisa3;
		jumlah3++;
		tot_jumlah_kertas[3]=jumlah3;
		
		//printf("nilai 20k %i \n",jumlah3);
		//tot_jumlah[3]=jumlah3;
		/*if(sisa==0){
			tot_jumlah_kertas[3]=0;
		}
		*/
	}
	/*if(sisa==0){
		tot_jumlah_kertas[3]=0;
	}*/
	//jumlah3-=1;
	for(k=sisa;k>=10000;k-=10000){
		hasil4+=k;
		sisa4=sisa-10000;
		sisa=sisa4;
		jumlah4++;
		tot_jumlah_kertas[4]=jumlah4;
		//printf("nilai 10k %i \n",jumlah4);
		//tot_jumlah[4]=jumlah4;
		/*if(sisa==0){
			break;
		}*/
	}
	/*if(sisa==0){
		tot_jumlah_kertas[4]=0;
	}*/
	//printf("jumlah 10k: %i",tot_jumlah_kertas[4]);
	for(l=0;l<sisa;l+=5000){
		hasil5+=l;
		sisa5=sisa-5000;
		sisa=sisa5;
		jumlah5++;
		tot_jumlah_kertas[5]=jumlah5;
		//printf("nilai 5k %i \n",jumlah5);
		//tot_jumlah[5]=jumlah5;
		/*if(sisa==0){
			break;
		}*/
	}
	/*if(sisa==0){
		tot_jumlah_kertas[5]=0;
	}*/
	//printf("%i",sisa5);
	for(m=sisa;m>=2000;m-=2000){
		hasil6+=m;
		sisa6=sisa-2000;
		sisa=sisa6;
		jumlah6++;
		tot_jumlah_kertas[6]=jumlah6;
		//printf("nilai 2k %i \n",jumlah6);
		//tot_jumlah[6]=jumlah6;
		/*if(sisa==0){
			break;
		}*/
		
	}/*if(sisa==0){
		tot_jumlah_kertas[6]=0;
	}*/
	/*printf("hasil2 %i dan sisa2 %i",hasil2,sisa2);
	printf("hasil3 %i dan sisa3 %i",hasil3,sisa3);
	printf("hasil4 %i dan sisa4 %i",hasil4,sisa4);
	printf("hasil5 %i dan sisa5 %i",hasil5,sisa5);
	printf("hasil6 %i dan sisa6 %i",hasil6,sisa6);*/
	for(n=sisa;n>=1000;n+=1000){
		hasil7+=n;
		sisa7=sisa-1000;
		sisa=sisa7;
		jumlah7++;
		tot_jumlah_kertas[7]=jumlah7;
		//tot_jumlah[7]=jumlah7;
		/*if(sisa==0){
			break;
		}*/
	}/*if(sisa==0){
		tot_jumlah_kertas[7]=0;
	}*/
	//jumlah4-=1;
	//printf("%i \n",hasil7);
	//printf("%i",sisa7);
	for(o=sisa;o>=500;o-=500){
		hasil8+=o;
		sisa8=sisa-500;
		sisa=sisa8;
		jumlah8++;
		tot_jumlah_koin[0]=jumlah8;
		//printf("jumlah koin 500: %i",tot_jumlah_koin[0]);
		//tot_jumlah[8]=jumlah8;
		/*if(sisa==0){
			break;
		}*/
		
	}/*if(sisa==0){
		tot_jumlah_koin[0]=0;
	}*/
	for(p=200;p<=sisa;o+=200){
		hasil9+=p;
		sisa9=sisa-200;
		sisa=sisa9;
		jumlah9++;
		tot_jumlah_koin[1]=jumlah9;
		//tot_jumlah[9]=jumlah9;
		/*if(sisa==0){
			break;
		}*/
	}
	/*if(sisa==0){
		tot_jumlah_koin[1]=0;
	}*/
	for(q=100;q<=sisa;q+=100){
		hasil10+=q;
		sisa10=sisa-100;
		jumlah10++;
		sisa=sisa10;
		tot_jumlah_koin[2]=jumlah10;
		//tot_jumlah[10]=jumlah10;
		/*if(sisa==0){
			break;
		}*/
		
	}
	for(r=sisa;r>=50;r-=50){
		hasil11+=r;
		sisa11=sisa-50;
		jumlah11++;
		sisa=sisa11;
		tot_jumlah_koin[3]=jumlah11;
		//tot_jumlah[11]=jumlah11;
		/*if(sisa==0){
			break;
		}*/
	}
	for(s=sisa;s>=10;s-=10){
		hasil12+=s;
		sisa12=sisa-10;
		jumlah12++;
		sisa=sisa12;
		tot_jumlah_koin[4]=jumlah12;
		//tot_jumlah[12]=jumlah12;
		/*if(sisa==0){
			break;
		}*/
	}
	
	for(t=0;t<sisa;t+=5){
		hasil+=t;
		sisa13=sisa-5;
		jumlah13++;
		sisa=sisa13;
		tot_jumlah_koin[5]=jumlah13;
		//tot_jumlah[13]=jumlah13;
		/*if(sisa==0){
		break;
		}*/
		
	}
	for(u=0;u<sisa;u+=1){
		hasil14+=u;
		sisa14=sisa-1;
		jumlah14++;
		sisa=sisa14;
		tot_jumlah_koin[6]=jumlah14;
		//tot_jumlah[14]=jumlah14;
		/*if(sisa==0){
			break;
		}*/
	}
	/*for(v=sisa14;v<=sisa14;v+=1){
		hasil15+=v;
		sisa14=sisa14-1;
		jumlah15++;
		tot_jumlah[15]=jumlah15;
		if(sisa==0){
			break;
		}
		
	}*/
	//total=hasil1-hasil2-hasil3-hasil4-hasil5-hasil6-hasil7-hasil8-hasil9-hasil10-hasil11-hasil12-hasil13-hasil14;

	/*if(total==input){
		
	}*/
	
	printf("\n-----------------------------------------------\n");
	printf("Pecahan \t\t Jumlah\n");
	printf("-----------------------------------------------\n");
	
	for(i=0;i<8;i++){
		printf("%7d \t\t %i \n",nominal[i],tot_jumlah_kertas[i]);
		/*if(tot_jumlah_kertas[i]==0){
			tot
		}*/
		//printf("%i",i);
	}
	for(i=0;i<7;i++){
		printf("%7d \t\t %i \n",satuan[i],tot_jumlah_koin[i]);
	}
	
	
	//printf("sisa nya: %i",sisa8);
	//printf("%i",tot_jumlah[15]);
	return 0;
}
