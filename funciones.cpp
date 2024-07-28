#include<iostream>
#include"funciones.h"
#include"estructuras.h"
#include<bits/stdc++.h>
#include<iomanip>
using namespace std;

// funciones que sirven unicamente para mostrar lista según el tipo de producto (eber)
void mostrar_camisetas(camisetas arr[], int &n1)
{
	cout<<"N.\t"<<setw(16)<<"MODELO"<<setw(17)<<"TALLA"<<setw(14)<<"MARCA"<<setw(18)<<"PRECIO"<<setw(17)<<"CANTIDAD"<<endl;
	cout<<"--------------------------------------------------------------------------------------------"<<endl;
	for(int i=0; i<n1; i++)
	{
		cout<<i+1<<"\t"\
		<<setw(15)<<arr[i].modelo<<"\t"\
		<<setw(15)<<arr[i].talla<<"\t"\
		<<setw(15)<<arr[i].marca<<"\t"\
		<<setw(15)<<arr[i].precio<<"\t"\
		<<setw(15)<<arr[i].cantidad<<endl;
	}
}
void mostrar_shorts(shorts arr[], int &n2)
{
	cout<<"N.\t"<<setw(16)<<"COLOR"<<setw(17)<<"TALLA"<<setw(14)<<"MARCA"<<setw(18)<<"PRECIO"<<setw(17)<<"CANTIDAD"<<endl;
	cout<<"--------------------------------------------------------------------------------------------"<<endl;
	for(int i=0; i<n2; i++)
	{
		cout<<i+1<<"\t"\
		<<setw(15)<<arr[i].color<<"\t"\
		<<setw(15)<<arr[i].talla<<"\t"\
		<<setw(15)<<arr[i].marca<<"\t"\
		<<setw(15)<<arr[i].precio<<"\t"\
		<<setw(15)<<arr[i].cantidad<<endl;
	}
}
void mostrar_zapatillas(zapatillas arr[], int &n3)
{
	cout<<"N.\t"<<setw(16)<<"COLOR"<<setw(17)<<"TALLA"<<setw(14)<<"MARCA"<<setw(18)<<"PRECIO"<<setw(17)<<"CANTIDAD"<<endl;
	cout<<"--------------------------------------------------------------------------------------------"<<endl;
	for(int i=0; i<n3; i++)
	{
		cout<<i+1<<"\t"\
		<<setw(15)<<arr[i].color<<"\t"\
		<<setw(15)<<arr[i].talla<<"\t"\
		<<setw(15)<<arr[i].marca<<"\t"\
		<<setw(15)<<arr[i].precio<<"\t"\
		<<setw(15)<<arr[i].cantidad<<endl;
	}
}
void mostrar_canilleras(canilleras arr[], int &n4)
{
	cout<<"N.\t"<<setw(16)<<"COLOR"<<setw(17)<<"TALLA"<<setw(14)<<"MARCA"<<setw(18)<<"PRECIO"<<setw(17)<<"CANTIDAD"<<endl;
	cout<<"--------------------------------------------------------------------------------------------"<<endl;
	for(int i=0; i<n4; i++)
	{
		cout<<i+1<<"\t"\
		<<setw(15)<<arr[i].color<<"\t"\
		<<setw(15)<<arr[i].talla<<"\t"\
		<<setw(15)<<arr[i].marca<<"\t"\
		<<setw(15)<<arr[i].precio<<"\t"\
		<<setw(15)<<arr[i].cantidad<<endl;
	}
}
void mostrar_medias(medias arr[], int &n5)
{
	cout<<"N.\t"<<setw(16)<<"COLOR"<<setw(17)<<"TALLA"<<setw(14)<<"MARCA"<<setw(18)<<"PRECIO"<<setw(17)<<"CANTIDAD"<<endl;
	cout<<"--------------------------------------------------------------------------------------------"<<endl;
	for(int i=0; i<n5; i++)
	{
		cout<<i+1<<"\t"\
		<<setw(15)<<arr[i].color<<"\t"\
		<<setw(15)<<arr[i].talla<<"\t"\
		<<setw(15)<<arr[i].marca<<"\t"\
		<<setw(15)<<arr[i].precio<<"\t"\
		<<setw(15)<<arr[i].cantidad<<endl;
	}
}
void mostrar_balones(balones arr[], int &n6)
{
	cout<<"N.\t"<<setw(16)<<"COLOR"<<setw(17)<<"TAMANO"<<setw(14)<<"MARCA"<<setw(18)<<"PRECIO"<<setw(17)<<"CANTIDAD"<<endl;
	cout<<"--------------------------------------------------------------------------------------------"<<endl;
	for(int i=0; i<n6; i++)
	{
		cout<<i+1<<"\t"\
		<<setw(15)<<arr[i].color<<"\t"\
		<<setw(15)<<arr[i].tamano<<"\t"\
		<<setw(15)<<arr[i].marca<<"\t"\
		<<setw(15)<<arr[i].precio<<"\t"\
		<<setw(15)<<arr[i].cantidad<<endl;
	}
}
//------------------------------------------------------------------------------------------------------------------------------------------------------------
//declarar funciones para agregar producto
void agregar_camisetas(camisetas arr[], int &n1)
{
	cout<<"ingrese el modelo: "; cin>>arr[n1].modelo;
	cout<<"ingrese la talla: "; cin>>arr[n1].talla;
	cout<<"ingrese la marca:"; cin>>arr[n1].marca;
	cout<<"ingrese precio: "; cin>>arr[n1].precio;
	cout<<"ingrese la cantidad:"; cin>>arr[n1].cantidad;
	n1++;
}

void agregar_shorts(shorts arr[], int &n2)
{
	cout<<"ingrese color: "; cin>>arr[n2].color;
	cout<<"ingrese la talla: "; cin>>arr[n2].talla;
	cout<<"ingrese la marca:"; cin>>arr[n2].marca;
	cout<<"ingrese precio: "; cin>>arr[n2].precio;
	cout<<"ingrese la cantidad:"; cin>>arr[n2].cantidad;
	n2++;
}

