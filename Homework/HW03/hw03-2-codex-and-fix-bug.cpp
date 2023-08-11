//TODO: #9 Fix bug and arrange code in CODEX pattern.
#include <stdio.h>  
#include <stdbool.h> 

int main() {
    float a, b = 3 ;
    bool _1 = false ; 
   
    printf( "%d ", _1) ;
    int i = 0 ;
    
    if ( _1 != false) { 
        printf( "ok") ;
    } else {
        while ( i <= 5) {
            printf( "not-okay-%d ", ++i) ;
        }
        
        for ( i = 3; i < 10; i += 1) {
            if ( i % 2 == (!_1 ? 1 : 2)) { 
                printf( "see see") ;
            } else {
                printf( "haha") ;
            }//end else
        }//end for
    }//end else
    
    return 0;
}//end main fuction