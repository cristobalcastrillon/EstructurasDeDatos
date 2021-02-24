//
//  almacen.cpp
//  Parcial I ED
//
//  Created by Cristóbal Castrillón Balcázar on 23/02/21.
//

#include "almacen.hpp"
#include <iostream>
#include <algorithm>
#include <iterator>
#include <vector>

using namespace std;

vector<double> almacen::getFacturacion(){
    return this->facturacion;
}

almacen::almacen(vector<double> ventasSemana, string nombreAlmacen) {
    this->nombreAlmacen = nombreAlmacen;
    vector<double> facturacion = ventasSemana;
    mejorDia = *max_element(facturacion.begin(), facturacion.end());
    peorDia = *min_element(facturacion.begin(), facturacion.end());
//    totalVentas = calcTotal();
    totalVentas = calcTotal2(facturacion);
}

void almacen::reporteVentas(vector<string> semana, vector<double> ventas) {

    cout << "Reporte semanal de Ventas Almacen: " << nombreAlmacen << endl;
    
    cout << "Total ventas: " << totalVentas << endl;

    cout << "Dia con mas ventas: " << semana.at(distance(ventas.begin(), max_element(ventas.begin(), ventas.end()))) << " - " << mejorDia << endl;
    cout << "Dia con menos ventas: " << semana.at(distance(ventas.begin(), min_element(ventas.begin(), ventas.end()))) << " - " << peorDia << endl;
    
    cout << "Promedio de ventas semana: " << totalVentas/ventas.size() << endl;
    
}

double almacen::calcTotal() {

    double sum;

    for (size_t i = 0; i < facturacion.size(); i++)

        sum += facturacion.at(i);

    return sum;

}

double almacen::calcTotal2(vector<double> facturacion) {

    double sum = 0.0;

    for (size_t i = 0; i < facturacion.size(); i++)

        sum += facturacion.at(i);

    return sum;

}