void agregar_zapatillas(zapatillas arr[], int &n3)
{
	cout<<"ingrese color: "; cin>>arr[n3].color;
	cout<<"ingrese la talla: "; cin>>arr[n3].talla;
	cout<<"ingrese la marca:"; cin>>arr[n3].marca;
	cout<<"ingrese precio: "; cin>>arr[n3].precio;
	cout<<"ingrese la cantidad:"; cin>>arr[n3].cantidad;
	n3++;
}

void agregar_canilleras(canilleras arr[], int &n4)
{
	cout<<"ingrese color: "; cin>>arr[n4].color;
	cout<<"ingrese la talla: "; cin>>arr[n4].talla;
	cout<<"ingrese la marca:"; cin>>arr[n4].marca;
	cout<<"ingrese precio: "; cin>>arr[n4].precio;
	cout<<"ingrese la cantidad:"; cin>>arr[n4].cantidad;
	n4++;
}

void agregar_medias( medias arr[], int &n5)
{
	cout<<"ingrese color: "; cin>>arr[n5].color;
	cout<<"ingrese la talla: "; cin>>arr[n5].talla;
	cout<<"ingrese la marca:"; cin>>arr[n5].marca;
	cout<<"ingrese precio: "; cin>>arr[n5].precio;
	cout<<"ingrese la cantidad:"; cin>>arr[n5].cantidad;
	n5++;
}

void agregar_balones(balones arr[], int &n6)
{
	cout<<"ingrese color: "; cin>>arr[n6].color;
	cout<<"ingrese la tamano: "; cin>>arr[n6].tamano;
	cout<<"ingrese la marca:"; cin>>arr[n6].marca;
	cout<<"ingrese precio: "; cin>>arr[n6].precio;
	cout<<"ingrese la cantidad:"; cin>>arr[n6].cantidad;
	n6++;
}

// Funcion para modificar los datos de un producto ya registrado con aterioridaad -----------------------------------------------------------------------------
void mostar_menu_principal( ){
	cout << "---------------------------------------------------------------------" << endl;
    cout << "                     ACTUALIZAR DATOS DE UN PRODUCTO                 " << endl;
    cout << "---------------------------------------------------------------------" << endl;
    cout << "1. Camisetas" << endl;
    cout << "2. Shorts" << endl;
    cout << "3. Zapatillas" << endl;
    cout << "4. Canilleras" << endl;
    cout << "5. Medias" << endl;
    cout << "6. Balones" << endl;
    cout << "0. Atrás" << endl;
    cout << "\n___________________________________________________________________" << endl;
}
void submenu_actualizar_camisetas(camisetas camiseta[], int& n1){
	int indice_actualizar;
	cout << "---------------------------------------------------------------------" << endl;
    cout << "                          ACTUALIZAR CAMISETA                        " << endl;
    cout << "---------------------------------------------------------------------" << endl;
    mostrar_camisetas(camiseta, n1);
    cout << endl;
    cout << "_____________________________________________________________________" << endl;
    cout << "\nIngrese el índice del producto a actualizar: ";
    cin  >> indice_actualizar;
    cout << "_____________________________________________________________________" << endl;
    cout << endl;
    if (indice_actualizar >= 0 && indice_actualizar <= n1){
        actualizar_camisetas(camiseta, n1, indice_actualizar);
    } else {
        cout << "_______________________________________________________________________" << endl;
        cout << "\n       El INDICE QUE INGRESO NO EXISTE EN EL SISTEMA ACTUALMENTE     " << endl;
        cout << "\n                    INTENTELO NUEVAMENTE POR FAVOR                   " << endl;
    }
}
void submenu_actualizar_shorts(shorts pantalon_corto[], int& n2) {
    int indice_actualizar;
    cout << "---------------------------------------------------------------------" << endl;
    cout << "                          ACTUALIZAR SHORTS                          " << endl;
    cout << "---------------------------------------------------------------------" << endl;
    mostrar_shorts(pantalon_corto, n2);
    cout << endl;
    cout << "_____________________________________________________________________" << endl;
    cout << "\nIngrese el índice del producto a actualizar: ";
    cin >> indice_actualizar;
    cout << "_____________________________________________________________________" << endl;
    cout << endl;
    if (indice_actualizar >= 0 && indice_actualizar <= n2){
        actualizar_shorts(pantalon_corto, n2, indice_actualizar);
    } else {
        cout << "_______________________________________________________________________" << endl;
        cout << "\n       El INDICE QUE INGRESO NO EXISTE EN EL SISTEMA ACTUALMENTE     " << endl;
        cout << "\n                    INTENTELO NUEVAMENTE POR FAVOR                   " << endl;  
    }
}

void submenu_actualizar_zapatillas(zapatillas zapatillas[], int& n3){
	int indice_actualizar;
	cout << "---------------------------------------------------------------------" << endl;
    cout << "                     ACTUALIZAR ZAPATILLAS                             " << endl;
    cout << "---------------------------------------------------------------------" << endl;
    mostrar_zapatillas( zapatillas, n3);
    cout << endl;
    cout << "_____________________________________________________________________" << endl;
    cout << "\nIngrese el índice del producto a actualizar: ";
    cin  >> indice_actualizar;
    cout << "_____________________________________________________________________" << endl;
    cout << endl;
    if (indice_actualizar >= 0 && indice_actualizar <= n3){
        actualizar_zapatillas(zapatillas, n3, indice_actualizar);
    } else {
        cout << "_______________________________________________________________________" << endl;
        cout << "\n       El INDICE QUE INGRESO NO EXISTE EN EL SISTEMA ACTUALMENTE     " << endl;
        cout << "\n                    INTENTELO NUEVAMENTE POR FAVOR                   " << endl;
    }
}

