#include <stdio.h>
#include <string.h>

int main() {
    char apellidoPaterno[50];
    char apellidoMaterno[50];
    char nombre[50];
    char segundonombre[50];
    int anio;
    int dia;
    char mes[20];
    char genero[10];
    char estado[50];
    char curp[20];

    int repetir = 1;
    while (repetir) {
        printf("Ingrese el apellido paterno: ");
        scanf("%s", apellidoPaterno);
        printf("Ingrese el apellido materno: ");
        scanf("%s", apellidoMaterno);
        printf("Ingrese el nombre: ");
        scanf("%s", nombre);
        printf("Ingrese el segundo nombre: ");
        scanf("%s", segundonombre);
        printf("Ingrese el año de nacimiento: ");
        scanf("%d", &anio);
        printf("Ingrese el día de nacimiento: ");
        scanf("%d", &dia);
        printf("Ingrese el mes de nacimiento: ");
        scanf("%s", mes);
        printf("Ingrese el género (HOMBRE/MUJER): ");
        scanf("%s", genero);
        printf("Ingrese el estado de nacimiento: ");
        scanf("%s", estado);
        curp[0] = apellidoPaterno[0];
        curp[1] = apellidoPaterno[1];
        curp[2] = apellidoMaterno[0];
        curp[3] = nombre[0];
        curp[4] = segundonombre[0];
        curp[5] = (anio % 100) / 10 + '0';
        curp[6] = (anio % 10) + '0';
        curp[7] = mes[0];
        curp[8] = mes[1];
        curp[9] = (dia / 10) + '0';
        curp[10] = (dia % 10) + '0';
        curp[11] = genero[0];
        curp[12] = estado[0];
        curp[13] = estado[1];
        curp[14] = estado[2];
        curp[15] = '\0';

        printf("CURP: %s\n", curp);

        printf("¿Desea generar otro CURP? (1: Sí, 0: No): ");
        scanf("%d", &repetir);
    }

    return 0;
}