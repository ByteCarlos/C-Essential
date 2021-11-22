#include <stdio.h>
#include <time.h>

// Funções de data e hora

//clock() retorna o número de pulsos de clock decorrido desque que o programa foi lançado
//time() retorna o tempo atual do calendário https://pt.wikipedia.org/wiki/Era_Unix
//localtime() converte o valor time para uma hora local

int main(){
    long int inicio_t, fim_t, total_t;

    inicio_t = clock();
    printf("Realizar um loop grande, inicio_t = %ld\n", inicio_t);
    for(int i = 0; i <= 100000000; i++){}

    fim_t = clock();
    printf("Fim do loop grande, fim_t = %ld\n", fim_t);

    total_t = (double)(fim_t - inicio_t) / CLOCKS_PER_SEC;

    printf("Clocks por segundo: %ld\n", CLOCKS_PER_SEC);

    printf("Tempo total usado pela CPU: %lf\n", total_t);
    printf("Finalizando o programa...");

    
    time_t tempobruto;

    struct tm *info;

    time(&tempobruto);

    info = localtime(&tempobruto);

    printf("Data e hora local %s", ascitime(info));

    time_t segundos;
    
    segundos = time(NULL);
    
    printf("Horas desde 1 de Janeiro de 1970 = %ld\n", segundos/3600);

    return 0;
}