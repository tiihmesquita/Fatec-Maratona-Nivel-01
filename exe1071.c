#include <stdio.h>

int main() {
    
int cont,n1,n2,temp,soma;
    while(scanf("%d%d",&n1,&n2)==2){
        soma=0;
        if(n1>n2){temp=n1;
            n1=n2;
            n2=temp;
        }
        if(n1%2!=0){for(cont=n1+2;cont<n2;cont++){
            if(cont%2!=0)
                soma+=cont;
            }
        }
        else{for(cont=n1+1;cont<n2;cont++){
            if(cont%2!=0)
                soma+=cont;
            }
        }
        printf("%d\n",soma);
    }

    return 0;
}