#include "almacen.h"
#include <iostream>
#include <algorithm>
#include <iterator>
#include <numeric>

using namespace std;

almacen::almacen(vector<double> ventasSemana, string nombreTienda) {
    this->nombreTienda = nombreTienda;
    facturacion = ventasSemana;
    mejorDia = *max_element(facturacion.begin(), facturacion.end());
    peorDia = *min_element(facturacion.begin(), facturacion.end());
    totalVentas = calcTotal();
}

void almacen::reporteVentas(vector<string> semana) {
    cout << "Reporte semanal de Ventas de Almacen: " << this->nombreTienda << endl;
    cout << "Total ventas: " << totalVentas << endl;
    cout << "Dia con mas ventas: " << semana.at(distance(facturacion.begin(), max_element(facturacion.begin(), facturacion.end()))) << " - " << mejorDia << endl;
    cout << "Dia con menos ventas: " << semana.at(distance(facturacion.begin(), min_element(facturacion.begin(), facturacion.end()))) << " - " << peorDia << endl;
    
    
    cout << "Promedio de ventas semana: " << totalVentas / facturacion.size() << endl;


}

double almacen::calcTotal() {
    double sum;
    sum = accumulate(facturacion.begin(), facturacion.end(), 0.0);
    return sum;
}
