// 1)

/*
#include <stdio.h>

int main()
{
    int c; 
    
    for(c = 1000; c <= 2000; c++){

        if((c % 11) == 5){
            printf("%d \n", c);
        }
    }
    return 0;
}

*/

//---------------------------------------------------------------------------------------------------------------------//

// 2)

/*
#include <stdio.h>

int main()
{
    int n, c;
    float num;
    printf("Digite um numero inteiro e positivo: ");
    scanf("%d", &n);
    num = 1.0; 
    
    for (c = 1; c <= n; c++) {
        num += 1.0 / c;
        printf("S + 1/%d = %f \n", c, num);
    }
    return 0;
}
*/

//-----------------------------------------------------------------------------------------------------------------------

// 3)

/*
#include <stdio.h>

int main()
{
    int a, b, result;

    for(a = 1; a <= 10; a++){
        for(b = 1; b <= 10; b++){
            result = a * b;
            printf("%d * %d = %d \n", a, b, result);
        }
        printf("\n");
    }
    return 0;
}

*/

//-------------------------------------------------------------------------------------------------------------------


// 5)

/*
#include <stdio.h>

int main(){
    
    int c;
    char nome[30];
    float compras, valorFim, bonus;
    
    for(c = 1; c <= 15; c++){
        printf("Digite o nome do cliente: "); scanf("%s", nome);
        
        printf("Digite o valor das compras do cliente: "); scanf("%f", &compras);
        if(compras < 1000){
            bonus = compras * 10 / 100;
            valorFim = compras - bonus;
            printf("\nFicha do cliente \nNome: %s \nValor das compras: %.2f R$ \nBonus: %.2f R$ \nValor final: %.2f R$ \n\n", nome, compras, bonus, valorFim);
        }
        else{
            bonus = compras * 15 / 100;
            valorFim = compras - bonus;
            printf("\nFicha do cliente \nNome: %s \nValor das compras: %.2f R$ \nBonus: %.2f R$ \nValor final: %.2f R$ \n\n", nome, compras, bonus, valorFim);
        }
    }
    return 0;
}
*/

//-------------------------------------------------------------------------------------------------------

/*

// 6)

#include <stdio.h>

int main(){
    
    int QuantIngresso, ingreMax = 0, c;
    float valIngresso, valTotal, lucroTotal, lucroMax = 0, valMax = 0;
    
    valIngresso = 5.00 ;
    QuantIngresso = 120;
    valTotal = valIngresso * QuantIngresso;
    lucroTotal = valTotal - 200;
    lucroMax = lucroTotal;

    
    printf("Tabela do lucro das vendas dos ingressos \n\nPreço do ingresso: %.2f R$ \nQuantidade de ingreços vendidos: %d \nValor da venda de todos os ingressos: %.2f R$ \nDespesas: 200,00 R$ \nLucro: %.2f R$ \n\n", valIngresso, QuantIngresso, valTotal, lucroTotal);
    for(c = 0; c <= 7; c++){
        
        valIngresso = valIngresso - 0.50;
        QuantIngresso = QuantIngresso + 26;
        valTotal = valIngresso * QuantIngresso;
        lucroTotal = valTotal - 200;
        
        if(lucroTotal > lucroMax){
            valMax = valIngresso; 
            ingreMax = QuantIngresso;
            lucroMax = lucroTotal;
        }

        printf("Preço do ingresso: %.2f R$ \nQuantidade de ingressos vendidos: %d \nValor da venda de todos os ingressos: %.2f R$ \nDespesas: 200,00 R$ \nLucro: %.2f R$ \n\n", valIngresso, QuantIngresso, valTotal, lucroTotal);
    }
    printf("Lucro maximo: %.2f R$ \nQuantidade de ingressos: %d \nValor maximo do ingresso: %.2f R$", lucroMax, ingreMax, valMax);
    
    return 0;
}

*/

//-------------------------------------------------------------------------------------------------------

// 7)

/*

#include <stdio.h>

int main(){
    int idade, maior = 0, c;
    
    for(c = 1; c <= 10; c++){
        printf("Digite a idade da pessoa: "); scanf("%d", &idade);
        if(idade >= 18){
            maior += 1;
        }
    }
    printf("\nA quantidade de pessoas maiores ou iguais a 18 anos é %d \n", maior);
    
    return 0;
}

*/

//-----------------------------------------------------------------------------------------------------------------------

// 9)

/*
#include <stdio.h>

int main()
{
    int tabuada, c, num;
    c = 0;
    
    printf("\nDigite um numero inteiro positivo: ");
    scanf("%d", &num);
    
    printf("\nTabuada do numero %d \n", num);
    
    while(c <= 10){
        tabuada = num * c;
        printf("\n%d x %d = %d", num, c, tabuada);
        
        c++;
    }
    return 0;
}
*/

//-----------------------------------------------------------------------------------------------------------------------

// 15)

/*
#include <stdio.h>

int main(){
    
    int num, entreNum = 0, c=1;
    
    while(c <= 10){
        printf("Digite um numero inteiro e positivo: "); scanf("%d", &num);
        if(num >= 30 && num <= 90){
            entreNum += 1;
        }
        
        c++;
    }
    printf("\nQuantidade de numeros entre 30 e 90: %d", entreNum);
    
    return 0;
}
*/

//-----------------------------------------------------------------------------------------------------------------------

// 19)

/*
#include <stdio.h>

int main() {
    int idade = 0, soma = 0, n = 0;
    float media = 0;

    while (1) {
        printf("Digite a idade da pessoa: ");
        scanf("%d", &idade);
        if (idade == 0) {
            break;
        } else {
            soma += idade;
            n += 1;
        }
    }

    if (n > 0) {
        media = (float)soma / n; 
        printf("\nA média de todas as idades digitadas é: %.1f", media);
    } else {
        printf("Nenhuma idade valida foi inserida.");
    }

    return 0;
}
*/

//-----------------------------------------------------------------------------------------------------------------------

// 35)

#include <stdio.h>

int main(){
    int pos = 0, neg = 0, num = 0;
    float parc = 0;
    
    while(1){
        printf("Digite um numero inteiro: "); scanf("%d", &num);
        if(num > 0){
            pos += num;
        }
        else if(num < 0){
            neg += num;
        }
        else if(num == 0){
            break;
        }
    }
    parc = pos + neg;
    
    printf("\nSoma dos numeros positivos: %d", pos);
    printf("\nSoma dos numeros negativos: %d", neg);
    printf("\nSoma dos numeros positivos e negativos: %.2f", parc);
    return 0;
}

