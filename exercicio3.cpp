#include <iostream>
using namespace std;

float f_custo; 
float c_custo; 

int main()
{
	

	cout << "Entre com o Custo de F�brica: ";
	cin >> f_custo;

	c_custo = (f_custo * .12) + (f_custo * .3) + f_custo;

	cout << "Custo ao consumidor  " << c_custo << endl;

	return 0;
}

