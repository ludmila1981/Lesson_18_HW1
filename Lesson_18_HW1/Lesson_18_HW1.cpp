#include "Employee.h"


int main()
{
	int N = 5;
	Employee* arr = new Employee[N]
	{
		{"Laavrik", 1983, "director", 20000,"higher"},
		{"Pipko", 1981,"secretary", 18000,"higher"},
		{"Kolotko", 1972,"accountant",18000,"higher"},
		{"Solop",1985,"employee",14000, "medium_special"},
		{"Ovsaynnikova", 1976,"employee", 14000,"medium special"}
	};
	for (int i = 0; i < N; i++)
	{
		arr[i].showInfo();
	}

}