void submenu_actualizar_canilleras(canilleras canilleras[], int& n4){
	int indice_actualizar;
	cout << "---------------------------------------------------------------------" << endl;
    cout << "                     ACTUALIZAR CANILLERAS                           " << endl;
    cout << "---------------------------------------------------------------------" << endl;
    mostrar_canilleras(canilleras, n4);
    cout << endl,
    cout << "_____________________________________________________________________" << endl;
    cout << "\nIngrese el índice del producto a actualizar: ";
    cin  >> indice_actualizar;
    cout << "_____________________________________________________________________" << endl;
    cout << endl;
    if (indice_actualizar >= 0 && indice_actualizar <= n4) {
        actualizar_canilleras(canilleras, n4, indice_actualizar);
    } else {
        cout << "_____________________________________________________________________" << endl;
        cout << "\n       El INDICE QUE INGRESO NO EXISTE EN EL SISTEMA ACTUALMENTE     " << endl;
        cout << "\n                    INTENTELO NUEVAMENTE POR FAVOR                   " << endl;
    }
}

void submenu_actualizar_medias(medias medias[], int& n5){
	int indice_actualizar;
	cout << "---------------------------------------------------------------------" << endl;
    cout << "                     ACTUALIZAR MEDIAS                             " << endl;
    cout << "---------------------------------------------------------------------" << endl;
    mostrar_medias(medias, n5);
    cout << endl;
    cout << "_____________________________________________________________________" << endl;
    cout << "\nIngrese el índice del producto a actualizar: ";
    cin  >> indice_actualizar;
    cout << "_____________________________________________________________________" << endl;
    cout << endl;
    if (indice_actualizar >= 0 && indice_actualizar <= n5){
        actualizar_medias(medias, n5, indice_actualizar);
    } else {
        cout << "_______________________________________________________________________" << endl;
        cout << "\n       El INDICE QUE INGRESO NO EXISTE EN EL SISTEMA ACTUALMENTE     " << endl;
        cout << "\n                    INTENTELO NUEVAMENTE POR FAVOR                   " << endl;
    }	
}

void submenu_actualizar_balones(balones balones[], int& n6){
	int indice_actualizar;
	cout << "---------------------------------------------------------------------" << endl;
    cout << "                     ACTUALIZAR BALONES                             " << endl;
    cout << "---------------------------------------------------------------------" << endl;
    mostrar_balones(balones, n6);
    cout << endl,
    cout << "_____________________________________________________________________" << endl;
    cout << "\nIngrese el índice del producto a actualizar: ";
    cin >> indice_actualizar;
    cout << "_____________________________________________________________________" << endl;
    cout << endl;
    if (indice_actualizar >= 0 && indice_actualizar <= n6){
    actualizar_balones(balones, n6, indice_actualizar);
    } else {
        cout << "_______________________________________________________________________" << endl;
        cout << "\n       El INDICE QUE INGRESO NO EXISTE EN EL SISTEMA ACTUALMENTE     " << endl;
        cout << "\n                    INTENTELO NUEVAMENTE POR FAVOR                   " << endl;
    }
}

void actualizar_camisetas(camisetas arr[], int &n1, int indice ){
	// FILTRO PARA VALIDAR EL INDICE 	
	if (indice <0|| indice >n1 ){
	
	cout << "              El indice no existe en el sistema.                      " << endl;
	return;
	}
	//MOSTRAR EL PRODUCTO ACTUAL ANTES DE LA ACTUALIZACION 
	 cout << "                    PRODUCTO ACTUAL  (" << indice << ")              " << endl;
	 cout << endl;
     cout << "Modelo  : "   << arr[indice-1].modelo   <<endl;
     cout << "Talla   : "   << arr[indice-1].talla    <<endl;
     cout << "Marca   : "   << arr[indice-1].marca    <<endl;
     cout << "Precio  : "   << arr[indice-1].precio   <<endl;
     cout << "Cantidad: "   << arr[indice-1].cantidad <<endl;
     cout << endl;
     cout << "---------------------------------------------------------------------" << endl;
     cout << endl;

	 cout << "               INGRESE LOS NUEVOS DATOS DEL PRODUCTO                 " << endl;
	 cout << endl;
	 cout << "Nuevo modelo   : ";
	 cin  >> arr[indice-1].modelo;
	 cout << "Nueva talla    : ";
	 cin  >> arr[indice-1].talla;
	 cout << "Nueva marca    : ";
	 cin  >> arr[indice-1].marca;
	 cout << "Nuevo precio   : ";
	 cin  >> arr[indice-1].precio;
	 cout << "Nueva cantidad : ";
	 cin  >> arr[indice-1].cantidad;
	 cout << endl;  
	 cout << "\n          EL PRODUCTO HA SIDO ACTUALIZADO CORRECTAMENTE              " << endl;
}

