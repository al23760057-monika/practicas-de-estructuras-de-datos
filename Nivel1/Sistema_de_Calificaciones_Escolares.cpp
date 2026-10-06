`#include <iostream>
int main();

string nombre;
int edad;
float calificacion1, calificacion2, calificacion3;
float promedio;
int opcion;

cin<<"Introduce el nombre">>
  cin<<"Introduce la edad">>
  cin<<"Introduce la calificación 1">>
    cin<<"Introduce la calificación 2">>
    cin<<"Introduce la calificación 3">>

  promedio = calificacion1 + calificacion2 + calificacion3 /3

  cout<<"Tu nombre es: ">>
    cout<<"Tu edad es: ">>
  cout<<"Tu promedio es: ">>

  return 0;


if promedio >= 9;
  cout<<"Excelente ">>
  else
  promedio >= 7;
  cout<<"Aprobado ">>
  else
  promedio >= 6;
 cout<<"Regular ">>
 promedio < 6;
 cout<<"Reprobado ">>


   if edad < 0  && edad > 120;
 cout<<"Edad inválida ">>

   return 1; 


 do {
        cout << "\n===== SISTEMA DE CALIFICACIONES =====" << endl;
        cout << "1. Registrar estudiante" << endl;
        cout << "2. Ver informacion del programa" << endl;
        cout << "3. Salir" << endl;
        cout << "Opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "\n--- Registrar estudiante ---" << endl;
                cout << "Registro de estudiante." << endl;
                break;

            case 2:
                cout << "\n--- Informacion del programa ---" << endl;
                cout << "Sistema de Calificaciones" << endl;
                cout << "Programa para registrar y consultar estudiantes." << endl;
                break;

            case 3:
                cout << "\Salir" << endl;
                break;
        }

    } while (opcion != 3);

    return 0;
}


_____________________________________________________________
#include <iostream>
#include <string>
using namespace std;

int main() {

    int opcion;

    do {
        cout << "\n===== SISTEMA DE CALIFICACIONES =====" << endl;
        cout << "1. Registrar estudiante" << endl;
        cout << "2. Ver informacion del programa" << endl;
        cout << "3. Salir" << endl;
        cout << "Opcion: ";
        cin >> opcion;

        switch (opcion) {

            case 1: {
                string nombre;
                int edad;
                int n;

                float calificacion;
                float suma = 0;
                float promedio;
                float calificacionAlta;
                float calificacionBaja;

                int aprobadas = 0;
                int reprobadas = 0;

                cout << "\n--- Registrar estudiante ---" << endl;

                cout << "Introduce el nombre: ";
                cin >> nombre;

                cout << "Introduce la edad: ";
                cin >> edad;

                // Validar edad
                if (edad < 0 || edad > 120) {
                    cout << "Edad invalida." << endl;
                    break;
                }

                cout << "Cuantas calificaciones deseas registrar? ";
                cin >> n;

                if (n <= 0) {
                    cout << "La cantidad de calificaciones debe ser mayor que 0."
                         << endl;
                    break;
                }

              
                cout << "Introduce la calificacion 1: ";
                cin >> calificacion;

                suma = calificacion;

                calificacionAlta = calificacion;
                calificacionBaja = calificacion;

                if (calificacion >= 6) {
                    aprobadas++;
                } else {
                    reprobadas++;
                }

                
                for (int i = 2; i <= n; i++) {

                    cout << "Introduce la calificacion " << i << ": ";
                    cin >> calificacion;

                    suma += calificacion;

                    
                    if (calificacion >= 6) {
                        aprobadas++;
                    } else {
                        reprobadas++;
                    }

                    if (calificacion > calificacionAlta) {
                        calificacionAlta = calificacion;
                    }

                    if (calificacion < calificacionBaja) {
                        calificacionBaja = calificacion;
                    }
                }

               
                promedio = suma / n;

             
                cout << "\n===== Menú =====" << endl;
                cout << "Tu nombre es: " << nombre << endl;
                cout << "Tu edad es: " << edad << endl;
                cout << "Tu promedio es: " << promedio << endl;

                cout << "Calificacion mas alta: "
                     << calificacionAlta << endl;

                cout << "Calificacion mas baja: "
                     << calificacionBaja << endl;

                cout << "Calificaciones aprobatorias: "
                     << aprobadas << endl;

                cout << "Calificaciones reprobatorias: "
                     << reprobadas << endl;

               
                if (promedio >= 9) {
                    cout << "Excelente" << endl;
                }
                else if (promedio >= 7) {
                    cout << "Aprobado" << endl;
                }
                else if (promedio >= 6) {
                    cout << "Regular" << endl;
                }
                else {
                    cout << "Reprobado" << endl;
                }

                break;
            }

            case 2:
                cout << "\n--- Menu del programa ---" << endl;
                cout << "Sistema de Calificaciones" << endl;
                cout << "Registro del estudiante y "
                     << "calcular su promedio." << endl;
                cout << "Muestra la calificacion mas alta, "
                     << "la mas baja, aprobadas y reprobadas." << endl;
                break;

            case 3:
                cout << "\nSalir" << endl;
                break;

            default:
                cout << "\nOpcion no valida." << endl;
                break;
        }

    } while (opcion != 3);

    return 0;
}


               
                cout << "Introduce la edad: ";
                cin >> edad;

                while (edad < 0 || edad > 30) {
                    cout << "Edad invalida. ";
                    cout << "Introduce una edad entre 0 y 30: ";
                    cin >> edad;
                }


                cout << "Calificaciones a registrar ";
                cin >> n;

                while (n <= 0) {
                    cout << "La cantidad debe ser mayor que 0: ";
                    cin >> n;
                }


                cout << "Ingresa la calificacion : ";
                cin >> calificacion;

               
                while (calificacion < 0 || calificacion > 100) {
                    cout << "Calificacion invalida. ";
                    cout << "Introduce una calificacion entre 0 y 100: ";
                    cin >> calificacion;
                }

                suma = calificacion;

                calificacionAlta = calificacion;
                calificacionBaja = calificacion;

                if (calificacion >= 70) {
                    aprobadas++;
                }
                else {
                    reprobadas++;
                }


            
                for (int i = 2; i <= n; i++) {

                    cout << "Introduce la calificacion "
                         << i << ": ";
                    cin >> calificacion;



 do {

        cout << "\n===== SISTEMA DE CALIFICACIONES =====" << endl;
        cout << "1. Registrar estudiante" << endl;
        cout << "2. Ver informacion del programa" << endl;
        cout << "3. Salir" << endl;
        cout << "4. Registrar otro estudiante" << endl;
        cout << "Opcion: ";
        cin >> opcion;

      
        while (opcion < 1 || opcion > 4) {
            cout << "Opcion invalida." << endl;
            cout << "Introduce una opcion del 1 al 4: ";
            cin >> opcion;
        }

        switch (opcion) {

            case 1: {
                string nombre;
                int edad;
                int n;

                float calificacion;
                float suma = 0;
                float promedio;
                float calificacionAlta;
                float calificacionBaja;

                int aprobadas = 0;
                int reprobadas = 0;


________7_________

#include <iostream>
#include <string>

using namespace std;


void mostrarMenu();

int leerEntero(string mensaje, int min, int max);

float leerCalificacion(int numero);

float calcularPromedio(float suma, int n);

string obtenerEstado(float promedio);

void registrarEstudiante();


int main() {

    int opcion;

    do {

        mostrarMenu();

        opcion = leerEntero("Opcion: ", 1, 4);

        switch (opcion) {

            case 1:
                registrarEstudiante();
                break;

            case 2:
                cout << "\n--- INFORMACION DEL PROGRAMA ---" << endl;
                cout << "Sistema de Calificaciones" << endl;
                cout << "Este programa permite registrar un estudiante" << endl;
                cout << "y calcular su promedio." << endl;
                break;

            case 3:
                cout << "\nSaliendo del programa..." << endl;
                break;

            case 4:
                registrarEstudiante();
                break;
        }

    } while (opcion != 3);

    return 0;
}




void mostrarMenu() {

    cout << "\n====================================" << endl;
    cout << "     SISTEMA DE CALIFICACIONES" << endl;
    cout << "====================================" << endl;
    cout << "1. Registrar estudiante" << endl;
    cout << "2. Ver informacion del programa" << endl;
    cout << "3. Salir" << endl;
    cout << "4. Registrar otro estudiante" << endl;
    cout << "====================================" << endl;
}



int leerEntero(string mensaje, int min, int max) {

    int valor;

    cout << mensaje;
    cin >> valor;

    while (valor < min || valor > max) {

        cout << "Valor invalido." << endl;
        cout << "Introduce un valor entre "
             << min << " y " << max << ": ";

        cin >> valor;
    }

    return valor;
}



float leerCalificacion(int numero) {

    float calificacion;

    cout << "Introduce la calificacion "
         << numero << ": ";

    cin >> calificacion;

    while (calificacion < 0 || calificacion > 10) {

        cout << "Calificacion invalida." << endl;

        cout << "Introduce una calificacion "
             << "entre 0 y 10: ";

        cin >> calificacion;
    }

    return calificacion;
}




float calcularPromedio(float suma, int n) {

    return suma / n;
}




string obtenerEstado(float promedio) {

    if (promedio >= 9) {
        return "EXCELENTE";
    }
    else if (promedio >= 7) {
        return "APROBADO";
    }
    else if (promedio >= 6) {
        return "REGULAR";
    }
    else {
        return "REPROBADO";
    }
}




void registrarEstudiante() {

    string nombre;
    int edad;
    int n;

    float calificacion;
    float suma = 0;
    float promedio;

    float calificacionAlta;
    float calificacionBaja;

    int aprobadas = 0;
    int reprobadas = 0;


    cout << "\n====================================" << endl;
    cout << "       REGISTRAR ESTUDIANTE" << endl;
    cout << "====================================" << endl;


   

    cout << "Introduce el nombre: ";
    cin >> nombre;

    // Edad de 0 a 30
    edad = leerEntero(
        "Introduce la edad: ",
        0,
        30
    );



    n = leerEntero(
        "Cuantas calificaciones deseas registrar: ",
        1,
        100
    );




    calificacion = leerCalificacion(1);

    suma = calificacion;

    calificacionAlta = calificacion;
    calificacionBaja = calificacion;


    if (calificacion >= 6) {
        aprobadas++;
    }
    else {
        reprobadas++;
    }



    for (int i = 2; i <= n; i++) {

        calificacion = leerCalificacion(i);

        suma += calificacion;


        // Contar aprobadas y reprobadas
        if (calificacion >= 6) {
            aprobadas++;
        }
        else {
            reprobadas++;
        }


        // Calificacion mas alta
        if (calificacion > calificacionAlta) {
            calificacionAlta = calificacion;
        }


        // Calificacion mas baja
        if (calificacion < calificacionBaja) {
            calificacionBaja = calificacion;
        }
    }


 

    promedio = calcularPromedio(suma, n);



    cout << "\n====================================" << endl;
    cout << "           RESULTADOS" << endl;
    cout << "====================================" << endl;

    cout << "Nombre: " << nombre << endl;

    cout << "Edad: " << edad << endl;

    cout << "Promedio: " << promedio << endl;

    cout << "Calificacion mas alta: "
         << calificacionAlta << endl;

    cout << "Calificacion mas baja: "
         << calificacionBaja << endl;

    cout << "Calificaciones aprobatorias: "
         << aprobadas << endl;

    cout << "Calificaciones reprobatorias: "
         << reprobadas << endl;

    cout << "Estado: "
         << obtenerEstado(promedio) << endl;

    cout << "====================================" << endl;
}

