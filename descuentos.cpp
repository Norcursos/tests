#include "descuentos.h"

double calcular_descuento(double importe, double porcentaje_descuento) {
    return importe - (importe * porcentaje_descuento / 100.0);
}