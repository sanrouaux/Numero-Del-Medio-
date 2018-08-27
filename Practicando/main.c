#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numUno;
    int numDos;
    int numTres;
    int maximo;
    int minimo;
    int numeroMedio;


    printf("Ingrese el primer numero:\n");
    scanf("%d",&numUno);

    maximo=numUno;
    minimo=numUno;

    printf("Ingrese el segundo numero:\n");
    scanf("%d",&numDos);

    if(numDos>maximo){
        maximo=numDos;
    } else {
        if(numDos<minimo){
            minimo=numDos;
        }
    }

    printf("Ingrese el tercer numero:\n");
    scanf("%d",&numTres);

     if(numTres>maximo){
        maximo=numTres;
    } else {
        if(numTres<minimo){
            minimo=numTres;
        }
    }



    return 0;
}
