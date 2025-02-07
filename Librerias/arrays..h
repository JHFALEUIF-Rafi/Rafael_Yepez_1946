#include <stdlib.h>
#include <time.h>
using namespace std;
namespace vectorn
{
    void llenarVector(int v[], int n)
    {
        int ri = 1, rf = 100;
        srand(time(NULL));
        for (int i = 0; i < n; i++)
        {
            v[i] = ri + rand() % (rf - ri + 1);
        }
    }
}
namespace ver
{
    void mostrarVector(int v[], int n)
    {
        for (int i = 0; i < n; i++)
        {
            cout << v[i] << " ";
        }
    }
}

namespace ordenar
{
    void ordenarBurbujaV3(int v[], int n)
    {
        int mejora = 1;
        bool change = true;
        int aux;
        for (int i = 0; i < n && change; i++)
        {
            change = false;
            for (int j = 0; j < n - mejora; j++)
            {
                if (v[j] > v[j + 1])
                {
                    aux = v[j];
                    v[j] = v[j + 1];
                    v[j + 1] = aux;
                    change = true;
                }
            }
            mejora++;
        }
    }
}