#include<iostream>
#include<string>
#include"funciones.h"
#include"estructuras.h"
#include<iomanip>
#include<conio.h>
using namespace std;

int main() {   //tam=10 variable utilizado para definir el tamaño, útil para modificar el tamaño de todos los arreglos que utilicen esa variable
    const int tam=100;
	int n1=10, n2=10, n3=10, n4=10, n5=10, n6=10;
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
		{"azul", 30, "nike", 300.00, 2},
		{"verde", 40, "umbro", 300.00, 2}
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
	
	
	int opcion;
	bool salir = false;
	
	do{
		cout << "---------------------------------------------------------------------" << endl;
        cout << "                              MENU PRINCIPAL                         " << endl;
        cout << "---------------------------------------------------------------------" << endl;
        cout << "1. Mostrar lista de productos" << endl;
        cout << "2. Agregar producto" << endl;
        cout << "3. Eliminar un producto" << endl;
        cout << "4. Actualizar datos de producto" << endl;
        cout << "0. Salir" << endl;
        cout << "\n___________________________________________________________________" << endl;
        cout << "\nIngrese su opción: ";
        cin  >> opcion;
        cout << endl;

		switch(opcion) {   //opción 1 que contiene un menú, muestra una lista de productos según la opción a elegir
		//  EBER 
			case 1: {
				int producto;
				do {   //menú para mostrar segun el tipo de producto a seleccionar
				    cout << "---------------------------------------------------------------------" << endl;
                    cout << "                       LISTA DE PRODUCTOS                            " << endl;
                    cout << "---------------------------------------------------------------------" << endl;
                    cout << "1. Camisetas" << endl;
                    cout << "2. Shorts" << endl;
                    cout << "3. Zapatillas" << endl;
                    cout << "4. Canilleras" << endl;
                    cout << "5. Medias" << endl;
                    cout << "6. Balones" << endl;
                    cout << "0. Atras" << endl;
                    cout << endl;
                    cout << "\nIngrese su opcion: ";
					cin  >>producto;
					cout << endl;
					
					switch(producto) {   //funciones utilizadas para mostrar la lista
						case 1:mostrar_camisetas(camiseta, n1);break;
						case 2:mostrar_shorts(pantalon_corto, n2);break;
						case 3:mostrar_zapatillas(calzado, n3);break;
						case 4:mostrar_canilleras(protectores, n4);break;
						case 5:mostrar_medias(media_larga, n5);break;
						case 6:mostrar_balones(pelota, n6);break;
						case 0:break; // Permite salir del sub-menu y volver al menu principal
						default: cout << "Opcion invalida. Por favor, seleccione una opcion valida." << endl;
                    }
				}
				while(producto!=0);
				break;
			}
		// FRANKLIN 
			case 2: {
				int op;
				do {  
				    cout << "---------------------------------------------------------------------" << endl;
                    cout << "                      AGREGAR PRODUCTO                               " << endl;
                    cout << "---------------------------------------------------------------------" << endl;
                    cout << "Seleccione el producto a agregar" << endl;
                    cout << "1. Camisetas" << endl;
                    cout << "2. Shorts" << endl;
                    cout << "3. Zapatillas" << endl;
                    cout << "4. Canilleras" << endl;
                    cout << "5. Medias" << endl;
                    cout << "6. Balones" << endl;
                    cout << "0. Atras" << endl;
                    cout << endl;
                    cout << "\nIngrese su opcion: "; 
					cin>>op;
					
					switch(op) {   
						case 1:agregar_camisetas(camiseta, n1); break;
						case 2:agregar_shorts(pantalon_corto, n2); break;
						case 3:agregar_zapatillas(calzado, n3); break;
						case 4:agregar_canilleras(protectores, n4); break;
						case 5:agregar_medias(media_larga, n5); break;
						case 6:agregar_balones(pelota, n6); break;
						case 0: break; // Permite salir del sub-menú y volver al menú principal
                        default: cout << "Opcion invalida. Por favor, seleccione una opcion valida." << endl;
                        break;
					}
				}
				while(op!=0); 
				break;
			}
			// frank
			case 3:{
				int eliminar;//opcion para escoger el producto que se desea eliminar 
				do { //sub-menu de los productos  
				    cout << "---------------------------------------------------------------------" << endl;
                    cout << "                      LISTA DE  PRODUCTOS                               " << endl;
                    cout << "---------------------------------------------------------------------" << endl;
                    cout << "Seleccione el producto" << endl;
                    cout << "1. Camisetas" << endl;
                    cout << "2. Shorts" << endl;
                    cout << "3. Zapatillas" << endl;
                    cout << "4. Canilleras" << endl;
                    cout << "5. Medias" << endl;
                    cout << "6. Balones" << endl;
                    cout << "0. Atras" << endl;
                    cout << endl;
                    cout << "\nIngrese su opcion: "; 
					cin>>eliminar;
					switch(eliminar) 
					{   
						case 1:
						    mostrar_camisetas(camiseta, n1);
						    eliminar_camisetas(camiseta, n1); break;
						case 2: 
							mostrar_shorts(pantalon_corto, n2); 
							eliminar_shorts(pantalon_corto, n2); break;
						case 3:
							mostrar_zapatillas(calzado, n3);	
							eliminar_zapatillas(calzado, n3); break;
						case 4:
							mostrar_canilleras(protectores, n4);
							eliminar_canilleras(protectores, n4); break;
						case 5:
							mostrar_medias(media_larga, n5);
							eliminar_medias(media_larga, n5); break;
						case 6:
							mostrar_balones(pelota, n6);
							eliminar_balones(pelota, n6); break;
						case 0: break; // Permite salir del sub-menu y volver al menu principal
                        default: cout << "Opcion invalida. Por favor, seleccione una opcion valida." << endl;
                        break;
					}
				}
				while(eliminar!=0); 
				break;
			}
		// CRISTIAN 
			case 4:{ 
			    int producto_actualizar;
			    bool indice_valido = false;
			    do { 
			        mostar_menu_principal( );
                    cout << "\nSeleccione el producto que desea actualizar: ";
                    cin  >> producto_actualizar;

                    if (producto_actualizar >= 1 && producto_actualizar <= 6){
                        int indice_actualizar;
                        switch (producto_actualizar){
                            case 1: {submenu_actualizar_camisetas(camiseta,n1);break;}
                            case 2: {submenu_actualizar_shorts(pantalon_corto,n2);break;}
                            case 3: {submenu_actualizar_zapatillas(calzado,n3);break;}
                            case 4: {submenu_actualizar_canilleras(protectores,n4);break;}
                            case 5: {submenu_actualizar_medias(media_larga,n5);break;}
                            case 6: {submenu_actualizar_balones(pelota,n6);break;}
                            default: break;}
                    } else {
                    	cout << "_______________________________________________________________________" << endl;
                        cout << "\n                            OPCION INVALIDA                          " << endl;
				        cout << "\n                    POR FAVOR INREGESE UNA OPCION VALIDA             " << endl;    
                    }
                } while (producto_actualizar != 0);
                break;
            }
            case 0: {
            	cout << "\n______________________________________________________________________" << endl;
                cout << "\n    S A L I E N D O       D E L      P R O G R A M A  .    .   .     " << endl;
                salir = true; // Marca la salida del programa
                break;
            }
            default: {
            	cout << "\n_____________________________________________________________________" << endl;
                cout << "\n                            OPCION INVALIDA                          " << endl;
				cout << "\n                    POR FAVOR INREGESE UNA OPCION VALIDA             " << endl;
                break;
            }
        }
    } while (!salir);
    
    getch();
    return 0;
}
