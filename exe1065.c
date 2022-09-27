#include <stdio.h>
 
int main() {
 
    int i,vet[4],cont=0;

    for(i=0;i<5;i++){

        scanf("%i", &vet[i]);

        if(vet[i]%2==0){
            cont+=1;
        }
    }
    printf("%d valores pares\n",cont);
 
    return 0;
}