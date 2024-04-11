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

    // Verifica qual é o menor
    float menor = valor1;
    if (valor2 < menor) {
        menor = valor2;
    }
    if (valor3 < menor) {
        menor = valor3;
    }

    // Mostra o menor valor
    printf("O menor valor é: %.2f\n", menor);

    return 0;
}



