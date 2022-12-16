#include <iostream>
#include <algorithm>

int main() {
  int max_palindrome = 0; // variable para guardar el mayor palíndromo encontrado

  // bucle anidado para multiplicar todos los pares de números de 3 dígitos
  for (int i = 100; i <= 999; i++) {
    for (int j = 100; j <= 999; j++) {
      int product = i * j; // calcular el producto

      // convertir el producto a una cadena de caracteres
      std::string product_str = std::to_string(product);

      // verificar si el producto es un palíndromo
      bool is_palindrome = true;
      for (int k = 0; k < product_str.length() / 2; k++) {
        if (product_str[k] != product_str[product_str.length() - k - 1]) {
          is_palindrome = false;
          break;
        }
      }

      // si el producto es un palíndromo y es mayor que el mayor encontrado hasta ahora, actualizar el mayor palíndromo
      if (is_palindrome && product > max_palindrome) {
        max_palindrome = product;
      }
    }
  }

  // mostrar el mayor palíndromo encontrado
  std::cout << "El palíndromo más grande hecho del producto de dos números de 3 dígitos es: " << max_palindrome << std::endl;

  return 0;
}
