#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

void reglas()
{
  cout << "---Bienvenido Piedra, Papel, Tijera, Rata, Spock---" << endl;
  cout << "------------------------Reglas----------------------" << endl;
  cout << "1. Tijera corta papel" << endl;
  cout << "2. Papel cubre piedra" << endl;
  cout << "3. Piedra tritura a rata" << endl;
  cout << "4. Rata envenena a Spock" << endl;
  cout << "5. Spock aplasta tijera" << endl;
  cout << "6. Tijeras decapitan a rata" << endl;
  cout << "7. Rata come papel" << endl;
  cout << "8. Papel desaprueba a Spock" << endl;
  cout << "9. Spock vaporiza piedra" << endl;
  cout << "10. Piedra tritura tijeras" << endl;
}

int obtenerEleccionUsuario()
{
  int eleccion;
  cout << "\nSelecciona..." << endl;
  cout << "1. Piedra" << endl;
  cout << "2. Papel" << endl;
  cout << "3. Tijera" << endl;
  cout << "4. Rata" << endl;
  cout << "5. Spock" << endl;
  cout << "Seleccion: ";
  cin >> eleccion;

  while (eleccion < 1 || eleccion > 5)
  {
    cout << "Elija una opcion valida (1-5): ";
    cin >> eleccion;
  }

  return eleccion;
}

int obtenerEleccionMaquina()
{
  return (rand() % 5) + 1;
}

int determinarGanador(int usuario, int maquina)
{
  if (usuario == maquina)
    return 0;

  if ((usuario == 3 && maquina == 2) ||
      (usuario == 2 && maquina == 1) ||
      (usuario == 1 && maquina == 4) ||
      (usuario == 4 && maquina == 5) ||
      (usuario == 5 && maquina == 3) ||
      (usuario == 3 && maquina == 4) ||
      (usuario == 4 && maquina == 2) ||
      (usuario == 2 && maquina == 5) ||
      (usuario == 5 && maquina == 1) ||
      (usuario == 1 && maquina == 3))
  {
    return 1;
  }

  return -1;
}

void determinarGanadorJuego(int puntosUsuario, int puntosMaquina)
{
  cout << "\n--- Resultado Final ---\n";
  cout << "Puntos del usuario: " << puntosUsuario << endl;
  cout << "Puntos de la maquina: " << puntosMaquina << endl;

  if (puntosUsuario > puntosMaquina)
    cout << "Has ganado el juego\n";
  else if (puntosUsuario < puntosMaquina)
    cout << "La maquina ha ganado\n";
  else
    cout << "Empate\n";
}

void jugarRondas(int puntosUsuario, int puntosMaquina)
{
  for (int ronda = 1; ronda <= 5; ronda++)
  {
    cout << "\n--- Ronda " << ronda << " ---" << endl;

    int usuario = obtenerEleccionUsuario();
    int maquina = obtenerEleccionMaquina();

    cout << "La maquina eligio: " << maquina << endl;

    int resultado = determinarGanador(usuario, maquina);

    if (resultado == 1)
    {
      cout << "¡Ganaste esta ronda!\n";
      puntosUsuario++;
    }
    else if (resultado == -1)
    {
      cout << "La maquina gana esta ronda.\n";
      puntosMaquina++;
    }
    else
    {
      cout << "¡Empate!\n";
    }
  }

  determinarGanadorJuego(puntosUsuario, puntosMaquina);
}

void dificultadSelector()
{
  int n;
  cout << "\n----------Dificultad----------" << endl;
  cout << "1. Principiante" << endl;
  cout << "2. Intermedio" << endl;
  cout << "3. Avanzado" << endl;
  cout << "Seleccion: ";
  cin >> n;

  while (n < 1 || n > 3)
  {
    cout << "Elija una opción válida (1-3): ";
    cin >> n;
  }

  int puntosUsuario = 0;
  int puntosMaquina = (n == 2) ? 1 : (n == 3) ? 2
                                              : 0;

  jugarRondas(puntosUsuario, puntosMaquina);
}

void iniciarJuego()
{
  reglas();
  srand(time(0));
  dificultadSelector();
}

int main()
{
  iniciarJuego();
  return 0;
}
