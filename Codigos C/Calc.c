#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Calculadora simples

float num1, num2, resultado;

void soma(){
    printf("-------Soma-------\n");
    printf("Digite os numeros para operação: \n");
    scanf("%f %f", &num1, &num2);
    resultado = num1 + num2;
    printf("A soma de %.2f + %.2f é igual a %.2f\n\n", num1, num2, resultado);
    system("pause");
    system("cls");
    menu();
}

void subtracao(){
    printf("-------Subtração-------\n");
    printf("Digite os numeros para operação: \n");
    scanf("%f %f", &num1, &num2);
    resultado = num1 - num2;
    printf("A soma de %.2f - %.2f é igual a %.2f\n\n", num1, num2, resultado);
    system("pause");
    system("cls");
    menu();
}

void multiplicacao(){
    printf("-------Multiplicação-------\n");
    printf("Digite os numeros para operação: \n");
    scanf("%f %f", &num1, &num2);
    resultado = num1 * num2;
    printf("A soma de %.2f * %.2f é igual a %.2f\n\n", num1, num2, resultado);
    system("pause");
    system("cls");
    menu();
}

void divisao(){
    printf("-------Divisão-------\n");
    printf("Digite os numeros para operação: \n");
    scanf("%f %f", &num1, &num2);
    resultado = num1 / num2;
    printf("A soma de %.2f / %.2f é igual a %.2f\n\n", num1, num2, resultado);
    system("pause");
    system("cls");
    menu();
}

void raiz(){
    int numero;
    printf("Digite o numero para operação: \n");
    scanf("%d", &numero);
    resultado = sqrt(numero);
    printf("Valor da Raiz Quadrade de %d é: %.0f\n\n", numero, resultado);
    system("pause");
    system("cls");
    menu();
}

void potencia(){
    int base, expoente;
    printf("Digite os numeros para operação: \n");
    scanf("%d %d", &base, &expoente);
    resultado = pow(base, expoente);
    printf("Valor de %d elevado a %d é: %.0f\n\n", base, expoente, resultado);
    system("pause");
    system("cls");
    menu();
}

void sair(){
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
    printf(" 1 - Soma\n 2 - Subtração\n 3 - Multiplicação\n 4 - Divisão\n 5 - Raiz Quadrada\n 6 - Potenciação\n 7 - Sair\n\n");
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
            raiz();
            break;
        case 6:
            potencia();
            break;    
        case 7:
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
