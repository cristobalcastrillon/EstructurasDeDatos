#include <vector>
#include <string>
#include "almacen.h"
using namespace std;

int main()
{
    vector<double> ventas1;
    vector<string> semana;

    semana.push_back("Lunes");
    semana.push_back("Martes");
    semana.push_back("Miércoles");
    semana.push_back("Jueves");
    semana.push_back("Viernes");
    semana.push_back("Sábado");
    semana.push_back("Domingo");

    ventas1.push_back(4456.34);
    ventas1.push_back(5654.23);
    ventas1.push_back(2333.67);
    ventas1.push_back(6543.23);
    ventas1.push_back(3789.98);
    ventas1.push_back(56784.6);
    ventas1.push_back(6543.2);

    string nombreTienda = "Tienda 1";
    almacen tienda1(ventas1, nombreTienda);
    tienda1.reporteVentas(semana);

    return 0;
}