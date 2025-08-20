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