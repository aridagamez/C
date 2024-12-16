#include <iostream>
#include <stdlib.h>
#include <stdio.h>
typedef struct {
	long int matricula;
	char name[20];
	float prom;
}alumno;
using namespace std; // a puntero de tipo struct alumno
int Menu();
void mostrar(alumno a);
int main()
{
	int opc;
	alumno a;

	do
	{
	system("cls");
	opc=Menu();
	switch(opc)
	{
			case 1:
			cout<<"ALUMNO"<<endl;
			do{

			cout<<"Escribe la matricula: "<<endl;
			cin>>a.matricula;

			}while (a.matricula < 0);

			cout<<"Escribe el nombre: "<<endl;
			cin.ignore();
			cin.getline(a.name, 20, '\n');

			do{
			cout<<"Escribe el promedio: "<<endl;
			cin>>a.prom;
				}while(a.prom < 0 or a.prom > 100);
			break;
			case 2:
				mostrar(a); //muestra los datos de la estructura
				break;
			case 3:
				cout<<"Adios"<<endl;
				break;
			default:
				cout<<"Esa opcion no existe."<<endl;
				break;
		}
		system("pause");
	}while (opc!=3);

	return 0;
}

void mostrar(alumno a)
{
	cout<<"INFORMACION DEL ALUMNO."<<endl;
	cout<<"Matricula: "<<a.matricula<<endl;
	cout<<"Nombre: "<<a.name<<endl;
	cout<<"Promedio: "<<a.prom<<endl;
	if(a.prom == 100)
	{
		cout<<"FELICIDADES..."<<endl;
	}

}

int Menu()
{
	int opc;
	cout<<"MENU"<<endl;
	cout<<"1. Insertar alumno."<<endl;
	cout<<"2. Mostrar alumno."<<endl;
	cout<<"3. Salir."<<endl;
	cout<<"Dame la opcion:"<<endl;
	cin>>opc;
	return opc;
}