void actualizar_shorts(shorts arr[], int &n2, int indice){
		// FILTRO PARA VALIDAR EL INDICE 
	if (indice <0|| indice > n2 ){
	cout << "               El indice no existe en el sistema.                      " << endl;
	return;
	}
	//MOSTRAR EL PRODUCTO ACTUAL ANTES DE LA ACTUALIZACION 
	 cout << "                    PRODUCTO ACTUAL  (" << indice << ")                " << endl;
	 cout << endl;
     cout << "Color   : " << arr[indice-1].color    << endl;
     cout << "Talla   : " << arr[indice-1].talla    << endl;
     cout << "Marca   : " << arr[indice-1].marca    << endl;
     cout << "Precio  : " << arr[indice-1].precio   << endl;
     cout << "Cantidad: " << arr[indice-1].cantidad << endl;
     cout << endl;
     cout << "---------------------------------------------------------------------" << endl;
     cout << endl;

	 cout << "               INGRESE LOS NUEVOS DATOS DEL PRODUCTO                 " << endl;
	 cout << endl;
	 cout << "Nuevo color    : ";
	 cin  >> arr[indice-1].color;
	 cout << "Nueva talla    : ";
	 cin  >> arr[indice-1].talla;
	 cout << "Nueva marca    : ";
	 cin  >> arr[indice-1].marca;
	 cout << "Nuevo precio   : ";
	 cin  >> arr[indice-1].precio;
	 cout << "Nueva cantidad : ";
	 cin  >> arr[indice-1].cantidad;
	 cout << endl;
	 cout << "\n          EL PRODUCTO HA SIDO ACTUALIZADO CORRECTAMENTE              " << endl;
}
void actualizar_zapatillas(zapatillas arr[], int &n3, int indice){
		// FILTRO PARA VALIDAR EL INDICE 
	if (indice <0|| indice > n3 ){
	cout << "               El indice no existe en el sistema.                      " << endl;
	return;
	}
	//MOSTRAR EL PRODUCTO ACTUAL ANTES DE LA ACTUALIZACION 
	 cout << "                      PRODUCTO ACTUAL  (" << indice << ")            " << endl;
	 cout << endl;
     cout << "Color   : " << arr[indice-1].color    << endl;
     cout << "Talla   : " << arr[indice-1].talla    << endl;
     cout << "Marca   : " << arr[indice-1].marca    << endl;
     cout << "Precio  : " << arr[indice-1].precio   << endl;
     cout << "Cantidad: " << arr[indice-1].cantidad << endl;
     cout << endl;
     cout << "---------------------------------------------------------------------" << endl;
     cout << endl;
     
	 cout << "               INGRESE LOS NUEVOS DATOS DEL PRODUCTO                 " << endl;
	 cout << endl;
	 cout << "Nuevo color   : ";
	 cin  >> arr[indice-1].color;
	 cout << "Nueva talla   : ";
	 cin  >> arr[indice-1].talla;
	 cout << "Nueva marca   : ";
	 cin  >> arr[indice-1].marca;
	 cout << "Nuevo precio  : ";
	 cin  >> arr[indice-1].precio;
	 cout << "Nueva cantidad: ";
	 cin  >> arr[indice-1].cantidad;
	 cout << endl;
	 cout << "\n         EL PRODUCTO HA SIDO ACTUALIZADO CORRECTAMENTE               " << endl;	
}
void actualizar_canilleras(canilleras arr[], int &n4, int indice){
		// FILTRO PARA VALIDAR EL INDICE 
	if (indice <0|| indice > n4 ){
	cout << "              El indice no existe en el sistema.                      " << endl;
	return;
	}
	//MOSTRAR EL PRODUCTO ACTUAL ANTES DE LA ACTUALIZACION 
	 cout << "                      PRODUCTO ACTUAL  (" << indice << ")            " << endl;
	 cout << endl;
     cout << "Color   : " << arr[indice-1].color    << endl;
     cout << "Talla   : " << arr[indice-1].talla    << endl;
     cout << "Marca   : " << arr[indice-1].marca    << endl;
     cout << "Precio  : " << arr[indice-1].precio   << endl;
     cout << "Cantidad: " << arr[indice-1].cantidad << endl;
     cout << endl;
     cout << "---------------------------------------------------------------------"<< endl;
     cout << endl;

	 cout << "               INGRESE LOS NUEVOS DATOS DEL PRODUCTO                 " << endl;
	 cout << endl;
	 cout << "Nuevo color   : ";
	 cin  >> arr[indice-1].color;
	 cout << "Nueva talla   : ";
	 cin  >> arr[indice-1].talla;
	 cout << "Nueva marca   : ";
	 cin  >> arr[indice-1].marca;
	 cout << "Nuevo precio  : ";
	 cin  >> arr[indice-1].precio;
	 cout << "Nueva cantidad: ";
	 cin  >> arr[indice-1].cantidad;
	 cout << endl;
	 cout << "\n          EL PRODUCTO HA SIDO ACTUALIZADO CORRECTAMENTE               " << endl;
}
void actualizar_medias(medias arr[], int &n5, int indice){
		// FILTRO PARA VALIDAR EL INDICE 
	if (indice <0|| indice > n5 ){
	cout << "              El indice no existe en el sistema.                      " << endl;
	return;
	}
	//MOSTRAR EL PRODUCTO ACTUAL ANTES DE LA ACTUALIZACION 
	 cout << "                       PRODUCTO ACTUAL  (" << indice << ")            " << endl;
	 cout << endl;
     cout << "Color   : " << arr[indice-1].color   << endl;
     cout << "Talla   : " << arr[indice-1].talla   << endl;
     cout << "Marca   : " << arr[indice-1].marca   << endl;
     cout << "Precio  : " << arr[indice-1].precio  << endl;
     cout << "Cantidad: " << arr[indice-1].cantidad<< endl;
     cout << endl;
     cout << "---------------------------------------------------------------------"<< endl;
     cout << endl;

	 cout << "               INGRESE LOS NUEVOS DATOS DEL PRODUCTO                 " << endl;
	 cout << endl;
	 cout << "Nuevo color   : ";
	 cin  >> arr[indice-1].color;
	 cout << "Nueva talla   : ";
	 cin  >> arr[indice-1].talla;
	 cout << "Nueva marca   : ";
	 cin  >> arr[indice-1].marca;
	 cout << "Nuevo precio  : ";
	 cin  >> arr[indice-1].precio;
	 cout << "Nueva cantidad: ";
	 cin  >> arr[indice-1].cantidad;
	 cout << endl;
	 cout << "\n         EL PRODUCTO HA SIDO ACTUALIZADO CORRECTAMENTE               " << endl;
	
	
}
void actualizar_balones(balones arr[], int &n6, int indice ){
		// FILTRO PARA VALIDAR EL INDICE 
	if (indice <0|| indice > n6 ){
	cout << "              El indice no existe en el sistema.                      " << endl;
	return;
	}
	//MOSTRAR EL PRODUCTO ACTUAL ANTES DE LA ACTUALIZACION 
	 cout << endl;
	 cout << "                      PRODUCTO ACTUAL  (" << indice << ")             " << endl;
	 cout << endl;
     cout << "Color   : " << arr[indice-1].color    << endl;
     cout << "Tamaño  : " << arr[indice-1].tamano   << endl;
     cout << "Marca   : " << arr[indice-1].marca    << endl;
     cout << "Precio  : " << arr[indice-1].precio   << endl;
     cout << "Cantidad: " << arr[indice-1].cantidad << endl;
     cout << endl;
     cout << "---------------------------------------------------------------------"<< endl;
     cout << endl;

	 cout << "                INGRESE LOS NUEVOS DATOS DEL PRODUCTO                " << endl;
	 cout << endl;
	 cout << "Nuevo color    : ";
	 cin  >> arr[indice-1].color;
	 cout << "Nuevo tamaño   : ";
	 cin  >> arr[indice-1].tamano;
	 cout << "Nueva marca    : ";
	 cin  >> arr[indice-1].marca;
	 cout << "Nuevo precio   : ";
	 cin  >> arr[indice-1].precio;
	 cout << "Nueva cantidad : ";
	 cin  >> arr[indice-1].cantidad;
	 cout << endl;
	 cout << "\n          EL PRODUCTO HA SIDO ACTUALIZADO CORRECTAMENTE               " << endl;	
}
// -------------------------------------------------------------------------------------------------------------------------------------------------------------

