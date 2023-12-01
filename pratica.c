// ======== 3. Identifique os erros de compilacao que seriam detectados no seguinte programa se eles existirem: ========= //
# include < stdio .h >
int main ( ) {
int N_ant , N_prox , N , N_atual
N_ant = N_atual =1;
for( i =1 ,i <= N , i ++) {
N_prox = N_ant + N_atual ;
N_ant = N_atual ;
N_atual = N_prox ;
printf ("Fim do laco !\n") ;
return
}
// o final da declaração das variaveis sem ;  no final
// a variavel i dentro do for não foi declarada 
// dentr do for falta ; entre uma declaração e outra
// o return sem retorno algum, dentro do laço for e sem ;


// ==== 4. Escreva uma fun¸c˜ao que receba dois numeros positivos por parametro e retorne a soma dos N numeros inteiros existentes entre eles. ==== //
#include<stdio.h>
    int soma_positivos(int num1, int num2){
        return num1 + num2;
    };

    int main(){

        int num1, num2;

        printf("informe um numero positivo:\n");
        scanf("%i",&num1);

        printf("informe outro numero positivo:\n");
        scanf("%i",&num2);

        printf("resultado:%i", soma_positivos(num1, num2));

        return 0;
    }


// ================= 5. Qual a saıda do seguinte programa? =================== //
#include <stdio.h>
int main( ){
    int i ;
        
    for (i = 1; i <= 100; i *= 100){
        if(i == 30){
        break;
}
    else{
        printf("%2d\n" ,2* i);
}
}
    printf("Fim do laco!\n");
return 0;
}
// a variavel i é inicializada na posição 1
// ela é comparada com 100; se é menor ou iagual a 100 e a variavel i é menor então a condição é verdadeira
// o loop é feito ate i ser menor ou igual a 100
// o if é ignorado porque a condição não é verdadeira
// cai dentro do else e a variavel i que vale 100 é multiplicada por 2
// assim a saida é 200  
