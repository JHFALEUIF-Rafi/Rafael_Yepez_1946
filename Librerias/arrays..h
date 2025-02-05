#include <stdlib.h>
#include <time.h>
namespace vectorn
{
    void llenarVector(int v[], int n, int ri, int rf)
    {
        srand(time(NULL));
        for (int i = 0; i < n; i++)
        {
            v[i] = ri + rand() % (rf - ri + 1);
        }
    }
}