//frank
//funciones para eliminar un producto
void eliminar_camisetas(camisetas arr[], int &n1)
{
	int borrar;//borrar: fila siguiente a la que se desea eliminar 
	cout<<"ingrese el numero del producto a eliminar:"; cin>>borrar;
	for(int i=borrar; i<n1; i++)
	{
		arr[i-1].modelo=arr[i].modelo;
		arr[i-1].talla=arr[i].talla;
		arr[i-1].marca=arr[i].marca;
		arr[i-1].precio=arr[i].precio;
		arr[i-1].cantidad=arr[i].cantidad;
	}
	n1--;
}

void eliminar_shorts(shorts arr[], int &n2)
{
	int borrar;//borrar: fila siguiente a la que se desea eliminar 
	cout<<"ingrese el numero del producto a eliminar:"; cin>>borrar;
	for(int i=borrar; i<n2; i++)
	{
		arr[i-1].color=arr[i].color;
		arr[i-1].talla=arr[i].talla;
		arr[i-1].marca=arr[i].marca;
		arr[i-1].precio=arr[i].precio;
		arr[i-1].cantidad=arr[i].cantidad;
	}
	n2--;
}

void eliminar_zapatillas(zapatillas arr[], int &n3)
{
	int borrar;//borrar: fila siguiente a la que se desea eliminar 
	cout<<"ingrese el numero del producto a eliminar:"; cin>>borrar;
	for(int i=borrar; i<n3; i++)
	{
		arr[i-1].color=arr[i].color;
		arr[i-1].talla=arr[i].talla;
		arr[i-1].marca=arr[i].marca;
		arr[i-1].precio=arr[i].precio;
		arr[i-1].cantidad=arr[i].cantidad;
	}
	n3--;
}

void eliminar_canilleras(canilleras arr[], int &n4)
{
	int borrar;//borrar: fila siguiente a la que se desea eliminar 
	cout<<"ingrese el numero del producto a eliminar:"; cin>>borrar;
	for(int i=borrar; i<n4; i++)
	{
		arr[i-1].color=arr[i].color;
		arr[i-1].talla=arr[i].talla;
		arr[i-1].marca=arr[i].marca;
		arr[i-1].precio=arr[i].precio;
		arr[i-1].cantidad=arr[i].cantidad;
	}
	n4--;
}

void eliminar_medias(medias arr[], int &n5)
{
	int borrar;//borrar: fila siguiente a la que se desea eliminar 
	cout<<"ingrese el numero del producto a eliminar:"; cin>>borrar;
	for(int i=borrar; i<n5; i++)
	{
		arr[i-1].color=arr[i].color;
		arr[i-1].talla=arr[i].talla;
		arr[i-1].marca=arr[i].marca;
		arr[i-1].precio=arr[i].precio;
		arr[i-1].cantidad=arr[i].cantidad;
	}
	n5--;
}

void eliminar_balones(balones arr[], int &n6)
{
	int borrar;//borrar: fila siguiente a la que se desea eliminar 
	cout<<"ingrese el numero del producto a eliminar:"; cin>>borrar;
	for(int i=borrar; i<n6; i++)
	{
		arr[i-1].color=arr[i].color;
		arr[i-1].tamano=arr[i].tamano;
		arr[i-1].marca=arr[i].marca;
		arr[i-1].precio=arr[i].precio;
		arr[i-1].cantidad=arr[i].cantidad;
	}
	n6--;
}


