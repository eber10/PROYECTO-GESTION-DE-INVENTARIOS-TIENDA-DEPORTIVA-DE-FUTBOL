#include<iostream>
#include<string>
#include"funciones.h"
#include"estructuras.h"
#include<iomanip>
using namespace std;

int main()
{   //tam=10 variable utilizado para definir el tamaño, útil para modificar el tamaño de todos los arreglos que utilicen esa variable
	const int tam=10;
	int n=10;
	//productos almacenados inicialmente
	camisetas camiseta[tam]={
		{"barca", "M", "adidas", 40.00, 2},
		{"madrid", "S", "adidas", 40.00, 2},
		{"river", "S", "adidas", 40.00, 2},
		{"psg", "S", "adidas", 40.00, 2},
		{"cristal", "S", "adidas", 40.00, 2},
		{"psg", "M", "adidas", 40.00, 2},
		{"psv", "S", "adidas", 40.00, 2},
		{"roma", "S", "adidas", 40.00, 2},
		{"boca", "M", "adidas", 40.00, 2},
		{"alianza", "M", "adidas", 40.00, 2}
	};
	shorts pantalon_corto[tam]={
		{"rojo", "M", "adidas", 30.00, 2},
		{"negro", "S", "adidas", 30.00, 2},
		{"blanco", "S", "adidas", 30.00, 2},
		{"naranja", "S", "adidas", 30.00, 2},
		{"verde", "S", "adidas", 30.00, 2},
		{"plomo", "M", "adidas", 30.00, 2},
		{"azul", "S", "adidas", 30.00, 2},
		{"negro", "L", "adidas", 30.00, 2},
		{"blanco", "M", "adidas", 30.00, 2},
		{"rojo", "L", "adidas", 30.00, 2}
	};
	zapatillas calzado[tam]={
		{"rojo", 39, "nike", 300.00, 2},
		{"negro", 20, "puma", 500.00, 2},
		{"azul", 40, "puma", 400.00, 2},
		{"rojo", 37, "umbro", 200.00, 2},
		{"verde", 42, "adidas", 200.00, 2},
		{"rosado", 45, "nike", 300.00, 2},
		{"negro", 43, "adidas", 500.00, 2},
		{"plomo", 35, "puma", 400.00, 2},
		{"azul", 30, "nike", 30.00, 2},
		{"verde", 40, "umbro", 30.00, 2}
	};
	canilleras protectores[tam]={
		{"rojo", "M", "adidas", 30.00, 2},
		{"verde", "L", "adidas", 30.00, 2},
		{"azul", "S", "nike", 25.00, 2},
		{"negro", "M", "nike", 35.00, 2},
		{"blanco", "L", "nike", 25.00, 2},
		{"plomo", "S", "adidas", 30.00, 2},
		{"cafe", "L", "nike", 25.00, 2},
		{"morado", "M", "adidas", 35.00, 2},
		{"rosado", "S", "nike", 25.00, 2},
		{"naranja", "L", "adidas", 30.00, 2}
	};
	medias media_larga[tam]={
		{"rojo", "M", "adidas", 15.00, 2},
		{"negro", "S", "adidas", 15.00, 2},
		{"azul", "L", "adidas", 15.00, 2},
		{"blanco", "M", "adidas", 15.00, 2},
		{"verde", "L", "adidas", 15.00, 2},
		{"naranja", "L", "adidas", 15.00, 2},
		{"plomo", "S", "adidas", 15.00, 2},
		{"morado", "M", "adidas", 15.00, 2},
		{"rosado", "M", "adidas", 15.00, 2},
		{"cafe", "M", "adidas", 15.00, 2}
	};
	balones pelota[tam]={
		{"azul", 1, "adidas", 70.00, 2},
		{"blanco", 2, "mibalon", 30.00, 2},
		{"naranja", 3, "nike", 60.00, 2},
		{"verde", 4, "adidas", 75.00, 2},
		{"plomo", 3, "mibalon", 30.00, 2},
		{"blanco", 5, "adidas", 80.00, 2},
		{"cafe", 2, "nike", 50.00, 2},
		{"morado", 1, "adidas", 60.00, 2},
		{"verde", 5, "nike", 65.00, 2},
		{"azul", 4, "adidas", 60.00, 2}
	};
	
	
	int op;
	do
	{
		cout<<"1. mostrar lista de productos"<<endl;
		cout<<"0. salir"<<endl;
		cin>>op;
		switch(op)
		{   //opción 1 que contiene un menú, muestra una lista de productos según la opción a elegir
			case 1: //eber
				int producto;
				do
				{   //menú para mostrar según el tipo de producto a seleccionar
					cout<<"--------------------------------------------------------------------------------------------"<<endl;
					cout<<"1. camisetas"<<endl;
					cout<<"2. shorts"<<endl;
					cout<<"3. zapatillas"<<endl;
					cout<<"4. canilleras"<<endl;
					cout<<"5. medias"<<endl;
					cout<<"6. balones"<<endl;
					cout<<"0. atras"<<endl;
					cin>>producto;
					switch(producto)
					{   //funciones utilizadas para mostrar la lista
						case 1:mostrar_camisetas(camiseta, n);break;
						case 2:mostrar_shorts(pantalon_corto, n);break;
						case 3:mostrar_zapatillas(calzado, n);break;
						case 4:mostrar_canilleras(protectores, n);break;
						case 5:mostrar_medias(media_larga, n);break;
						case 6:mostrar_balones(pelota, n);break;
						default:break;
					}
				}
				while(producto!=0);
				break;
			case 2: //franklin
				break;
			case 3: //franklin
			    break;
			case 4: //eber
			    break;
			case 5: //cristian
			    break;
			case 6: //franklin
			    break;
			case 7: //cristian
			    break;
		}
	}
	while(op!=0);
	
	return 0;
}
