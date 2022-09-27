#include <stdio.h>
 
int main() {
    
    int i,j,x;
    
    for(i=1;i<10;i+=2){
        j=8;
        for(x=0;x<3;x++){
            j-=1;
            printf("I=%d J=%d\n",i,j);
        }
        
    }
 
    return 0;
}