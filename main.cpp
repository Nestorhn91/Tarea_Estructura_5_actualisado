
#include "Evaluador.h"
#include <iostream>       // std::cin, std::cout
#include <vector>          // std::list
using namespace std;

int infinito = 9999;

//Dado: un grafo con 5 nodos implementado en una tabla (arreglo bidimensional)
//Dado: las columnas de la tabla representan el inicio y las filas el destino
//Dado: las aristas tienen un valor de 0 si apuntan a ellas, infinito si no esta conectada y de lo contrario significa que sí hay una conexion entre los nodos

//Devuelve la distancia (o peso) de una arista dado sus dos nodos (inicio y destino)
//Nota: se sugiere NO usar recursion
int obtenerDistanciaAristaDirecta(int grafo[5][5], int inicio, int destino)
{

    return grafo[inicio][destino]; // obtenemos el peso de la arista directa entre un nodo y otro [inicio][destino]

}

//Devuelve verdadero si existe al menos un camino para llegar desde el nodo inicio hasta el nodo destino dada una profundidad maxima de recorrido
//Nota: se sugiere usar recursion
bool existeCamino(int grafo[5][5], int inicio, int destino,int profundidad)

{
    if(profundidad<0) // ponemos un alto a la recursvidad dandole limite a la profundidad y al inicio
        return false;
    if(inicio==destino)
        return true;
    for(int i=0; i<5; i++) // buscamos por otras aristas
    {
        if(grafo[inicio][i]==infinito) // si no existe camino
        {
            continue;// si no hay nada en el camino continua hacia el otro camino exitente
        }
        if(existeCamino(grafo,i,destino,profundidad-1)) // recursividad cambiando el valor del inicio y disminuyendo la profundidad
            return true;
    }
    return false; // si llega a existir camino retornaria true
}

int main ()
{
    evaluar();

    return 1;
}
