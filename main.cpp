#include "pila.h"
#include "cola.h"
int main()
{
    Cola<int> cola;
    cola.push(-1);
    cola.push(0);
    cola.push(1);
    cola.push(2);
    cola.push(3);
    cout << *cola.front() << endl;
    cout << *cola.back() << endl;
    cola.pop();
    cout << "tamano de la cola: " << cola.size() << endl;
    Pila<int> pila;
    while (!cola.empty())
    {
        int *e = cola.front();
        if (e != nullptr)
        {
            pila.push(*e);
        }
        cola.pop();
    }
    pila.push(10);
    cout << "tamano de la pila: " << pila.size() << endl;
    while (!pila.empty())
    {
        int *e = pila.top();
        if (e != nullptr)
        {
            cout << *e << endl;
        }
        pila.pop();
    }
    cout << "tamano de la pila: " << pila.size() << endl;
    return 0;
}
