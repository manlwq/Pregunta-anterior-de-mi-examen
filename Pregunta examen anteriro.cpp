#include <iostream>
#include "EmpleadoController.h"
#include<vector>
#include<fstream>
#include<cstdlib>
#include <cstring>
#include <string>
#include<Windows.h>
#include <conio.h>
EmpleadoController vectorEmpleado;
using namespace std;
void menu();
void listar();
int main()
{
	menu();
	listar();
}
void menu()
{
	int codigo_get;
	int codigo;
	string nombre;
	string apellidos;
	int cantidad;
	float tarifa;
	string flag;
	do
	{
		codigo_get = vectorEmpleado.get_correlativo();
		cout << "*****Empleado(" << codigo_get << ")*****\n";
		cout << "Codigo:";
		cin >> codigo;
		cin.ignore();

		cout << "Nombres:";
		getline(cin, nombre);
		cout << "Apellidos:";
		getline(cin, apellidos);
		cout << "Cantidad:";
		cin >> cantidad;
		cout << "Tarifa:";
		cin >> tarifa;
		cout << "Continuar(S/s):";
		cin >> flag;
		Empleado objEmpleado(codigo_get, codigo, nombre, apellidos, cantidad, tarifa);
		vectorEmpleado.add(objEmpleado);

		system("cls");

	} while (flag == "S" || flag == "s");
}
void listar()
{

	for (int i = 0; i < vectorEmpleado.size(); i++)
	{
		cout << "*****Empleado(" << i+1 << ")*****\n";
		cout <<"Codigo:" << vectorEmpleado.get(i).get_codigo() << endl;
		cout << "Nombres:" << vectorEmpleado.get(i).get_nombre() << endl;
		cout << "Apellidos:" << vectorEmpleado.get(i).get_apellido() << endl;
		cout << "Cantidad:" << vectorEmpleado.get(i).get_cantidad() << endl;
		cout << "Tarifa:" << vectorEmpleado.get(i).get_tarifa() << endl;
		cout << "Sueldo bruto:" << vectorEmpleado.get(i).sueldo_bruto() << endl;
		cout << "Descuento:" << vectorEmpleado.get(i).descuento() << endl;
		cout << "Sueldo neto:" << vectorEmpleado.get(i).sueldo_neto() << endl;
		cout << "\n";

	}
}