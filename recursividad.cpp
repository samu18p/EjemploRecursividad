/*
Funcion que se llama asi misma
Tiene un caso base y un caso general
*/
#include <iostream>
#include <conio.h>
using namespace std;

void menu();
int factorialNum(int);

int main(){
	char opcion;
	int numero;
	do{
		menu();
		cin>>opcion;
		fflush(stdin);
	    switch(opcion){
		    case '1':
		    	cout<<"Ingresar un numero: "; cin>>numero;
		    	cout<<"Factorial de "<<"["<<numero<<"]:"<<factorialNum(numero)<<endl;
    			break;
	    	case '2':
		    	cout<<"\nSalio del programa"<<endl;
				break;
		default:
			cout<<"\nOpcion invalida"<<endl;
			break;
    	}
    	cout<<"\nPresione una tecla para continual"<<endl;
    	getch();
    	system("cls");
    }while(opcion !='2');
	
	
	getch();
	return 0;
}

void menu(){
	cout<<"MENU"<<endl
	    <<"1.Obtener factorial de un numero"<<endl
	    <<"2.Salir del programa"<<endl
	    <<"Ingresar el numero de opcion: ";
}

int factorialNum(int num){
	if(num==0){
		num=1;
	}else{
		num = num * factorialNum(num-1);
	}
	return num;
}
