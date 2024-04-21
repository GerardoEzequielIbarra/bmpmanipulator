/*
    Integrantes del grupo. En caso de ser un grupo de dos integrantes, no completar el último campo.
    Si alguno de los integrantes del grupo dejara la materia, completar de todos modos sus datos, aclarando que no entrega.
    -----------------
    Apellido: Ibarra
    Nombre: Gerardo Ezequiel
    DNI: 42471248
    Entrega:Si
    -----------------
    Apellido:
    Nombre:
    DNI:
    Entrega:
    -----------------
    (Sólo para grupos de tres integrantes)
    Apellido:
    Nombre:
    DNI:
    Entrega:
    -----------------

    Comentarios (opcionales) que deseen hacer al docente sobre el TP:

*/

#include "constantes.h"
#include <stdio.h>
#include <string.h>

char buscarArgv(char* argv[],int argc, char palabra[])
{
    int i;
    for(i=0; i<argc; i++)
    {
        if(strcmp(argv[i],palabra) ==0)
        {
            return i;
        }
    }
    return 0;
}

void abrirImagen(t_metadata metadata,t_pixel pixel, char nombre)
{
    FILE *imagen = fopen(nombre,"rb");
    if(!imagen)
        printf("No se abrio el archivo");
    else
    {
        fseek(imagen,0, SEEK_SET);
        fread()
    }
}

void negativo(int argc,char* argv[])
{
    char posi = 0;
    char palabra[] = "--negativo";
    //char nombreArchivo[] ="negativo.bmp";

    //Busca la palabra --negativo en argv
    posi = buscarArgv(argv,argc,palabra);
    //Si encontro negativo hace
    if(argc > 1 && posi > 0)
    {
        printf("Entro en negativo\n");
        //Abrir el archivo de la imagen

        //Abrir el archivo de la imagen modificada
        FILE * f1 = fopen("negativo.bmp", "wb");
        if(!f1)
            printf("No se pudo crear el archivo\n");
    }
}

void escala_de_grises(int argc,char* argv[])
{
    char posi = 0;
    char palabra[] = "--escala-de-grises";
    posi = buscarArgv(argv,argc,palabra);

    if(argc > 1 && posi > 0)
    {
        printf("Entro en escala-de-grises\n");
    }
}



int solucion(int argc, char* argv[])
{
    int i;
    printf("Muestro los argumentos que le llegan al main \n\n");
    printf("Recibimos %d argumentos \n",argc);
    for (i=0; i<argc; i++)
    {
        printf("%s \n",argv[i]);
    }
    printf("----------------------------------------- \n");

    abrirImagen()
    negativo(argc, argv);
    escala_de_grises(argc, argv);

    return TODO_OK;
}

