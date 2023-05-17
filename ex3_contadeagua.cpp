/* Desenvolver um algoritmo para calcular a conta de água. O custo da água varia
dependendo se o consumidor é residencial, comercial ou industrial. A regra para
calcular a conta é:
– Residencial: R$5,00 de taxa mais R$0,05 por m³ gastos;
– Comercial: R$500,00 para os primeiros 80 m³ gastos mais R$0,25 por m³ gastos;
– Industrial: R$800,00 para os primeiros 100 m³ gastos mais R$0,04 por m³ gastos;
O programa deverá ler a conta do cliente, consumo de água por metros cúbicos e o
tipo de consumidor ( residencial, comercial e industrial ) e calcular utilizando funções.
Como resultado, imprima a conta do cliente e o valor real a ser pago pelo mesmo. */

#include <iostream>
using namespace std;

float calcularContaAgua(int tipoConsumidor, int consumoAgua) {
    if (tipoConsumidor == 1) { // Residencial
        return 5.00 + (0.05 * consumoAgua);
    } else if (tipoConsumidor == 2) { // Comercial
        if (consumoAgua <= 80) {
            return 500.00;
        } else {
            return 500.00 + (0.25 * (consumoAgua - 80));
        }
    } else if (tipoConsumidor == 3) { // Industrial
        if (consumoAgua <= 100) {
            return 800.00;
        } else {
            return 800.00 + (0.04 * (consumoAgua - 100));
        }
    } else {
        return 0.0; // Tipo de consumidor inválido
    }
}

int main() {
    int tipoConsumidor, consumoAgua;
    float valorASerPago;
    
    cout << "Digite o consumo de água em metros cubicos: ";
    cin >> consumoAgua;
    
    cout << "Digite o tipo de consumidor (1 = Residencial, 2 = Comercial, 3 = Industrial): ";
    cin >> tipoConsumidor;
    
    valorASerPago = calcularContaAgua(tipoConsumidor, consumoAgua);
    
    if (valorASerPago == 0.0) {
        cout << "Tipo de consumidor inválido." << endl;
    } else {
        cout << "Conta do cliente: R$" << valorASerPago << endl;
    }
    
    return 0;
}
