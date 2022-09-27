#include <stdio.h>
 
int main() {
 
    int n,i,resul;

    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(i%2==0){
            resul = i *i;
            printf("%d^2 = %d\n",i,resul);
        }
    }
 
    return 0;
}