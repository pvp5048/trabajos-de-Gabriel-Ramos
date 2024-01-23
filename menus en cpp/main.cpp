#include <iostream>
#include <cmath>

using namespace std;

// Funciones para cálculos
double calcularPerimetroCuadrado(double lado) {
    return 4 * lado;
}

double calcularPerimetroCirculo(double radio) {
    return 2 * M_PI * radio;
}

double calcularPerimetroTriangulo(double lado1, double lado2, double lado3) {
    return lado1 + lado2 + lado3;
}

double calcularPerimetroRectangulo(double base, double altura) {
    return 2 * (base + altura);
}

double calcularPerimetroPentagonoRegular(double lado) {
    return 5 * lado;
}

double calcularPerimetroHexagonoRegular(double lado) {
    return 6 * lado;
}

double calcularPerimetroHeptagonoRegular(double lado) {
    return 7 * lado;
}

double calcularPerimetroOctagonoRegular(double lado) {
    return 8 * lado;
}

double calcularPerimetroEneagonoRegular(double lado) {
    return 9 * lado;
}

double calcularPerimetroDecagonoRegular(double lado) {
    return 10 * lado;
}

double calcularAreaCuadrado(double lado) {
    return lado * lado;
}

double calcularAreaCirculo(double radio) {
    return M_PI * pow(radio, 2);
}

double calcularAreaTriangulo(double base, double altura) {
    return 0.5 * base * altura;
}

double calcularAreaRectangulo(double base, double altura) {
    return base * altura;
}

double calcularAreaPentagonoRegular(double lado) {
    return 0.25 * sqrt(5 * (5 + 2 * sqrt(5))) * pow(lado, 2);
}

double calcularAreaHexagonoRegular(double lado) {
    return 1.5 * sqrt(3) * pow(lado, 2);
}

double calcularAreaHeptagonoRegular(double lado) {
    return 0.25 * sqrt(7 * (7 + 3 * sqrt(5))) * pow(lado, 2);
}

double calcularAreaOctagonoRegular(double lado) {
    return 2 * (1 + sqrt(2)) * pow(lado, 2);
}

double calcularAreaEneagonoRegular(double lado) {
    return 0.25 * 9 * pow(lado, 2) / tan(M_PI / 9);
}

double calcularAreaDecagonoRegular(double lado) {
    return 0.25 * 10 * pow(lado, 2) / tan(M_PI / 10);
}

double calcularVolumenCubo(double lado) {
    return pow(lado, 3);
}

double calcularVolumenCilindro(double radio, double altura) {
    return M_PI * pow(radio, 2) * altura;
}

double calcularVolumenPiramide(double base, double altura) {
    return (1.0 / 3) * base * altura;
}

double calcularVolumenParalelepipedo(double base, double altura, double profundidad) {
    return base * altura * profundidad;
}

double calcularVolumenEsfera(double radio) {
    return (4.0 / 3) * M_PI * pow(radio, 3);
}

double calcularVolumenCono(double radio, double altura) {
    return (1.0 / 3) * M_PI * pow(radio, 2) * altura;
}

double calcularVolumenCilindroHueco(double radioExterno, double radioInterno, double altura) {
    return M_PI * altura * (pow(radioExterno, 2) - pow(radioInterno, 2));
}

