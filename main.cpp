#include "Evaluador.h"
#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
//ESTA TAREA LA HICE CON LA COLABORACION DE MILADY ROMERO

//Desrefencia ptr (dado) y devuelve su valor
int obtenerValor(int *ptr)
{
    //se devuelve lo que contenga ptr
    return *ptr;
}

//Desreferencia a (dado) y b (dado) y devuelve la suma de ambos
int sumar(int* a, int* b)
{
    //se devuelve la suma del contenido de a y b
    return *a + *b;
}

//Devuelve true si a (dado) y b (dado) apuntan al mismo espacio de memoria
bool compararApuntadores(string *a, string *b)
{
    //el if compara las referencias de a y b, si son iguales devuelve true, si no, false.
    if (a == b)
        return true;
    else
    return false;
}

//Desrefencia a (dado) y b (dado), devuelve true si ambos valores son iguales de lo contrario devuelve false
bool comparar(string *a, string *b)
{
    //el if compara el contenido de a y b, si son iguales devuelve true, si no, false
    if (*a == *b)
        return true;
    else
    return false;
}

//Desreferencia a (dado) y devuelve su primera letra
char getPrimeraLetra(string* a)
{
    //se declara una variable primeraletra que contendra el valor de a en la primera posicion(0)
    char primeraletra = a->at(0);
    // se devuelve el contenido de la variable
    return primeraletra;

}

//Desreferencia a (dado) y devuelve true si es palindroma de lo contrario devuelve false
//Definicion de palindromo: http://es.wikipedia.org/wiki/Pal%C3%ADndromo
//Ejemplos de palindromos: Ana, arenera, arepera, anilina, ananá, Malayalam, Neuquén, Oruro, oso, radar, reconocer, rotor, salas, seres, somos, sometemos
// Para este ejemplo recibi la ayuda de un ing.
bool esPalindromo(string* a)
{
    //Esta string almacenara lo que contenga a
    string Pal = *a;
    //esta variable sera una cadena vacia
    string Inversa = "";

    //el for recorrera todo el arreglo mientras i sea menor que el tamaño de la variable Pal
    for (int i = 0; i < Pal.size(); i++)
    {
    // aqui se invierte la palabra sustrayendo cada uno de los caracteres de Pal y mandandolos a Inversa a la posicion opuesta y sumandole lo que tiene inversa
        Inversa = Pal.substr(i, 1) + Inversa;
    }
    // este if solo compara lo que tenga Pal con la inversa, si da 0 significa que son iguales, si da algo diferente retorna false
    if (Pal.compare(Inversa) == 0)
    return true ;

  else
        return false;
}

//Desreferencia base (dado) y exponente (dado) y devuelve la base elevado al exponente
int getExponente(int* base, int* exponente)
{
    //total contendra la respuesta
    int total;
    // n sera igual a lo que contenga base (dado)
    int n;
    n = *base;
      for (int x =1; x<(*exponente); x++)
      {
          //el for recorre todo el arreglo hasta que x sea menor que el exponente
          //total sera igual a lo que tenga n por la base
          total = n*= *base;
      }
    return total;

}

int main ()
{
    //Funcion evaluadora
    evaluar();
    return 0;
}
