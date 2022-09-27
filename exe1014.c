#include <stdio.h>
 
int main() {
 
    int x,y;
    float cachorro=4.00,salada=4.50,bacon=5.00,torrada=2.00,
    refrigerante=1.50,escolha;
    
    scanf("%i%i", &x,&y);

    switch (x)
    {
    case 1:escolha=cachorro;        
        break;
    case 2:escolha=salada;
        break;
    case 3:escolha=bacon;
        break;
    case 4:escolha=torrada;
        break;
    case 5:escolha=refrigerante;
    default:
        break;
    }

    escolha = escolha * y;

    printf("Total: R$ %.2f\n",escolha);
    
    
 
    return 0;
}