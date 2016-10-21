#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main(){
	int resp;
	char array[10];
	do{
		cout<<"		Laboratorio 1"<<endl;
		cout<<"1)Ejercicio 1\n2)Ejercicio 2\n3)Ejercicio 3\n4)Salir"<<endl;
		cin>> resp;
		if(resp==1){
			cout<<"		Pandigitales"<<endl<<"Ingresar Numero Pandigital"<<endl;
			cin>> array;
			for (int i = 0; i < 10; ++i)
			{
				if(((int)array[i]-48 % 10) !=0){
					cout<<array[i];
				}
			}

		}
		if (resp==2)
		{
			int divisores [10];
			int numero;
			cout<<"		Suma Prima"<<endl<<"Ingresar Numero"<<endl;
			cin>> numero;
			int contador_div = 0;
			for (int i = 0; i < numero; ++i)
			{
				if(i!=0){
					if(numero % i !=0){
						divisores[i] = i;
						contador_div ++;
					}
				}
			}
			int sumaPrima = 0;
			for (int i = 0; i < contador_div-1; ++i)
			{
				cout<<"("<<numero<<"+"<<divisores[i]<<")"<<"/"<<divisores[i]<<" + ";
				if(i!=0){
					//sumaPrima += ((numero+divisores[i])/divisores[i]);
				}
			}
			cout<<endl<<"La suma es: "<< sumaPrima;
		}
		if (resp==3)
		{

		}
	}while(resp!=4);
	return 0;
}


