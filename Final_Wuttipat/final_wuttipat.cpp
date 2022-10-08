#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Employee {
	char name [100] ; //name of person
	int  y  ; //years
	int  m  ; //months
	int  d  ; //days
}typedef wk ;

int  finddata (wk [] ) ; //find data in structure
void showoutput (wk [], int ) ; //show output

int main(){
	wk ymd[100] ;
	int count  = finddata(ymd) ;
	showoutput (ymd,count) ;

}

int finddata (wk ymd[]){
	FILE *Fp ; // filedata
	
	int count = 0 ;
	int np ;
	char nps [100] ;
	Fp = fopen( "a.txt" , "r") ;
	if(Fp == NULL){
		printf("flie not found.") ;
		exit (0) ;
	}
	fscanf(Fp, "%s\t%s\t\t%s\n",nps,nps,nps) ;
	for (int i = 0; i < 100 ; i++){
		if (fscanf(Fp, "%d\t%s\t\t%d-%d-%d\n",&np,ymd[i].name, &ymd[i].y,&ymd[i].m,&ymd[i].d) != EOF ){
			count++ ;	
		}
		else {
			break ;
		}
	}
	fclose (Fp) ;
	return count ; //return back count 
}

void showoutput (wk ymd[], int count ) {
	int allday [100] ;
	int Max = 0 ;
	char *kae ;
	int Min = 999999;
	char *noom ;
	for(int i = 0 ; i < count ;i++){
		allday [i] = (2018-ymd[i].y) * 365 + (6-ymd[i].m) * 30 + (21-ymd[i].d) ;
		printf("%s %d Years, %d Months\n",ymd[i].name,allday[i]/365,(allday[i]%365)/30) ;
			
	}
	for(int a = 0 ; a < count ; a++) {
		if(allday[a] > Max){
			Max = allday [a] ;
			kae = ymd[a].name ;	
		}
		if(allday[a] < Min){
			Min = allday [a] ;
			noom = ymd[a].name ;	
		}
	}
	printf("\nMax : %s[%d Years, %d Months]\n" ,kae,Max/365,(Max%365)/30) ;//out put max 
	printf("Min : %s[%d Years, %d Months]\n", noom,Min/365,(Min%365)/30) ;//out put Min
	
}