//eber
//funciones para registrar una venta
void registar_ventas(ventas arr1[], camisetas arr2[], int &n1, int &v1, int &cont1)
{
	int num;//representa el número del producto camiseta
	int cant;//representa la cantidad de productos a comprar
	cout<<"Ingrese el numero del producto a vender: "; cin>>num;
	if(num<1 or num>n1)
	{
		cout<<"---------------------------------------------------------------------------"<<endl;
		cout<<"                  Ingrese un numero valido segun la lista                  "<<endl;
		cout<<"---------------------------------------------------------------------------"<<endl;
	}
	else
	{
		cout<<"Ingrese la cantidad: "; cin>>cant;
		if(arr2[num-1].cantidad<cant)
		{
			cout<<"------------------------------------------------------------------------"<<endl;
			cout<<"                 No cuenta con suficientes productos                    "<<endl;
			cout<<"------------------------------------------------------------------------"<<endl;
		}
		else
		{
			arr2[num-1].cantidad=arr2[num-1].cantidad-cant;
			arr1[v1].precio_total=0;
	        arr1[v1].precio_total=arr1[v1].precio_total+(arr2[num-1].precio*cant);
	        cont1++;
		}
	}
	
}
void registar_ventas(ventas arr1[], shorts arr2[], int &n2, int &v1, int &cont2)
{
	int num;//representa el número del producto shorts
	int cant;//representa la cantidad de productos a comprar
	cout<<"Ingrese el numero del producto a vender: "; cin>>num;
	if(num<1 or num>n2)
	{
		cout<<"---------------------------------------------------------------------------"<<endl;
		cout<<"                  Ingrese un numero valido segun la lista                  "<<endl;
		cout<<"---------------------------------------------------------------------------"<<endl;
	}
	else
	{
		cout<<"Ingrese la cantidad: "; cin>>cant;
		if(arr2[num-1].cantidad<cant)
		{
			cout<<"------------------------------------------------------------------------"<<endl;
			cout<<"                 No cuenta con suficientes productos                    "<<endl;
			cout<<"------------------------------------------------------------------------"<<endl;
		}
		else
		{
			arr2[num-1].cantidad=arr2[num-1].cantidad-cant;
			arr1[v1].precio_total=0;
	        arr1[v1].precio_total=arr1[v1].precio_total+(arr2[num-1].precio*cant);
	        cont2++;
		}
	}
	
}
void registar_ventas(ventas arr1[], zapatillas arr2[], int &n3, int &v1, int &cont3)
{
	int num;//representa el número del producto zapatillas
	int cant;//representa la cantidad de productos a comprar
	cout<<"Ingrese el numero del producto a vender: "; cin>>num;
	if(num<1 or num>n3)
	{
		cout<<"---------------------------------------------------------------------------"<<endl;
		cout<<"                  Ingrese un numero valido segun la lista                  "<<endl;
		cout<<"---------------------------------------------------------------------------"<<endl;
	}
	else
	{
	    cout<<"Ingrese la cantidad: "; cin>>cant;
	    if(arr2[num-1].cantidad<cant)
		{
			cout<<"------------------------------------------------------------------------"<<endl;
			cout<<"                 No cuenta con suficientes productos                    "<<endl;
			cout<<"------------------------------------------------------------------------"<<endl;
		}
		else
		{
			arr2[num-1].cantidad=arr2[num-1].cantidad-cant;
			arr1[v1].precio_total=0;
	        arr1[v1].precio_total=arr1[v1].precio_total+(arr2[num-1].precio*cant);
	        cont3++;
		}
	}
	
}
void registar_ventas(ventas arr1[], canilleras arr2[], int &n4, int &v1, int &cont4)
{
	int num;//representa el número del producto canilleras
	int cant;//representa la cantidad de productos a comprar
	cout<<"Ingrese el numero del producto a vender: "; cin>>num;
	if(num<1 or num>n4)
	{
		cout<<"---------------------------------------------------------------------------"<<endl;
		cout<<"                  Ingrese un numero valido segun la lista                  "<<endl;
		cout<<"---------------------------------------------------------------------------"<<endl;
	}
	else
	{
		cout<<"Ingrese la cantidad: "; cin>>cant;
		if(arr2[num-1].cantidad<cant)
		{
			cout<<"------------------------------------------------------------------------"<<endl;
			cout<<"                 No cuenta con suficientes productos                    "<<endl;
			cout<<"------------------------------------------------------------------------"<<endl;
		}
		else
		{
			arr2[num-1].cantidad=arr2[num-1].cantidad-cant;
			arr1[v1].precio_total=0;
	        arr1[v1].precio_total=arr1[v1].precio_total+(arr2[num-1].precio*cant);
	        cont4++;
		}
	    
	}
	
}
void registar_ventas(ventas arr1[], medias arr2[], int &n5, int &v1, int &cont5)
{
	int num;//representa el número del producto medias
	int cant;//representa la cantidad de productos a comprar
	cout<<"Ingrese el numero del producto a vender: "; cin>>num;
	if(num<1 or num>n5)
	{
		cout<<"---------------------------------------------------------------------------"<<endl;
		cout<<"                  Ingrese un numero valido segun la lista                  "<<endl;
		cout<<"---------------------------------------------------------------------------"<<endl;
	}
	else
	{
		cout<<"Ingrese la cantidad: "; cin>>cant;
		if(arr2[num-1].cantidad<cant)
		{
			cout<<"------------------------------------------------------------------------"<<endl;
			cout<<"                 No cuenta con suficientes productos                    "<<endl;
			cout<<"------------------------------------------------------------------------"<<endl;
		}
		else
		{
			arr2[num-1].cantidad=arr2[num-1].cantidad-cant;
			arr1[v1].precio_total=0;
	        arr1[v1].precio_total=arr1[v1].precio_total+(arr2[num-1].precio*cant);
	        cont5++;
		}
	}
	
}
void registar_ventas(ventas arr1[], balones arr2[], int &n6, int &v1, int &cont6)
{
	int num;//representa el número del producto balones
	int cant;//representa la cantidad de productos a comprar
	cout<<"Ingrese el numero del producto a vender: "; cin>>num;
	if(num<1 or num>n6)
	{
		cout<<"---------------------------------------------------------------------------"<<endl;
		cout<<"                  Ingrese un numero valido segun la lista                  "<<endl;
		cout<<"---------------------------------------------------------------------------"<<endl;
	}
	else
	{
		cout<<"Ingrese la cantidad: "; cin>>cant;
		if(arr2[num-1].cantidad<cant)
		{
			cout<<"------------------------------------------------------------------------"<<endl;
			cout<<"                 No cuenta con suficientes productos                    "<<endl;
			cout<<"------------------------------------------------------------------------"<<endl;
		}
		else
		{
			arr2[num-1].cantidad=arr2[num-1].cantidad-cant;
			arr1[v1].precio_total=0;
	        arr1[v1].precio_total=arr1[v1].precio_total+(arr2[num-1].precio*cant);
	        cont6++;
		}
	}
	
}
//franklin
//funciones para ver el tipo de producto más vendido
void producto_mas_vendido(int &cont1, int &cont2, int &cont3, int &cont4, int &cont5, int &cont6)
{
	if(cont1>=cont2 and cont1>=cont3 and cont1>=cont4 and cont1>=cont5 and cont1>=cont6)
	{
		cout<<"--------------------------------------------------------------------------------"<<endl;
		cout<<"PRODUCTO MAS VENDIDO: CAMISETAS "<<endl;
		cout<<"N. de ventas: "<<cont1<<endl;
	}
	if(cont2>=cont1 and cont2>=cont3 and cont2>=cont4 and cont2>=cont5 and cont2>=cont6)
	{
		cout<<"--------------------------------------------------------------------------------"<<endl;
		cout<<"PRODUCTO MAS VENDIDO: SHORTS "<<endl;
		cout<<"N. de ventas: "<<cont2<<endl;
	}
	if(cont3>=cont1 and cont3>=cont2 and cont3>=cont4 and cont3>=cont5 and cont3>=cont6)
	{
		cout<<"--------------------------------------------------------------------------------"<<endl;
		cout<<"PRODUCTO MAS VENDIDO: ZAPATILLAS "<<endl;
		cout<<"N. de ventas: "<<cont3<<endl;
	}
	if(cont4>=cont1 and cont4>=cont2 and cont4>=cont3 and cont4>=cont5 and cont4>=cont6)
	{
		cout<<"--------------------------------------------------------------------------------"<<endl;
		cout<<"PRODUCTO MAS VENDIDO: CANILLERAS "<<endl;
		cout<<"N. de ventas: "<<cont4<<endl;
	}
	if(cont5>=cont1 and cont5>=cont2 and cont5>=cont3 and cont5>=cont4 and cont5>=cont6)
	{
		cout<<"--------------------------------------------------------------------------------"<<endl;
		cout<<"PRODUCTO MAS VENDIDO: MEDIAS "<<endl;
		cout<<"N. de ventas: "<<cont5<<endl;
	}
	if(cont6>=cont1 and cont6>=cont2 and cont6>=cont3 and cont6>=cont4 and cont6>=cont5)
	{
		cout<<"--------------------------------------------------------------------------------"<<endl;
		cout<<"PRODUCTO MAS VENDIDO: BALONES "<<endl;
		cout<<"N. de ventas: "<<cont6<<endl;
	}
	
}

