#include <stdio.h>
#include <stdlib.h>

//Calculadora simples

float num1, num2, resultado;

void soma(){
    printf("-------Soma-------\n");
    printf("Digite os numeros para operação: \n");
    scanf("%f %f", &num1, &num2);
    resultado = num1 + num2;
    printf("A soma de %.2f + %.2f é igual a %.2f", num1, num2, resultado);
    system("pause");
    system("cls");
    menu();
}

void subtracao(){
    printf("-------Subtração-------\n");
    printf("Digite os numeros para operação: \n");
    scanf("%f %f", &num1, &num2);
    resultado = num1 - num2;
    printf("A soma de %.2f - %.2f é igual a %.2f", num1, num2, resultado);
    system("pause");
    system("cls");
    menu();
}

void multiplicacao(){
    printf("-------Multiplicação-------\n");
    printf("Digite os numeros para operação: \n");
    scanf("%f %f", &num1, &num2);
    resultado = num1 * num2;
    printf("A soma de %.2f * %.2f é igual a %.2f", num1, num2, resultado);
    system("pause");
    system("cls");
    menu();
}

void divisao(){
    printf("-------Divisão-------\n");
    printf("Digite os numeros para operação: \n");
    scanf("%f %f", &num1, &num2);
    resultado = num1 / num2;
    printf("A soma de %.2f / %.2f é igual a %.2f", num1, num2, resultado);
    system("pause");
    system("cls");
    menu();
}

sair(){
    int fechar;
    printf("\nTem certeza?\nResponta 1 para (SIM) e 2 para (NÃO): ");
    scanf("%d", &fechar);
        
        switch(fechar){
        case 1:
            system("exit");
            printf("\nFechando aplicação, aguarde...\n");
            break;
        case 2:
            menu();
            break;
        default:
            printf("\nResponta 1 para (SIM) e 2 para (NÃO)\n");
            sair();
            break;
        }
}

void menu(){
    int opcao;
    printf("\n\nEscolha uma operação:\n\n");
    printf(" 1 - Soma\n 2 - Subtração\n 3 - Multiplicação\n 4 - Divisão\n 5 - Sair\n\n");
    printf("Informe a opção: ");
    scanf("%d", &opcao);
    
    switch (opcao){
        case 1:
            soma();
            break;
        case 2:
            subtracao();
            break;
        case 3:
            multiplicacao();
            break;
        case 4:
            divisao();
            break;
        case 5:
            sair();
            break;
        default:
            printf("Digito invalido, tente novamente.\n");
            system("pause");
            system("cls");
            menu();
            break;   
    }
}

int main(){
    menu();
    return 0;
}
