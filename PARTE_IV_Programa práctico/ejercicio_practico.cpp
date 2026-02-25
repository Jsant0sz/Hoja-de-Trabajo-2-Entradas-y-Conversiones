#include <iostream>
using namespace std;
#include <iomanip>

int main() {

    string nombre;
    int cantidad;
    double precio_prodicto;
    double subtotal;
    double iva;
    double total_pagar;



    cout << "Ingrese su nombre completo:" << endl;
    getline(cin, nombre);
    cout << "Ingrese el precio del producto:" << endl;
    cin >> precio_prodicto;
    cout << "Ingrese la cantidad comprada:" << endl;
    cin >> cantidad;

    subtotal = precio_prodicto * cantidad;
    iva = subtotal * 0.12;
    total_pagar = subtotal * iva;

    cout << "Nombre del Cliente: " << nombre << endl;
    cout << fixed << setprecision(2);
    cout << "Su subtotal es de: Q " << subtotal << endl;
    cout << "Su subtotal con IVA es de: Q " << iva << endl;
    cout << "Su total a pagar es de: Q " << total_pagar << endl;
    return 0;
}