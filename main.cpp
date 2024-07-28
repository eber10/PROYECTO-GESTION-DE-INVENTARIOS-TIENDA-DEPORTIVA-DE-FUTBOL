#include<iostream>
#include<string>
#include"funciones.h"
#include"estructuras.h"
#include<iomanip>
#include<conio.h>
using namespace std;

int main() {   //tam=10 variable utilizado para definir el tamaño, útil para modificar el tamaño de todos los arreglos que utilicen esa variable
    const int tam=100;
    const int tem=100;
	int n1=10, n2=10, n3=10, n4=10, n5=10, n6=10, v1=0;
	int cont1=0, cont2=0, cont3=0, cont4=0, cont5=0, cont6=0;
	//productos almacenados inicialmente
	camisetas camiseta[tam]={
		{"barca", "M", "adidas", 40.00, 10},  
		{"madrid", "S", "adidas", 40.00, 10},
		{"river", "S", "adidas", 40.00, 10},
		{"psg", "S", "adidas", 40.00, 10},
		{"cristal", "S", "adidas", 40.00, 10},
		{"psg", "M", "adidas", 40.00, 10},
		{"psv", "S", "adidas", 40.00, 10},
		{"roma", "S", "adidas", 40.00, 10},
		{"boca", "M", "adidas", 40.00, 10},
		{"alianza", "M", "adidas", 40.00, 10}
	};
	shorts pantalon_corto[tam]={
		{"rojo", "M", "adidas", 30.00, 10},
		{"negro", "S", "adidas", 30.00, 10},
		{"blanco", "S", "adidas", 30.00, 10},
		{"naranja", "S", "adidas", 30.00, 10},
		{"verde", "S", "adidas", 30.00, 10},
		{"plomo", "M", "adidas", 30.00, 10},
		{"azul", "S", "adidas", 30.00, 10},
		{"negro", "L", "adidas", 30.00, 10},
		{"blanco", "M", "adidas", 30.00, 10},
		{"rojo", "L", "adidas", 30.00, 10}
	};
	zapatillas calzado[tam]={
		{"rojo", 39, "nike", 300.00, 10},
		{"negro", 20, "puma", 500.00, 10},
		{"azul", 40, "puma", 400.00, 10},
		{"rojo", 37, "umbro", 200.00, 10},
		{"verde", 42, "adidas", 200.00, 10},
		{"rosado", 45, "nike", 300.00, 10},
		{"negro", 43, "adidas", 500.00, 10},
		{"plomo", 35, "puma", 400.00, 10},
		{"azul", 30, "nike", 300.00, 10},
		{"verde", 40, "umbro", 300.00, 10}
	};
	canilleras protectores[tam]={
		{"rojo", "M", "adidas", 30.00, 10},
		{"verde", "L", "adidas", 30.00, 10},
		{"azul", "S", "nike", 25.00, 10},
		{"negro", "M", "nike", 35.00, 10},
		{"blanco", "L", "nike", 25.00, 10},
		{"plomo", "S", "adidas", 30.00, 10},
		{"cafe", "L", "nike", 25.00, 10},
		{"morado", "M", "adidas", 35.00, 10},
		{"rosado", "S", "nike", 25.00, 10},
		{"naranja", "L", "adidas", 30.00, 10}
	};
	medias media_larga[tam]={
		{"rojo", "M", "adidas", 15.00, 10},
		{"negro", "S", "adidas", 15.00, 10},
		{"azul", "L", "adidas", 15.00, 10},
		{"blanco", "M", "adidas", 15.00, 10},
		{"verde", "L", "adidas", 15.00, 10},
		{"naranja", "L", "adidas", 15.00, 10},
		{"plomo", "S", "adidas", 15.00, 10},
		{"morado", "M", "adidas", 15.00, 10},
		{"rosado", "M", "adidas", 15.00, 10},
		{"cafe", "M", "adidas", 15.00, 10}
	};
	balones pelota[tam]={
		{"azul", 1, "adidas", 70.00, 10},
		{"blanco", 2, "mibalon", 30.00, 10},
		{"naranja", 3, "nike", 60.00, 10},
		{"verde", 4, "adidas", 75.00, 10},
		{"plomo", 3, "mibalon", 30.00, 10},
		{"blanco", 5, "adidas", 80.00, 10},
		{"cafe", 2, "nike", 50.00, 10},
		{"morado", 1, "adidas", 60.00, 10},
		{"verde", 5, "nike", 65.00, 10},
		{"azul", 4, "adidas", 60.00, 10}
	};
	
	ventas registrar[tem];//arreglo para controlar las ventas realizadas.
    double total=0;//variable util para sumar el total de ventas realizadas.
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
        cout << "5. Ordenar alfabeticamnete los productos"<< endl;
        cout << "6. Registrar venta" << endl;
        cout << "7. Producto mas vendido" << endl;
        cout << "8. Historial de ventas" << endl;
        cout << "9. Mostrar dinero acumulado" <<endl;
        cout << "0. Salir" << endl;
        cout << "\n___________________________________________________________________" << endl;
        cout << "\nIngrese su opcion: ";
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
		// CRISTIAN - ACTUALIZAR UN PRODUCTO
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
         // CRISTIAN - ORDENAR PRODUCTOS ALFABETICAMENTE
		    case 5:{
		    	int producto_ordenado;
            	bool indice_valido = false;
            	do {
			        mostrar_menu_ordenar( );
                    cout << "\nSeleccione un producto : ";
                    cin  >> producto_ordenado;
                    cout << endl;
		
                    if (producto_ordenado >= 1 && producto_ordenado <= 6){
                    	int indice_ordenado;
                        switch (producto_ordenado){
                            case 1: {ordenar_camisetas(camiseta,n1),mostrar_camisetas_ordenadas(camiseta,n1);break;}
                            case 2: {ordenar_shorts(pantalon_corto,n2),mostrar_shorts_ordenados(pantalon_corto,n2);break;}
                            case 3: {ordenar_zapatillas(calzado,n3),mostrar_zapatillas_ordenadas(calzado,n3);break;}
                            case 4: {ordenar_canilleras(protectores,n4),mostrar_canilleras_ordenadas(protectores,n4);break;}
                            case 5: {ordenar_medias(media_larga,n5),mostrar_medias_ordenadas(media_larga,n5);break;}
                            case 6: {ordenar_balones(pelota,n6),mostrar_balones_ordenados(pelota,n6);break;}
                            default: break;}
                    } else {
                    	cout << "_______________________________________________________________________" << endl;
                        cout << "\n                            OPCION INVALIDA                          " << endl;
				        cout << "\n                    POR FAVOR INREGESE UNA OPCION VALIDA             " << endl;    
                    }
                } while (producto_ordenado != 0);
				break;
			}
            //eber
            case 6:
            	int op;
            	do {  
            	    //submenú de opciones para seleccionar productos.
				    cout << "---------------------------------------------------------------------" << endl;
                    cout << "                      LISTA DE  PRODUCTOS                               " << endl;
                    cout << "---------------------------------------------------------------------" << endl;
                    cout << "Seleccione el producto a vender" << endl; 
                    cout << "1. Camisetas" << endl;
                    cout << "2. Shorts" << endl;
                    cout << "3. Zapatillas" << endl;
                    cout << "4. Canilleras" << endl;
                    cout << "5. Medias" << endl;
                    cout << "6. Balones" << endl;
                    cout << "7. Mostrar el total" << endl;
                    cout << "0. Atrás" << endl;
                    cout << endl;
                    cout << "\nIngrese su opción: "; 
					cin>>op;
					switch(op) 
					{   
						case 1://caso 1 para registrar una venta en la sección de producto camiseta.
							cout<<"----------------------------------------------------------------------------------"<<endl;
							cout<<"                             PRODUCTOS ACTUALES                                   "<<endl;
							cout<<"----------------------------------------------------------------------------------"<<endl;
							mostrar_camisetas(camiseta, n1);
							registar_ventas(registrar, camiseta, n1, v1, cont1);
							total=total+registrar[v1].precio_total;
							break;
						case 2://caso 2 para registrar una venta en la sección de producto shorts.
							cout<<"----------------------------------------------------------------------------------"<<endl;
							cout<<"                             PRODUCTOS ACTUALES                                   "<<endl;
							cout<<"----------------------------------------------------------------------------------"<<endl;
							mostrar_shorts(pantalon_corto, n2);
							registar_ventas(registrar, pantalon_corto, n2, v1, cont2);
							total=total+registrar[v1].precio_total;
							break;
						case 3://caso 3 para registrar una venta en la sección de producto zapatilla.
							cout<<"----------------------------------------------------------------------------------"<<endl;
							cout<<"                             PRODUCTOS ACTUALES                                   "<<endl;
							cout<<"----------------------------------------------------------------------------------"<<endl;
							mostrar_zapatillas(calzado, n3);
							registar_ventas(registrar, calzado, n3, v1, cont3);
							total=total+registrar[v1].precio_total;
							break;
						case 4://caso 4 para registrar una venta en la sección de producto canilleras.
							cout<<"----------------------------------------------------------------------------------"<<endl;
							cout<<"                             PRODUCTOS ACTUALES                                   "<<endl;
							cout<<"----------------------------------------------------------------------------------"<<endl;
							mostrar_canilleras(protectores, n4);
							registar_ventas(registrar, protectores, n4, v1, cont4);
							total=total+registrar[v1].precio_total;
							break;
						case 5://caso 5 para registrar una venta en la sección de producto medias.
							cout<<"----------------------------------------------------------------------------------"<<endl;
							cout<<"                             PRODUCTOS ACTUALES                                   "<<endl;
							cout<<"----------------------------------------------------------------------------------"<<endl;
							mostrar_medias(media_larga, n5);
							registar_ventas(registrar, media_larga, n5, v1, cont5);
							total=total+registrar[v1].precio_total;
							break;
						case 6://caso 6 para registrar una venta en la sección de producto balones.
							cout<<"----------------------------------------------------------------------------------"<<endl;
							cout<<"                             PRODUCTOS ACTUALES                                   "<<endl;
							cout<<"----------------------------------------------------------------------------------"<<endl;
							mostrar_balones(pelota, n6);
							registar_ventas(registrar, pelota, n6, v1, cont6);
							total=total+registrar[v1].precio_total;
							break;
						case 7://caso 7 para mostrar el total de ventas realizadas.
							if(total!=0)//si se realizo la venta nuestra el precio total, de lo contrario, pide que registres una venta.
							{
								cout<<"------------------------------------------------------------------------------"<<endl;
							    cout<<"                                    CAJERO                                     "<<endl;
							    cout<<"------------------------------------------------------------------------------"<<endl;
								cout<<"Precio total: S/. "<<total<<endl;
							}
							else
							{
								cout<<"--------------------------------------------------------------------------------"<<endl;
								cout<<"                              REGISTRE UNA VENTA                                "<<endl;
								cout<<"--------------------------------------------------------------------------------"<<endl;
							}
							break;
						case 0: break; // Permite salir del sub-menú y volver al menú principal
                        default: cout << "Opción inválida. Por favor, seleccione una opción válida." << endl;
                        break;
					}
				}
				while(op!=0); 
				v1++;//v1 es una variable que controla el indice del arreglo registrar[tem], y una vez registrada una venta por usuario avanza al siguiente indice, para nueva venta.
				total=0;//una vez registrada las ventas y volver al menú principal, el total=0, para no mezclar las ventas realizadas por usuario.
            	break;
            	//// frank
            case 7:
				producto_mas_vendido(cont1, cont2, cont3, cont4, cont5, cont6);
				break;
				//eber
			case 8:
				cout<<"------------------------------------------------------------------------------------"<<endl;
				cout<<"                               HISTORIAL DE VENTAS                                  "<<endl;
				cout<<"------------------------------------------------------------------------------------"<<endl;
				historial_ventas(registrar, v1);
				break;
				//eber
			case 9:
				cout<<"------------------------------------------------------------------------------------"<<endl;
				cout<<" DINERO ACUMULADO: S/. "<<dinero_acumulado(registrar, v1)<<endl;
				cout<<"-------------------------------------------------------------------------------------"<<endl;
				break;
				
				
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
