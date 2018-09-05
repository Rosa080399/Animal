#include <iostream>
using namespace std;

struct Animal
{
	char nombre[20];
	int edad;
	struct Animal *ptr;
} animal1, animal2, *inicio;

int main (int argc, char** argv)
{
	inicio=&animal1;
	inicio->ptr=&animal2;
	cout << "Edad de animal 1 ";
	cin >> inicio->edad;
	cout << "Edad de animal 1 ";
	fflush(stdin);
	cin.getline(inicio->nombre, 20, '\n');
	
	cout << "Edad de animal 2 ";
	cin >> inicio->edad;
	cout << "Edad de animal 2 ";
	fflush(stdin);
	cin.getline(inicio->nombre, 20, '\n');
	
	int totaldeanimales=10;
	struct Animal animal3;
	
	inicio->ptr=&animal3;
	//realinear a animal 3
	cout << "Edad de animal 3 ";
	cin >> inicio->edad;
	cout << "Edad de animal 3 ";
	fflush(stdin);
	cin.getline((inicio+2)->nombre, 20, '\n');
	
	cout << "Direccion inicio" << &inico << endl;
	cout << "Direccion animal1" << &animal1 << endl;
	cout << "Direccion animal2" << &animal2 << endl;
	cout << "Edad que se guardo 1" << inicio->edad << endl;
	cout << "Nombre que se guardo " << inicio->nombre << endl;
	cout << "Edad que se guardo 2" << (inicio+1)->edad << endl;
	cout << "Nombre que se guardo " << (inicio+1)->nombre << endl;
	
	
	cin.get ();
	return 0;
}
