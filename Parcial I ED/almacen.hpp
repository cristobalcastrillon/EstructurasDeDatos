//
//  almacen.hpp
//  Parcial I ED
//
//  Created by Cristóbal Castrillón Balcázar on 23/02/21.
//

#ifndef almacen_hpp
#define almacen_hpp

#include <iostream>
#include <vector>

using namespace std;

struct almacen
{
private:
    string nombreAlmacen;
    
    vector<double> facturacion;
    double mejorDia;
    double peorDia;
    double totalVentas;
    double calcTotal();
    double calcTotal2(vector<double> facturacion);
public:
    almacen(vector<double> ventasSemana, string nombreAlmacen);
    vector<double> getFacturacion();
    void reporteVentas(vector<string> semana, vector<double> facturacion);
};

#endif /* almacen_hpp */
