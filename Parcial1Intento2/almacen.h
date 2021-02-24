#include <vector>
#include <string>
using namespace std;

struct almacen
{
private:
    string nombreTienda;
    vector<double> facturacion;
    double mejorDia;
    double peorDia;
    double totalVentas;
    double calcTotal();

public:
    almacen(vector<double> ventasSemana, string nombreTienda);
    void reporteVentas(vector<string> semana);
};