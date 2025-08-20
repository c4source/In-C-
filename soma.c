#include <stdio.h>
    int main (){
        float n1, n2, resultado;
        printf("Digite um numero para somar: ");
        scanf("%f", &n1);
        printf("Digite o segundo numero: ");
        scanf("%f", &n2);

        resultado = ( n1 + n2 );

        printf("A soma dos numeros e: %.2f\n", resultado);
        
        return 0; 

    }