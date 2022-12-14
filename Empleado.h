#pragma once
#pragma once
#include<iostream>
using namespace std;
class Empleado
{
private:
	int codigo_get;
	int codigo;
	string nombre;
	string apellido;
	int cantidad;
	float tarifa;
public:
	Empleado();
	Empleado(int,int, string, string, int, float);
	~Empleado();
	void set_codigo_get(int);
	void set_codigo(int);
	void set_nombre(string);
	void set_apellido(string);
	void set_cantidad(int);
	void set_tarifa(float);

	int get_codigo_get();
	int get_codigo();
	string get_nombre();
	string get_apellido();
	int get_cantidad();
	float get_tarifa();
	float sueldo_bruto();
	float descuento();
	float sueldo_neto();
};
Empleado::Empleado()
{

}
Empleado::Empleado(int codigo_get,int codigo, string nombre, string apellido, int cantidad, float tarifa)
{
	this->codigo_get = codigo_get;
	this->codigo = codigo;
	this->nombre = nombre;
	this->apellido = apellido;
	this->cantidad = cantidad;
	this->tarifa = tarifa;
}
Empleado::~Empleado()
{

}
void Empleado::set_codigo_get(int codigo_get)
{
	this->codigo_get = codigo_get;

}
void Empleado::set_codigo(int codigo)
{
	this->codigo = codigo;
}
void Empleado::set_nombre(string nombre)
{
	this->nombre = nombre;
}
void Empleado::set_apellido(string apellido)
{
	this->apellido = apellido;
}
void Empleado::set_cantidad(int cantidad)
{
	this->cantidad = cantidad;
}
void Empleado::set_tarifa(float tarifa)
{
	this->tarifa = tarifa;
}
int Empleado::get_codigo_get()
{
	return this->codigo_get;
}
int Empleado::get_codigo()
{
	return this->codigo;
}
string Empleado::get_nombre()
{
	return this->nombre;
}
string Empleado::get_apellido()
{
	return this->apellido;
}
int Empleado::get_cantidad()
{
	return this->cantidad;
}
float Empleado::get_tarifa()
{
	return this->tarifa;
}
float Empleado::sueldo_bruto()
{
	return this->cantidad * this->tarifa;
}
float Empleado::descuento()
{
	if (sueldo_bruto() > 3500)
	{
		return this->sueldo_bruto() * 0.15;
	}
	else
	{
		return this->sueldo_bruto() * 0.11;
	}
}
float Empleado::sueldo_neto()
{
	return this->sueldo_bruto() - this->descuento();
}
