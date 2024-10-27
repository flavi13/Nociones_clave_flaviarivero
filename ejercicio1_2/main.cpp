// se toman dos valores (5,3) en este caso y se suman
// se imprime "hola mundo" en la pantalla
// utiliza una variable global y muestra su valor dentro y fuera de la función
#define PI 3.14159
#define AREA_CIRCULO(r) (PI * (r) * (r))

#include <iostream>
int suma(int a, int b) {
    return a + b;
}

int g = 20;
int main()
{
    std::cout << "Hola mundo!" << std::endl;
    std::cout << "La suma es: " << suma(5, 3) << std::endl;

    std::cout << "Valor de g antes de la función suma: " << g << std::endl;
    std::cout << "La suma es: " << suma(5, g) << std::endl;
    std::cout << "Valor de g después de la función suma: " << g << std::endl;
    return 0;
}

