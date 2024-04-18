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
    for(i=0;i<argc;i++)
    {
        if(strcmp(argv[i],palabra) ==0)
        {
            return i;
        }
    }

    return 0;
}

void negativo(int argc,char* argv[])
{
    char posi = 0;
    char palabra[11] = "--negativo";
    posi = buscarArgv(argv,argc,palabra);

    if(argc > 1 && posi >= 0)
    {
        printf("\nEntro en negativo");
    }
}

void escala_de_grises(int argc,char* argv[])
{
    char posi = 0;
    char palabra[19] = "--escala-de-grises";
    posi = buscarArgv(argv,argc,palabra);

    if(argc > 1 && posi >= 0)
    {
        printf("\nEntro en escala-de-grises");
    }
}

void aumentar_contraste(int argc,  char* argv[])
{
    if(argc > 1 && strcmp(argv[1], "--aumentar-contraste") == 0)
    {
        printf("Entro en aumentar-contraste");
    }
}

void reducir_contraste(int argc,  char* argv[])
{
    if(argc > 1 && strcmp(argv[1], "--reducir-contraste") == 0)
    {
        printf("Entro en reducir-contraste");
    }
}

void tonalidad_azul(int argc,  char* argv[])
{
    if(argc > 1 && strcmp(argv[1],"--tonalidad-azul") == 0)
    {
        printf("Entro en tonalidad-azul ");
    }
}

void tonalidad_verde(int argc,  char* argv[])
{
    if(argc > 1 && strcmp(argv[1], "--tonalidad-verde") == 0)
    {
        printf("Entro en tonalidad-verde");
    }
}

void tonalidad_roja(int argc,  char* argv[])
{
    if(argc > 1 && strcmp(argv[1], "--tonalidad-roja") == 0)
    {
        printf("Entro en tonalidad-roja");
    }
}

void recortar(int argc,  char* argv[])
{
    if(argc > 1 && strcmp(argv[1], "--recortar") == 0)
    {
        printf("Entro en recortar");
    }
}

void rotar_derecha(int argc,  char* argv[])
{
    if(argc > 1 && strcmp(argv[1], "--rotar-derecha") == 0)
    {
        printf("Entro en recortar");
    }
}

void rotar_izquierda(int argc,  char* argv[])
{
    if(argc > 1 && strcmp(argv[1], "--rotar-izquierda") == 0)
    {
        printf("Entro en rotar-izquierda");
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

    negativo(argc, argv);
    escala_de_grises(argc, argv);
    aumentar_contraste(argc, argv);
    reducir_contraste(argc, argv);
    tonalidad_azul(argc, argv);
    tonalidad_roja(argc, argv);
    tonalidad_verde(argc, argv);
    recortar(argc, argv);
    rotar_izquierda(argc, argv);
    rotar_derecha(argc, argv);

    return TODO_OK;
}

