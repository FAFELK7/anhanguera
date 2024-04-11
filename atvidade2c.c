/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    float valor1, valor2, valor3;

    // Solicita os três valores
    printf("Digite o primeiro valor: ");
    scanf("%f", &valor1);
    printf("Digite o segundo valor: ");
    scanf("%f", &valor2);
    printf("Digite o terceiro valor: ");
    scanf("%f", &valor3);

    // Verifica qual é o maior
    float maior = valor1;
    if (valor2 > maior) {
        maior = valor2;
    }
    if (valor3 > maior) {
        maior = valor3;
    }

    // Mostra o maior valor
    printf("O maior valor é: %.2f\n", maior);

    return 0;
}



