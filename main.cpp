#include "Evaluador.h"
#include <iostream>       // std::cin, std::cout
#include <vector>          // std::list
#include <set>          // std::list
#include <map>          // std::list
using namespace std;


//agrega el elemento valor (dado) a mi_set (dado)
void agregarASet(set<int> *mi_set,int valor)
{
    //mi_set->find(10);
    mi_set->insert(valor);//como es un apuntador ->lo dereferencia y lo hace un set de int's y no una posicion de memoria.
}

//devuelve true si valor (dado) existe en mi_set (dado)
bool existe(set<int> mi_set,int valor)
{
    for(set<int>::iterator i = mi_set.begin();i!=mi_set.end();i++)//ciclo para mover el set
    {
       if(valor==*i)//si encuentra el valor para el ciclo y regresa true
        {
            return true;
        }
    }
    return false;
}

//devuelve la cantidad de elementos de mi_set (dado)
int tamano(set<int> mi_set)
{
    return mi_set.size();//use la funcion de tamano de los set y la devolvi
}

//devuelve la interseccion de mi_set1 (dado) y mi_set2 (dado)
//(devuelve un set que contenga unicamente los valores que mi_set1 y mi_set2 tengan en comun)
set<int> getInserseccion(set<int> mi_set1, set<int> mi_set2)
{
      set<int> mi_set3;
    //set<int>::iterator j = mi_set2.begin();
    //La interseccion son los valores en comun entre los 2 set
    for(set<int>::iterator i = mi_set1.begin();i!=mi_set1.end();i++)//ciclo que mueve mi_set1
    {
        for(set<int>::iterator j = mi_set2.begin();j!=mi_set2.end();j++)//ciclo que mueve mi_set2
           {

              if(*i==*j)//si el valor de i es igual a j
              {

                mi_set3.insert(*j); //se agrega a mi_set3
              }

           }

    }
    return mi_set3;
}

//devuelve la union de mi_set1 (dado) y mi_set2 (dado)
//(devuelve un set que contenga todos los valores de mi_set1 y mi_set2)
set<int> getUnion(set<int> mi_set1, set<int> mi_set2)
{
    set<int> mi_set3;
    //una union son los valores que ambos set tienen
     for(set<int>::iterator i = mi_set1.begin();i!=mi_set1.end();i++)//mueve mi_set1
    {
        for(set<int>::iterator j = mi_set2.begin();j!=mi_set2.end();j++)//mueve mi_set2
           {

               mi_set3.insert(*j);//inserta los valores de mi_set2 en mi_set3



           }
           mi_set3.insert(*i);//inserta los valores de mi_set1 en mi_set3


    }
    return mi_set3;

}

//devuelve true si mi_sub_set (dado) es un subconjunto de mi_set (dado)
//(mi_set contiene todos los valores de mi_sub_set)
bool esSubConjunto(set<int> mi_set, set<int> mi_sub_set)
{
    int cont_rep=0;//Contador de las repeticiones de igualdad entre los 2 conjuntos.

    for(set<int>::iterator i = mi_set.begin();i!=mi_set.end();i++)//ciclo del set
        {
            for(set<int>::iterator j = mi_sub_set.begin();j!=mi_sub_set.end();j++)//ciclo del subset
            {
                if(*i==*j)//cada vez que encuetre valores iguales el contador de repeticiones aumenta 1
                {
                   cont_rep++;
                }
            }

        }

        if(cont_rep==mi_sub_set.size())//Para que sea un conjunto todos los valores del subset tienen que estar en el set
        {                              // Para que sea un subconjunto, si la cantidad de valores iguales es la misma del tamanio del subset,
                                       // Eso indica que el subset es contenido en el set. lo cual lo hace un subconjunto.
            return true;
        }
    return false;
}

int main ()
{

    //Funcion evaluadora
    evaluar();
    return 1;
}
