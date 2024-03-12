#include <stdio.h>

int main() {
    // Definir las tasas de cambio
    float tasa_quetzal_dolar = 7.75;
    float tasa_quetzal_euro = 9.20;

    // Variables para almacenar la cantidad de dinero y la moneda de origen
    float cantidad;
    int moneda_origen;

    // Solicitar al usuario que ingrese la cantidad de dinero y la moneda de origen
    printf("Ingrese la cantidad de dinero: ");
    scanf("%f", &cantidad);

    printf("Ingrese la moneda de origen:\n");
    printf("1. Quetzales\n");
    printf("2. Dólares estadounidenses\n");
    printf("3. Euros\n");
    scanf("%d", &moneda_origen);

    // Realizar la conversión de moneda
    float resultado;
    switch (moneda_origen) {
        case 1: // Quetzales a Dólares estadounidenses
            resultado = cantidad / tasa_quetzal_dolar;
            printf("%.2f Quetzales son %.2f Dólares estadounidenses\n", cantidad, resultado);
            break;
        case 2: // Dólares estadounidenses a Quetzales
            resultado = cantidad * tasa_quetzal_dolar;
            printf("%.2f Dólares estadounidenses son %.2f Quetzales\n", cantidad, resultado);
            break;
        case 3: // Quetzales a Euros
            resultado = cantidad / tasa_quetzal_euro;
            printf("%.2f Quetzales son %.2f Euros\n", cantidad, resultado);
            break;
        default:
            printf("Opción no válida\n");
    }

    return 0;
}
