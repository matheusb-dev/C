/*  Aluno: Matheus Bezerra Domingos
    Data: 30/05/2024
    Obj: leia 10 valores e fale quais são primos
*/


#include <stdio.h>

void main(){
    
    //Declarando variaveis
    int num[10];
    int x;
    int numP;
    int t;
    
    //Digite os valores
    printf("Digite os valores\n");
    for(x=0; x<10; x++){
        printf("Digite o %d valor..: ", x+1);
        scanf("%d",&num[x]);
    }
    printf("\n\n");
    printf("Verificando se os numeros são primos\n");
    //Verificação
    for(x=0; x<10; x++){
        numP = 1;
        if(num[x] <= 1){
            numP = 0;
        }else{
            for(t=2; t <= num[x] / 2; t++){
                if(num[x] % t == 0){
                    numP = 0;
                    break;
                }
            }
        }
        if(numP){
            printf("%d\n", num[x]);
        }
    }
    
}

