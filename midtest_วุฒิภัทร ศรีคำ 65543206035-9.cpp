#include <stdio.h>
#include <string.h>

struct person {
        char name[100] ;
        float salary ;
        int duration ;
};

struct person p[100];

int check_worker ( char check , int a ) {
    char name[100] ;
    switch ( check ) {
        case 'y' :
            getchar() ;
            printf ( "Employee Name : " ) ;
            gets(p[a].name);
            printf ( "Salary (Bath/Month) : " ) ;
            scanf ( "%f" , &p[a].salary ) ;
            printf ( "Duration (Year) : " ) ;
            scanf ( "%d" , &p[a].duration ) ;
            break ;
        case 'n' :
            return 0;
        default :
            getchar();
            printf ( "Employee Name : " ) ;
            gets(p[a].name);
            printf ( "Salary (Bath/Month) : " ) ;
            scanf ( "%f" , &p[a].salary ) ;
            printf ( "Duration (Year) : " ) ;
            scanf ( "%d" , &p[a].duration ) ;
            break ;
    }//END SWITCHCASE
}//END FUCNTION

void avgpayment(int worker){
    worker = worker - 1 ;
    float avg , payment = 0 ;
    int i = 0 ;
    
    while( i <= worker ) {
        payment = p[i].salary + payment ;
        i++;
    }//END WHILE
    avg = payment / worker ;
    printf ( "Average of Salary : %.2f Bath \n", avg ) ;
    printf ( "Payment of every month : %.2f Bath \n", payment ) ;
    printf ( "** Most Salary in this business ** \n" ) ;
}//END FUCNTION

void mostduration(int worker){
    worker = worker - 1 ;
    float per_years[worker] ;
    int i = 0 ;

    while( i <= worker ){
        per_years[i] = p[i].salary * (p[i].duration) ;
        i++ ;
    }//END WHILE

    int max = per_years[0] ;
    int iworker = 0 ;
    int m = 0 ;

    while (m <= worker) {
        int check_max = per_years[m] > max ;
        switch (check_max) {
        case 1:
			max = per_years[m] ;
			iworker = m ;
			m++ ;
		    break ;
		case 0 :
			m++ ;
			break ;
        }//END SWITCHCASE
    }//END WHILE
    printf ( "Name : %s (%.d Years)\n", p[iworker].name , p[iworker].duration ) ;
    printf ( "Salary : %.2f Bath \n", p[iworker].salary ) ;
}//END FUCNTION

int main() {
    int worker = 0 ;
    int yn = 1 ;
    char check ;
    while ( yn ) {
        printf ( "Do you want to Enter Employee Information? (yes/no) : " ) ;
        scanf ( " %c", &check ) ;
        yn = check_worker( check , worker ) ;
        worker++ ;
    }//END WHILE
    avgpayment(worker) ;
    mostduration(worker) ;
}
