#include "Evaluador.h"

void evaluar()
{
    int nota = 0;

    cout<<"Ejercicio agregarASet:\t\t\t";
    set<int>s;
    agregarASet(&s,2);
    agregarASet(&s,5);

    set<int>s2;

    if( (*s.find(2)) == 2 && (*s.find(5)) == 5)
    {
        nota++;
        cout<<"Correcto"<<endl;
    }else
    {
        cout<<"Incorrecto"<<endl;
    }

    set<int>sa;
    set<int>sb;
    sa.insert(2);
    sa.insert(4);
    sa.insert(5);
    sa.insert(6);
    sa.insert(8);

    sb.insert(1);
    sb.insert(2);
    sb.insert(3);
    sb.insert(4);
    sb.insert(5);
    sb.insert(6);

    cout<<"Ejercicio existe:\t\t\t";

    if(existe(sa,2) && !existe(sa,1) && existe(sb,1) && existe(sa,6) && !existe(sb,7))
    {
        nota++;
        cout<<"Correcto"<<endl;
    }else
    {
        cout<<"Incorrecto"<<endl;
    }

    cout<<"Ejercicio tamano:\t\t\t";

    if(tamano(sa)==5 && tamano(sb)==6)
    {
        nota++;
        cout<<"Correcto"<<endl;
    }else
    {
        cout<<"Incorrecto"<<endl;
    }

    cout<<"Ejercicio getInserseccion:\t\t";

    set<int> sc = getInserseccion(sa,sb);
    if(sc.find(1)==sc.end() &&
        sc.find(2)!=sc.end() &&
        sc.find(3)==sc.end() &&
        sc.find(4)!=sc.end() &&
        sc.find(5)!=sc.end() &&
        sc.find(6)!=sc.end() &&
        sc.find(7)==sc.end() &&
        sc.find(8)==sc.end() &&
        sc.find(9)==sc.end() &&
        sc.find(10)==sc.end() &&
        sc.find(0)==sc.end())
    {
        nota++;
        cout<<"Correcto"<<endl;
    }else
    {
        cout<<"Incorrecto"<<endl;
    }



    cout<<"Ejercicio getUnion:\t\t\t";

    set<int> sd = getUnion(sa,sb);

    if(sd.find(1)!=sd.end() &&
        sd.find(2)!=sd.end() &&
        sd.find(3)!=sd.end() &&
        sd.find(4)!=sd.end() &&
        sd.find(5)!=sd.end() &&
        sd.find(6)!=sd.end() &&
        sd.find(7)==sd.end() &&
        sd.find(8)!=sd.end() &&
        sd.find(9)==sd.end() &&
        sd.find(10)==sd.end() &&
        sd.find(0)==sd.end()
        )
    {
        nota++;
        cout<<"Correcto"<<endl;
    }else
    {
        cout<<"Incorrecto"<<endl;
    }

    cout<<"Ejercicio esSubConjunto:\t\t";

    set<int> se;
    set<int> sf;

    se.insert(2);
    se.insert(4);
    se.insert(8);

    if(esSubConjunto(sa,se))
    {
        nota+=2;
        cout<<"Correcto"<<endl;
    }else
    {
        cout<<"Incorrecto"<<endl;
    }



//
    cout<<endl<<"Nota: "<<nota<<"/7"<<endl;
}
