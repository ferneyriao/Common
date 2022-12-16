#include <iostream>
#include <cmath>

using namespace std;

bool esPrimo(int n) {
  // Si n es menor que 2, no es primo
  if (n < 2) return false;
  // Si n es 2, es primo
  if (n == 2) return true;
  // Si n es divisible por 2, no es primo
  if (n % 2 == 0) return false;
  // Comprobamos si n es divisible por números impares
  for (int i = 3; i <= sqrt(n); i += 2) {
    if (n % i == 0) return false;
  }
  // Si no es divisible por ningún número, es primo
  return true;
}

int main() {
  int contador = 0; // Contador de números primos
  int numero = 1; // Número actual
  // Iteramos hasta que hayamos encontrado el número primo 10,001
  while (contador < 10001) {
    numero++; // Pasamos al siguiente número
    if (esPrimo(numero)) contador++; // Si es primo, aumentamos el contador
  }
  cout << "El número primo 10,001 es: " << numero << endl;
  return 0;
}
