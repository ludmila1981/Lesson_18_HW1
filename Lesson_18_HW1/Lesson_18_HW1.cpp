#include "Employee.h"


int main()
{
	int N = 5;
	Employee* arr = new Employee[N]
	{
		{"Laavrik", 45, "director", 20000,"higher"},
		{"Pipko", 35, "secretary", 18000,"higher"},
		{"Kolotko", 65, "accountant",18000,"higher"},
		{"Solop", 63 ,"employee",14000, "medium_special"},
		{"Ovsaynnikova", 56,"employee", 14000,"medium special"}
	};
	for (int i = 0; i < N; i++)
	{
		arr[i].showInfo();
	}
	cout << "===============================================\n\n";
	int  age = 0;
	for (int i = 0; i < N; i++)
	{
		if (arr[i].age > 60) {
			arr[i].showInfo();
			age++;
		}
	}
	cout << "Age: " << age << endl;

}



