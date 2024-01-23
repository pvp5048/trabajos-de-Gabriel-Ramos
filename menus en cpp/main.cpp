#include <iostream>
#include <cmath>

using namespace std;

// Funciones para c�lculos
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

// Funciones del men�
void menuPerimetros() {
    int opcion;
    double lado, radio, lado1, lado2, lado3, base, altura;

    do {
        cout << "\n//////////Per�metros//////////\n";
        cout << "1.- Per�metro del cuadrado\n";
        cout << "2.- Per�metro del c�rculo\n";
        cout << "3.- Per�metro del tri�ngulo\n";
        cout << "4.- Per�metro del rect�ngulo\n";
        cout << "5.- Per�metro del pent�gono regular\n";
        cout << "6.- Per�metro del hex�gono regular\n";
        cout << "7.- Per�metro del hept�gono regular\n";
        cout << "8.- Per�metro del oct�gono regular\n";
        cout << "9.- Per�metro del ene�gono regular\n";
        cout << "10.- Per�metro del dec�gono regular\n";
        cout << "11.- Volver al men� principal\n";
        cout << "Ingrese la opci�n: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "Ingrese el lado del cuadrado: ";
                cin >> lado;
                cout << "Per�metro: " << calcularPerimetroCuadrado(lado) << endl;
                break;
            case 2:
                cout << "Ingrese el radio del c�rculo: ";
                cin >> radio;
                cout << "Per�metro: " << calcularPerimetroCirculo(radio) << endl;
                break;
            case 3:
                cout << "Ingrese los lados del tri�ngulo (lado1 lado2 lado3): ";
                cin >> lado1 >> lado2 >> lado3;
                cout << "Per�metro: " << calcularPerimetroTriangulo(lado1, lado2, lado3) << endl;
                break;
            case 4:
                cout << "Ingrese la base y altura del rect�ngulo: ";
                cin >> base >> altura;
                cout << "Per�metro: " << calcularPerimetroRectangulo(base, altura) << endl;
                break;
            case 5:
                cout << "Ingrese el lado del pent�gono regular: ";
                cin >> lado;
                cout << "Per�metro: " << calcularPerimetroPentagonoRegular(lado) << endl;
                break;
            case 6:
                cout << "Ingrese el lado del hex�gono regular: ";
                cin >> lado;
                cout << "Per�metro: " << calcularPerimetroHexagonoRegular(lado) << endl;
                break;
            case 7:
                cout << "Ingrese el lado del hept�gono regular: ";
                cin >> lado;
                cout << "Per�metro: " << calcularPerimetroHeptagonoRegular(lado) << endl;
                break;
            case 8:
                cout << "Ingrese el lado del oct�gono regular: ";
                cin >> lado;
                cout << "Per�metro: " << calcularPerimetroOctagonoRegular(lado) << endl;
                break;
            case 9:
                cout << "Ingrese el lado del ene�gono regular: ";
                cin >> lado;
                           cout << "Per�metro: " << calcularPerimetroEneagonoRegular(lado) << endl;
                break;
            case 10:
                cout << "Ingrese el lado del dec�gono regular: ";
                cin >> lado;
                cout << "Per�metro: " << calcularPerimetroDecagonoRegular(lado) << endl;
                break;
            case 11:
                break;
            default:
                cout << "Opci�n inv�lida. Intente de nuevo.\n";
        }
    } while (opcion != 11);
}

