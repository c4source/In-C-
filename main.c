/*  soma em C */ 

#include <stdio.h>
   int main(){
    float p1, p2, media; 
    printf("Digite A primeira nota: ");
    scanf("%f", &p1);
    printf("Digte a segunda nota: ");
    scanf("%f", &p2);
    
    media = ( p1 + p2 ) / 2.0; 
    printf("A media do aluno e %.2f\n", media);
    
    return 0; 
   }

/* area de um circulo */

#include <stdio.h>
#include <math.h>

    int main(){
        double raio, resultado; 
        double pi = 3.14159; 

        printf("Qual é o raio do circulo? "); 
        scanf("%lf", &raio);
        resultado = pi * pow(raio, 2.0); 
        printf("A area do circulo e: %.2f\n", resultado);
        return 0;
    }

