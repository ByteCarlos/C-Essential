#include <math.h>
#include <stdio.h>

//Funções matemáticas

/*Obs: para utilizar a biblioteca math:

a) Clicar com o botão direito do mouse no projeto.c;

b) Ir em C/C++ Build -> Settings -> Libraries

c) Clicar no + e add 'm'

d) Aplicar e fechar

*/

//Funções Trigonométricas

//cos() Calcula o cosseno de um angulo em radianos
//sin() Calcula o seno de um angulo em radianos
//tang() Calcula a tangente de um angulo em radianos
/*
int main(){
    int angulo = 45;

    float res = cos(angulo);
    printf("O cosseno de %d é %f\n", angulo, res);

    res = sin(angulo);
    printf("O seno de %d é %f\n", angulo, res);

    res = tang(angulo);
    printf("A tangente de %d é %f\n", angulo, res);

    return 0;
}
*/

//////////////////////////////////////////////////////////////

// Funções Hiperbólicas
//cosh() Calcula o cosseno hiperbólico de um angulo em radianos
//sinh() Calcula o seno hiperbólico de um angulo em radianos
//tanh() Calcula a tangente hiperbólica de um angulo em radianos
/*
int main(){
    int angulo = 45;

    float res = cosh(angulo);
    printf("O cosseno hiperbólico de %d é %f\n", angulo, res);

    res = sinh(angulo);
    printf("O seno hiperbólico de %d é %f\n", angulo, res);

    res = tanh(angulo);
    printf("A tangente hiperbólica de %d é %f\n", angulo, res);

    return 0;
}
*/

//////////////////////////////////////////////////////////////

// Funções exponenciais e logarítmicas

//exp() Função exponencial
//log() Função logarítmica
/*
int main(){
    double a = 0;
    double b = 1;
    double c = 2;
    int valor = 42;

    printf("O exponencial de %lf é %lf\n", a, exp(a));
    printf("O exponencial de %lf é %lf\n", b, exp(b));
    printf("O exponencial de %lf é %lf\n", c, exp(c));

    printf("O log de %d eh %f\n", valor, log(valor));

    return 0;
}
*/

//////////////////////////////////////////////////////////////

//Funções de potência

//pow() // retorna a base elevada ao expoente
//sqrt() // raiz quadrada de um número
/*
int main(){
    int a = 3;
    int b = 2;
    int c = 1;
    int valor = 9;

    printf("%d elevado a %d é %lf\n", a, b, pow(a, b));
    printf("A raiz quadrada de %d e %lf\n", valor, sqrt(valor));

    return 0;
}
*/

//////////////////////////////////////////////////////////////

// Funções de arredondamento, valor absoluto e outras

//ceil() arredonda para cima um número
//floor() arredonda para baixo um número
/*
int main(){
    double a = 4.67891;

    printf("O valor %lf arredondado é %lf", a, ceil(a));
    printf("O valor %lf arredondado é %lf", a, floor(a));

    return 0;
}
*/