void menuAreas() {
    int opcion;
    double lado, radio, base, altura;

    do {
        cout << "\n//////////�reas//////////\n";
        cout << "1.- �rea del cuadrado\n";
        cout << "2.- �rea del c�rculo\n";
        cout << "3.- �rea del tri�ngulo\n";
        cout << "4.- �rea del rect�ngulo\n";
        cout << "5.- �rea del pent�gono regular\n";
        cout << "6.- �rea del hex�gono regular\n";
        cout << "7.- �rea del hept�gono regular\n";
        cout << "8.- �rea del oct�gono regular\n";
        cout << "9.- �rea del ene�gono regular\n";
        cout << "10.- �rea del dec�gono regular\n";
        cout << "11.- Volver al men� principal\n";
        cout << "Ingrese la opci�n: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "Ingrese el lado del cuadrado: ";
                cin >> lado;
                cout << "�rea: " << calcularAreaCuadrado(lado) << endl;
                break;
            case 2:
                cout << "Ingrese el radio del c�rculo: ";
                cin >> radio;
                cout << "�rea: " << calcularAreaCirculo(radio) << endl;
                break;
            case 3:
                cout << "Ingrese la base y altura del tri�ngulo: ";
                cin >> base >> altura;
                cout << "�rea: " << calcularAreaTriangulo(base, altura) << endl;
                break;
            case 4:
                cout << "Ingrese la base y altura del rect�ngulo: ";
                cin >> base >> altura;
                cout << "�rea: " << calcularAreaRectangulo(base, altura) << endl;
                break;
            case 5:
                cout << "Ingrese el lado del pent�gono regular: ";
                cin >> lado;
                cout << "�rea: " << calcularAreaPentagonoRegular(lado) << endl;
                break;
            case 6:
                cout << "Ingrese el lado del hex�gono regular: ";
                cin >> lado;
                cout << "�rea: " << calcularAreaHexagonoRegular(lado) << endl;
                break;
            case 7:
                cout << "Ingrese el lado del hept�gono regular: ";
                cin >> lado;
                cout << "�rea: " << calcularAreaHeptagonoRegular(lado) << endl;
                break;
            case 8:
                cout << "Ingrese el lado del oct�gono regular: ";
                cin >> lado;
                cout << "�rea: " << calcularAreaOctagonoRegular(lado) << endl;
                break;
            case 9:
                cout << "Ingrese el lado del ene�gono regular: ";
                cin >> lado;
                cout << "�rea: " << calcularAreaEneagonoRegular(lado) << endl;
                break;
            case 10:
                cout << "Ingrese el lado del dec�gono regular: ";
                cin >> lado;
                cout << "�rea: " << calcularAreaDecagonoRegular(lado) << endl;
                break;
            case 11:
                break;
            default:
                cout << "Opci�n inv�lida. Intente de nuevo.\n";
        }
    } while (opcion != 11);
}

void menuVolumenes() {
    int opcion;
    double lado, radio, base, altura, profundidad, radioExterno, radioInterno;

    do {
        cout << "\n//////////Vol�menes//////////\n";
        cout << "1.- Volumen del cubo\n";
        cout << "2.- Volumen del cilindro\n";
        cout << "3.- Volumen de la pir�mide\n";
        cout << "4.- Volumen del paralelep�pedo\n";
        cout << "5.- Volumen de la esfera\n";
        cout << "6.- Volumen del cono\n";
        cout << "7.- Volumen del cilindro hueco\n";
        cout << "8.- Volver al men� principal\n";
        cout << "Ingrese la opci�n: ";
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
                cout << "Ingrese la base y altura de la pir�mide: ";
                cin >> base >> altura;
                cout << "Volumen: " << calcularVolumenPiramide(base, altura) << endl;
                break;
            case 4:
                cout << "Ingrese la base, altura y profundidad del paralelep�pedo: ";
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
                cout << "Opci�n inv�lida. Intente de nuevo.\n";
        }
    } while (opcion != 8);

}
int main() {
    int opcion;

   do {
        cout << "\n//////////Menu Principal//////////\n";
        cout << "1.- Per�metros\n";
        cout << "2.- �reas\n";
        cout << "3.- Vol�menes\n";
        cout << "0.- Salir del programa\n";
        cout << "Ingrese la opci�n: ";
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
                cout << "Saliendo del programa. �Hasta luego!\n";
                break;
            default:
                cout << "Opci�n inv�lida. Intente de nuevo.\n";
        }

    } while (opcion != 0);

    return 0;
}
