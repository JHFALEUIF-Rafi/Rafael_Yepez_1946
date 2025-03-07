#include <iostream>
#include <vector>

using namespace std;

void ordenarPorLongitud(string &cadena)
{
    vector<string> palabras;
    string palabra;

    for (char c : cadena)
    {
        if (c == ' ')
        {   
            if (!palabra.empty())
            {
                palabras.push_back(palabra);
                palabra.clear();
            }
        }
        else
        {
            palabra += c;
        }
    }
    if (!palabra.empty())
    {
        palabras.push_back(palabra);
    }

    for (size_t i = 0; i < palabras.size() - 1; ++i)
    {
        for (size_t j = 0; j < palabras.size() - i - 1; ++j)
        {
            if (palabras[j].size() < palabras[j + 1].size())
            {
                string temp = palabras[j];
                palabras[j] = palabras[j + 1];
                palabras[j + 1] = temp;
            }
        }
    }
    cadena = "";
    for (const string &p : palabras)
    {
        cadena += p + " ";
    }

    cadena.pop_back(); 
}

int main()
{
    string cadena;

    cout << "Ingrese una cadena de palabras: ";
    getline(cin, cadena); 

    ordenarPorLongitud(cadena);

    cout << "Cadena resultado: " << cadena << endl;

    return 0;
}
