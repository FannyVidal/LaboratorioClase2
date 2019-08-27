#include <stdio.h>
#include <stdlib.h>


//Prototipo
int sumarNumeros(int a, int b);


int main()
{
    //llamada
    int numero1 = 8;
    int numero2 = 9;
    int total;

    total = sumarNumeros(numero1, numero2);

    printf("la suma es:%d",total);

    return 0;
}


//Desarrollo
int sumarNumeros(int a, int b){

    int resultado;

    resultado = a + b;

    return resultado;
}





