#include <stdio.h>
 
int main() {
    int positivo=0,i;

    float vet[5],media=0.0;

    for(i=0;i<=5;i++){
        
    scanf("%f",&vet[i]);
    
    if(vet[i] > 0){
        positivo +=1;
        media +=vet[i];
    }
    media = media/positivo;
    printf("%d valores positivos\n",positivo );
    printf("%.1f\n",media);
 
    return 0;
}