#include <iostream>
#include <iomanip> // CRÍTICO: Necesario para formatear los 6 decimales

using namespace std;

int main() {
    // Usamos float para aceptar tanto números enteros como decimales
    float num1, num2;
    
    // CORRECCIÓN 1: Formato de texto exacto pedido en las especificaciones del Paso 4
    cout << "Introduce el valor del primer numero: ";
    cin >> num1;
    
    cout << "Introduce el valor del segundo numero: ";
    cin >> num2;
    
    // CORRECCIÓN 2: Forzar la salida a mostrar exactamente 6 decimales siempre
    cout << fixed << setprecision(6);
    
    // Mostrar los resultados en pantalla con sus enunciados correspondientes
    cout << "\nLa suma es: " << (num1 + num2) << endl;
    cout << "La resta es: " << (num1 - num2) << endl;
    cout << "La multiplicacion es: " << (num1 * num2) << endl;
    
    // Validación rápida para evitar que el programa truene si dividen entre cero
    if (num2 != 0) {
        cout << "La division es: " << (num1 / num2) << endl;
    } else {
        cout << "La division es: No se puede dividir entre cero" << endl;
    }
    
    return 0;
}
