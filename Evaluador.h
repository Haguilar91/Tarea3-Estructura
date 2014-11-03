#ifndef EVALUADOR_H
#define EVALUADOR_H

#include <iostream>       // std::cin, std::cout
#include <vector>          // std::list
#include <set>          // std::list
#include <map>          // std::list
using namespace std;


void evaluar();

void agregarASet(set<int> *mi_set,int valor);
bool existe(set<int> mi_set,int valor);
int tamano(set<int> mi_set);
set<int> getInserseccion(set<int> mi_set1, set<int> mi_set2);
set<int> getUnion(set<int> mi_set1, set<int> mi_set2);
bool esSubConjunto(set<int> mi_set, set<int> mi_sub_set);

#endif // EVALUADOR_H
