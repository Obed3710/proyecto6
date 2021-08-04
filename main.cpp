#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char** argv) {
	double n1,n2;
	
	cout<<"Ingrese primer numero: ";
	cin>>n1;
	cout<<"Ingrese segundo numero: ";
	cin>>n2;
	
	double suma = n1 + n2;
	cout<<"la suma es: "<<suma<<endl;
	double resta = n1 - n2;
	cout<<"la resta es: "<<resta<<endl;
	double multiplicacion = n1 * n2;
	cout<<"la multiplicacion es: "<<multiplicacion<<endl;
	double division = n1 / n2;
	cout<<"la division es: "<<division<<endl;
	
	return 0;
}
