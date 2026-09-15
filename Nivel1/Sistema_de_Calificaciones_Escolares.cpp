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





   

  