// eber 
//funcion para ver el historial de ventas
void historial_ventas(ventas arr[], int &v1)
{
	for(int i=0; i<v1; i++)
	{
		cout<<"VENTA"<<i+1<<": S/. ";
		cout<<arr[i].precio_total<<endl;
	}
}
//función para mostrar la ganancia total
double dinero_acumulado(ventas arr[], int &v1)
{
	double suma=0;
	for(int i=0; i<v1; i++)
	{
		suma=suma+arr[i].precio_total;
	}
	return suma;
}

//CRISTIAN 
//________________________________________________________________________________________________________________________________________________________________
// FUNCCIONES PARA ORDENAR LOS PRODUCTOS ALFABETICAMENTE

void mostrar_menu_ordenar( ){
	cout << "---------------------------------------------------------------------" << endl;
    cout << "                       ORDENAR PRODUCTOS                             " << endl;
    cout << "---------------------------------------------------------------------" << endl;
    cout << "1. Camisetas" << endl;
    cout << "2. Shorts" << endl;
    cout << "3. Zapatillas" << endl;
    cout << "4. Canilleras" << endl;
    cout << "5. Medias" << endl;
    cout << "6. Balones" << endl;
    cout << "0. Atrás" << endl;
    cout << "\n___________________________________________________________________" << endl;
}
//ordenar camisetas
bool comparar_camisetas(const camisetas &a, const camisetas &b){
    return a.modelo < b.modelo;
}
void ordenar_camisetas(camisetas camiseta[], int &n1) {
    for (int i = 0; i < n1 - 1; i++) {
        for (int j = 0; j < n1 - i - 1; j++) {
            if (comparar_camisetas(camiseta[j + 1], camiseta[j])) {
                camisetas temp = camiseta[j];
                camiseta[j] = camiseta[j + 1];
                camiseta[j + 1] = temp;
            }
        }
    }
}
void mostrar_camisetas_ordenadas( camisetas camiseta[], int &n1) {
    cout << "_____________________________________________________________________" << endl;
    cout << "\n           LISTA DE CAMISETAS ORDEANDAS ALFABETICAMENTE           " << endl;
    cout << "---------------------------------------------------------------------" << endl;
    cout << left << setw(15) << "MODELO" 
         << setw(10) << "TALLA" 
         << setw(15) << "MARCA" 
         << setw(10) << "PRECIO" 
         << setw(10) << "CANTIDAD" << endl;
    cout << "---------------------------------------------------------------------" << endl;
    
    for (int i = 0; i < n1; i++) {
        cout << left << setw(15) << camiseta[i].modelo 
             << setw(10) << camiseta[i].talla
             << setw(15) << camiseta[i].marca
             << setw(10) << camiseta[i].precio
             << setw(10) << camiseta[i].cantidad << endl;
    }
    
    cout << "_____________________________________________________________________" << endl;
}
//ordenar shorts
bool comparar_shorts(const shorts &a, const shorts &b) {
    return a.color < b.color;
}
void ordenar_shorts(shorts pantalon_corto[], int &n2) {
    for (int i = 0; i < n2 - 1; i++) {
        for (int j = 0; j < n2 - i - 1; j++) {
            if (comparar_shorts(pantalon_corto[j + 1], pantalon_corto[j])) {
                shorts temp = pantalon_corto[j];
                pantalon_corto[j] = pantalon_corto[j + 1];
                pantalon_corto[j + 1] = temp;
            }
        }
    }
}
void mostrar_shorts_ordenados(shorts pantalon_corto[], int &n2){
	cout << "_____________________________________________________________________" << endl;
    cout << "\n           LISTA DE SHORTS ORDENADOS ALFABETICAMENTE               " << endl;
    cout << "---------------------------------------------------------------------" << endl;
    cout << left << setw(15) << "COLOR" 
         << setw(10) << "TALLA" 
         << setw(15) << "MARCA" 
         << setw(10) << "PRECIO" 
         << setw(10) << "CANTIDAD" << endl;
    cout << "---------------------------------------------------------------------" << endl;
    
    for (int i = 0; i < n2; i++) {
        cout << left << setw(15) << pantalon_corto[i].color 
             << setw(10) << pantalon_corto[i].talla
             << setw(15) << pantalon_corto[i].marca
             << setw(10) << pantalon_corto[i].precio
             << setw(10) << pantalon_corto[i].cantidad << endl;
    }
    cout << "_____________________________________________________________________" << endl;
}
// ordenar zapatillas
bool comparar_zapatillas(const zapatillas &a, const zapatillas &b) {
	return a.color < b.color;
}
void ordenar_zapatillas(zapatillas calzado [], int &n3) {
	for (int i =0 ; i < n3-1; i++){
		for (int j =0 ; j < n3 - i - 1; j++){
			if (comparar_zapatillas(calzado[j+1], calzado[j])) {
				zapatillas temp = calzado [j];
				calzado[j] = calzado [j+1];
				calzado[j+1] = temp;
			}
		}
	}
}
void mostrar_zapatillas_ordenadas(zapatillas calzado[], int &n3){
	cout << "_____________________________________________________________________" << endl;
    cout << "\n           LISTA DE ZAPATILLAS ORDENADAS ALFABETICAMENTE               " << endl;
    cout << "---------------------------------------------------------------------" << endl;
    cout << left << setw(15) << "COLOR" 
         << setw(10) << "TALLA" 
         << setw(15) << "MARCA" 
         << setw(10) << "PRECIO" 
         << setw(10) << "CANTIDAD" << endl;
    cout << "---------------------------------------------------------------------" << endl;
    
    for (int i = 0; i < n3; i++) {
        cout << left << setw(15) << calzado[i].color 
             << setw(10) << calzado[i].talla
             << setw(15) << calzado[i].marca
             << setw(10) << calzado[i].precio
             << setw(10) << calzado[i].cantidad << endl;
    }
    cout << "_____________________________________________________________________" << endl;
}
// ordenar canilleras
bool comparar_canilleras(const canilleras &a, const canilleras &b) {
	return a.color < b.color;
}
void ordenar_canilleras(canilleras protector [], int &n4) {
	for (int i =0 ; i < n4-1; i++){
		for (int j =0 ; j < n4 - i - 1; j++){
			if (comparar_canilleras(protector[j+1], protector[j])) {
				canilleras temp = protector [j];
				protector[j] = protector [j+1];
				protector[j+1] = temp;
			}
		}
	}
}
void mostrar_canilleras_ordenadas(canilleras protector[], int &n4){
	cout << "_____________________________________________________________________" << endl;
    cout << "\n           LISTA DE CANILLERAS ORDENADAS ALFABETICAMENTE               " << endl;
    cout << "---------------------------------------------------------------------" << endl;
    cout << left << setw(15) << "COLOR" 
         << setw(10) << "TALLA" 
         << setw(15) << "MARCA" 
         << setw(10) << "PRECIO" 
         << setw(10) << "CANTIDAD" << endl;
    cout << "---------------------------------------------------------------------" << endl;
    
    for (int i = 0; i < n4; i++) {
        cout << left << setw(15) << protector[i].color 
             << setw(10) << protector[i].talla
             << setw(15) << protector[i].marca
             << setw(10) << protector[i].precio
             << setw(10) << protector[i].cantidad << endl;
    }
    cout << "_____________________________________________________________________" << endl;
}
//ordenar medias 
bool comparar_medias (const medias &a, const medias &b){
	return a.color < b.color;
}
void ordenar_medias ( medias media_larga [], int & n5){
	for (int i =0 ; i < n5-1; i++){
		for (int j =0 ; j < n5 - i - 1; j++){
			if (comparar_medias(media_larga[j+1], media_larga[j])) {
				medias temp = media_larga [j];
				media_larga[j]  = media_larga [j+1];
				media_larga[j+1] = temp;
			}
		}
	}
}
void mostrar_medias_ordenadas ( medias media_larga [], int &n5) {
	cout << "_____________________________________________________________________" << endl;
    cout << "\n           LISTA DE MEDIAS ORDENADAS ALFABETICAMENTE               " << endl;
    cout << "---------------------------------------------------------------------" << endl;
    cout << left << setw(15) << "COLOR" 
         << setw(10) << "TALLA" 
         << setw(15) << "MARCA" 
         << setw(10) << "PRECIO" 
         << setw(10) << "CANTIDAD" << endl;
    cout << "---------------------------------------------------------------------" << endl;
    
    for (int i = 0; i < n5; i++) {
        cout << left << setw(15) << media_larga[i].color 
             << setw(10) << media_larga[i].talla
             << setw(15) << media_larga[i].marca
             << setw(10) << media_larga[i].precio
             << setw(10) << media_larga[i].cantidad << endl;
    }
    cout << "_____________________________________________________________________" << endl;
}