// Funciones del menú
void menuPerimetros() {
    int opcion;
    double lado, radio, lado1, lado2, lado3, base, altura;

    do {
        cout << "\n//////////Perímetros//////////\n";
        cout << "1.- Perímetro del cuadrado\n";
        cout << "2.- Perímetro del círculo\n";
        cout << "3.- Perímetro del triángulo\n";
        cout << "4.- Perímetro del rectángulo\n";
        cout << "5.- Perímetro del pentágono regular\n";
        cout << "6.- Perímetro del hexágono regular\n";
        cout << "7.- Perímetro del heptágono regular\n";
        cout << "8.- Perímetro del octágono regular\n";
        cout << "9.- Perímetro del eneágono regular\n";
        cout << "10.- Perímetro del decágono regular\n";
        cout << "11.- Volver al menú principal\n";
        cout << "Ingrese la opción: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "Ingrese el lado del cuadrado: ";
                cin >> lado;
                cout << "Perímetro: " << calcularPerimetroCuadrado(lado) << endl;
                break;
            case 2:
                cout << "Ingrese el radio del círculo: ";
                cin >> radio;
                cout << "Perímetro: " << calcularPerimetroCirculo(radio) << endl;
                break;
            case 3:
                cout << "Ingrese los lados del triángulo (lado1 lado2 lado3): ";
                cin >> lado1 >> lado2 >> lado3;
                cout << "Perímetro: " << calcularPerimetroTriangulo(lado1, lado2, lado3) << endl;
                break;
            case 4:
                cout << "Ingrese la base y altura del rectángulo: ";
                cin >> base >> altura;
                cout << "Perímetro: " << calcularPerimetroRectangulo(base, altura) << endl;
                break;
            case 5:
                cout << "Ingrese el lado del pentágono regular: ";
                cin >> lado;
                cout << "Perímetro: " << calcularPerimetroPentagonoRegular(lado) << endl;
                break;
            case 6:
                cout << "Ingrese el lado del hexágono regular: ";
                cin >> lado;
                cout << "Perímetro: " << calcularPerimetroHexagonoRegular(lado) << endl;
                break;
            case 7:
                cout << "Ingrese el lado del heptágono regular: ";
                cin >> lado;
                cout << "Perímetro: " << calcularPerimetroHeptagonoRegular(lado) << endl;
                break;
            case 8:
                cout << "Ingrese el lado del octágono regular: ";
                cin >> lado;
                cout << "Perímetro: " << calcularPerimetroOctagonoRegular(lado) << endl;
                break;
            case 9:
                cout << "Ingrese el lado del eneágono regular: ";
                cin >> lado;
                           cout << "Perímetro: " << calcularPerimetroEneagonoRegular(lado) << endl;
                break;
            case 10:
                cout << "Ingrese el lado del decágono regular: ";
                cin >> lado;
                cout << "Perímetro: " << calcularPerimetroDecagonoRegular(lado) << endl;
                break;
            case 11:
                break;
            default:
                cout << "Opción inválida. Intente de nuevo.\n";
        }
    } while (opcion != 11);
}

void menuAreas() {
    int opcion;
    double lado, radio, base, altura;

    do {
        cout << "\n//////////Áreas//////////\n";
        cout << "1.- Área del cuadrado\n";
        cout << "2.- Área del círculo\n";
        cout << "3.- Área del triángulo\n";
        cout << "4.- Área del rectángulo\n";
        cout << "5.- Área del pentágono regular\n";
        cout << "6.- Área del hexágono regular\n";
        cout << "7.- Área del heptágono regular\n";
        cout << "8.- Área del octágono regular\n";
        cout << "9.- Área del eneágono regular\n";
        cout << "10.- Área del decágono regular\n";
        cout << "11.- Volver al menú principal\n";
        cout << "Ingrese la opción: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "Ingrese el lado del cuadrado: ";
                cin >> lado;
                cout << "Área: " << calcularAreaCuadrado(lado) << endl;
                break;
            case 2:
                cout << "Ingrese el radio del círculo: ";
                cin >> radio;
                cout << "Área: " << calcularAreaCirculo(radio) << endl;
                break;
            case 3:
                cout << "Ingrese la base y altura del triángulo: ";
                cin >> base >> altura;
                cout << "Área: " << calcularAreaTriangulo(base, altura) << endl;
                break;
            case 4:
                cout << "Ingrese la base y altura del rectángulo: ";
                cin >> base >> altura;
                cout << "Área: " << calcularAreaRectangulo(base, altura) << endl;
                break;
            case 5:
                cout << "Ingrese el lado del pentágono regular: ";
                cin >> lado;
                cout << "Área: " << calcularAreaPentagonoRegular(lado) << endl;
                break;
            case 6:
                cout << "Ingrese el lado del hexágono regular: ";
                cin >> lado;
                cout << "Área: " << calcularAreaHexagonoRegular(lado) << endl;
                break;
            case 7:
                cout << "Ingrese el lado del heptágono regular: ";
                cin >> lado;
                cout << "Área: " << calcularAreaHeptagonoRegular(lado) << endl;
                break;
            case 8:
                cout << "Ingrese el lado del octágono regular: ";
                cin >> lado;
                cout << "Área: " << calcularAreaOctagonoRegular(lado) << endl;
                break;
            case 9:
                cout << "Ingrese el lado del eneágono regular: ";
                cin >> lado;
                cout << "Área: " << calcularAreaEneagonoRegular(lado) << endl;
                break;
            case 10:
                cout << "Ingrese el lado del decágono regular: ";
                cin >> lado;
                cout << "Área: " << calcularAreaDecagonoRegular(lado) << endl;
                break;
            case 11:
                break;
            default:
                cout << "Opción inválida. Intente de nuevo.\n";
        }
    } while (opcion != 11);
}

