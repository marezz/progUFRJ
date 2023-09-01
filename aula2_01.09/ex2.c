#include <stdio.h>


typedef struct{
    int minuto, hora;
} horario;

void conversao(int min, horario *dia){

    (*dia).hora = min/60;
    (*dia).minuto = min - (*dia).hora*60;

}

int main(){

    int minutos;
    horario dia;

    printf("Insira os minutos: ");
    scanf("%d", &minutos);

    conversao(minutos, &dia);
    printf("%d horas e %d minutos\n", dia.hora, dia.minuto);

    return 0;
}