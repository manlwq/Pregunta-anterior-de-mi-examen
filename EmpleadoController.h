#pragma once
#include <iostream>
#include "Empleado.h"
#include<vector>
#include<fstream>
#include<cstdlib>
#include <cstring>
#include <string>
using namespace std;
class EmpleadoController
{
private:
	vector<Empleado> vectorEmpleado;
public:
	void add(Empleado obj)
	{
		vectorEmpleado.push_back(obj);
	}
	Empleado get(int pos)
	{
		return vectorEmpleado[pos];
	}
	int size()
	{
		return vectorEmpleado.size();
	}
	int get_correlativo()
	{
		if (size() == 0)
		{
			return 1;
		}
		else
		{
			return vectorEmpleado[size() - 1].get_codigo_get() + 1;
		}
	}
};