void menuVolumenes() {
    int opcion;
    double lado, radio, base, altura, profundidad, radioExterno, radioInterno;

    do {
        cout << "\n//////////Volúmenes//////////\n";
        cout << "1.- Volumen del cubo\n";
        cout << "2.- Volumen del cilindro\n";
        cout << "3.- Volumen de la pirámide\n";
        cout << "4.- Volumen del paralelepípedo\n";
        cout << "5.- Volumen de la esfera\n";
        cout << "6.- Volumen del cono\n";
        cout << "7.- Volumen del cilindro hueco\n";
        cout << "8.- Volver al menú principal\n";
        cout << "Ingrese la opción: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "Ingrese el lado del cubo: ";
                cin >> lado;
                cout << "Volumen: " << calcularVolumenCubo(lado) << endl;
                break;
            case 2:
                cout << "Ingrese el radio y altura del cilindro: ";
                cin >> radio >> altura;
                cout << "Volumen: " << calcularVolumenCilindro(radio, altura) << endl;
                break;
            case 3:
                cout << "Ingrese la base y altura de la pirámide: ";
                cin >> base >> altura;
                cout << "Volumen: " << calcularVolumenPiramide(base, altura) << endl;
                break;
            case 4:
                cout << "Ingrese la base, altura y profundidad del paralelepípedo: ";
                cin >> base >> altura >> profundidad;
                cout << "Volumen: " << calcularVolumenParalelepipedo(base, altura, profundidad) << endl;
                break;
            case 5:
                cout << "Ingrese el radio de la esfera: ";
                cin >> radio;
                cout << "Volumen: " << calcularVolumenEsfera(radio) << endl;
                break;
            case 6:
                cout << "Ingrese el radio y altura del cono: ";
                cin >> radio >> altura;
                cout << "Volumen: " << calcularVolumenCono(radio, altura) << endl;
                break;
            case 7:
                cout << "Ingrese el radio externo, radio interno y altura del cilindro hueco: ";
                cin >> radioExterno >> radioInterno >> altura;
                cout << "Volumen: " << calcularVolumenCilindroHueco(radioExterno, radioInterno, altura) << endl;
                break;
            case 8:
                break;
            default:
                cout << "Opción inválida. Intente de nuevo.\n";
        }
    } while (opcion != 8);

}
int main() {
    int opcion;

   do {
        cout << "\n//////////Menu Principal//////////\n";
        cout << "1.- Perímetros\n";
        cout << "2.- Áreas\n";
        cout << "3.- Volúmenes\n";
        cout << "0.- Salir del programa\n";
        cout << "Ingrese la opción: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                menuPerimetros();
                break;
            case 2:
                menuAreas();
                break;
            case 3:
                menuVolumenes();
                break;
            case 0:
                cout << "Saliendo del programa. ¡Hasta luego!\n";
                break;
            default:
                cout << "Opción inválida. Intente de nuevo.\n";
        }

    } while (opcion != 0);

    return 0;
}