// ordenar balones
bool comparar_balones(const balones &a, const balones &b) {
    return a.color < b.color;
}
void ordenar_balones(balones pelota[], int &n6) {
    for (int i = 0; i < n6 - 1; i++) {
        for (int j = 0; j < n6 - i - 1; j++) {
            if (comparar_balones(pelota[j + 1], pelota[j])) {
                balones temp = pelota[j];
                pelota[j] = pelota[j + 1];
                pelota[j + 1] = temp;
            }
        }
    }
}
void mostrar_balones_ordenados (balones pelota[], int &n6){
	cout << "_____________________________________________________________________" << endl;
    cout << "\n           LISTA DE BALONES ORDENADOS ALFABETICAMENTE               " << endl;
    cout << "---------------------------------------------------------------------" << endl;
    cout << left << setw(15) << "COLOR" 
         << setw(10) << "TAMAÑO" 
         << setw(15) << "MARCA" 
         << setw(10) << "PRECIO" 
         << setw(10) << "CANTIDAD" << endl;
    cout << "---------------------------------------------------------------------" << endl;
    
    for (int i = 0; i < n6; i++) {
        cout << left << setw(15) << pelota[i].color 
             << setw(10) << pelota[i].tamano
             << setw(15) << pelota[i].marca
             << setw(10) << pelota[i].precio
             << setw(10) << pelota[i].cantidad << endl;
    }
    cout << "_____________________________________________________________________" << endl;
}
//_______________________________________________________________________________________________________________________________________________________________


