/*  Aluno: Matheus Bezerra Domingos
    Data: 30/05/2024
    Obj: leia 15 valores e coloque no vetor B sendo o seu valor ao quadrado
*/


#include <stdio.h>

void main(){
    
    //Declarando variaveis
    int x;
    int vetA[15];
    int vetB[15];
    
    //Digite os valores
    printf("Digite os valores\n");
    for(x=0; x<15; x++){
        printf("Digite o %d valor..: ", x+1);
        scanf("%d",&vetA[x]);
    }
    printf("\n\n");
    printf("Os numeros do vetor de A são: \n");
    for(x=0; x<15; x++){
        printf("%d\t", vetA[x]);
    }
    
    printf("\n\n");
    printf("Os numeros do vetor de B são: \n");
    for(x=0; x<15; x++){
        printf("%d\t", vetA[x] * vetA[x]);
    }
   
    
}

