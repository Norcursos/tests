#include <cassert>
#include <iostream>
#include <cmath>
#include "descuentos.h"

void test_caso_basico() {
    // Entrada: 100.0, 10.0 → Salida esperada: 90.0
    double resultado = calcular_descuento(100.0, 10.0);
    assert(resultado == 90.0);
    std::cout << "✓ Test caso básico pasado" << std::endl;
}

void test_sin_descuento() {
    // Entrada: 50.0, 0.0 → Salida esperada: 50.0
    double resultado = calcular_descuento(50.0, 0.0);
    assert(resultado == 50.0);
    std::cout << "✓ Test sin descuento pasado" << std::endl;
}

void test_descuento_total() {
    // Entrada: 200.0, 100.0 → Salida esperada: 0.0
    double resultado = calcular_descuento(200.0, 100.0);
    assert(resultado == 0.0);
    std::cout << "✓ Test descuento total pasado" << std::endl;
}

void test_otro_caso() {
    // Entrada: 75.0, 20.0 → Salida esperada: 60.0
    double resultado = calcular_descuento(75.0, 20.0);
    assert(resultado == 60.0);
    std::cout << "✓ Test otro caso pasado" << std::endl;
}

void test_descuento_50_por_ciento() {
    // Entrada: 80.0, 50.0 → Salida esperada: 40.0
    double resultado = calcular_descuento(80.0, 50.0);
    assert(resultado == 40.0);
    std::cout << "✓ Test descuento 50% pasado" << std::endl;
}

void test_descuento_pequeno() {
    // Entrada: 1000.0, 5.0 → Salida esperada: 950.0
    double resultado = calcular_descuento(1000.0, 5.0);
    assert(resultado == 950.0);
    std::cout << "✓ Test descuento pequeño pasado" << std::endl;
}

void test_importe_pequeno() {
    // Entrada: 10.0, 25.0 → Salida esperada: 7.5
    double resultado = calcular_descuento(10.0, 25.0);
    assert(resultado == 7.5);
    std::cout << "✓ Test importe pequeño pasado" << std::endl;
}

void test_descuento_decimal() {
    // Entrada: 150.0, 12.5 → Salida esperada: 131.25
    double resultado = calcular_descuento(150.0, 12.5);
    assert(resultado == 131.25);
    std::cout << "✓ Test descuento decimal pasado" << std::endl;
}

void test_importe_decimal() {
    // Entrada: 99.99, 10.0 → Salida esperada: 89.991
    double resultado = calcular_descuento(99.99, 10.0);
    assert(resultado == 89.991);
    std::cout << "✓ Test importe decimal pasado" << std::endl;
}

void test_descuento_alto() {
    // Entrada: 500.0, 75.0 → Salida esperada: 125.0
    double resultado = calcular_descuento(500.0, 75.0);
    assert(resultado == 125.0);
    std::cout << "✓ Test descuento alto pasado" << std::endl;
}

void test_caso_uno() {
    // Entrada: 1.0, 1.0 → Salida esperada: 0.99
    double resultado = calcular_descuento(1.0, 1.0);
    assert(resultado == 0.99);
    std::cout << "✓ Test caso uno pasado" << std::endl;
}

void test_descuento_fraccionario() {
    // Entrada: 100.0, 0.5 → Salida esperada: 99.5
    double resultado = calcular_descuento(100.0, 0.5);
    assert(resultado == 99.5);
    std::cout << "✓ Test descuento fraccionario pasado" << std::endl;
}

void test_descuento_muy_pequeno() {
    // Entrada: 200.0, 0.1 → Salida esperada: 199.8
    double resultado = calcular_descuento(200.0, 0.1);
    assert(resultado == 199.8);
    std::cout << "✓ Test descuento muy pequeño pasado" << std::endl;
}

void test_descuento_negativo() {
    // Entrada: 100.0, -10.0 → Salida esperada: 110.0 (incremento)
    double resultado = calcular_descuento(100.0, -10.0);
    assert(resultado == 110.0);
    std::cout << "✓ Test descuento negativo pasado" << std::endl;
}

void test_descuento_muy_negativo() {
    // Entrada: 50.0, -50.0 → Salida esperada: 75.0
    double resultado = calcular_descuento(50.0, -50.0);
    assert(resultado == 75.0);
    std::cout << "✓ Test descuento muy negativo pasado" << std::endl;
}

void test_descuento_mayor_100() {
    // Entrada: 100.0, 150.0 → Salida esperada: -50.0 (resultado negativo)
    double resultado = calcular_descuento(100.0, 150.0);
    assert(resultado == -50.0);
    std::cout << "✓ Test descuento mayor 100% pasado" << std::endl;
}

void test_descuento_200_por_ciento() {
    // Entrada: 80.0, 200.0 → Salida esperada: -80.0
    double resultado = calcular_descuento(80.0, 200.0);
    assert(resultado == -80.0);
    std::cout << "✓ Test descuento 200% pasado" << std::endl;
}

int main() {
    std::cout << "Ejecutando tests..." << std::endl;
    
    test_caso_basico();
    test_sin_descuento();
    test_descuento_total();
    test_otro_caso();
    test_descuento_50_por_ciento();
    test_descuento_pequeno();
    test_importe_pequeno();
    test_descuento_decimal();
    test_importe_decimal();
    test_descuento_alto();
    test_caso_uno();
    test_descuento_fraccionario();
    test_descuento_muy_pequeno();
    test_descuento_negativo();
    test_descuento_muy_negativo();
    test_descuento_mayor_100();
    test_descuento_200_por_ciento();
    
    std::cout << "Todos los tests pasaron ✓" << std::endl;
    return 0;
}