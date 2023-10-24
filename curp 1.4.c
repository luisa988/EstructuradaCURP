#include <stdio.h>
#include <string.h>

int main() {
    char apellidoPaterno[20];
    char apellidoMaterno[20];
    char nombre[20];
    char fechaNacimiento[10];
    char diaNacimiento[3];
    char mesNacimiento[10];
    char anioNacimiento[5];
    char sexo[7];
    char estado[20];
    char curp[14];

    printf("Ingrese el apellido paterno: ");
    scanf("%s", apellidoPaterno);

    printf("Ingrese el apellido materno: ");
    scanf("%s", apellidoMaterno);

    printf("Ingrese el nombre: ");
    scanf("%s", nombre);

    printf("Ingrese el año de nacimiento: ");
    scanf("%s", anioNacimiento);

    printf("Ingrese el día de nacimiento: ");
    scanf("%s", diaNacimiento);

    printf("Ingrese el mes de nacimiento: ");
    scanf("%s", mesNacimiento);

    printf("Ingrese el sexo (HOMBRE o MUJER): ");
    scanf("%s", sexo);

    printf("Ingrese el estado: ");
    scanf("%s", estado);

    curp[0] = apellidoPaterno[0];
    curp[1] = apellidoPaterno[1];
    curp[2] = apellidoMaterno[0];
    curp[3] = nombre[0];
    curp[4] = anioNacimiento[2];
    curp[5] = anioNacimiento[3];
    curp[6] = mesNacimiento[0];
    curp[7] = mesNacimiento[1];
    curp[8] = diaNacimiento[0];
    curp[9] = diaNacimiento[1];
    curp[10] = sexo[0];
    curp[11] = estado[0];
    curp[12] = estado[1];
    curp[13] = '\0';

    printf("CURP: %s\n", curp);

    return 0;
}
