#ifndef FUNCIONES_H
#define FUNCIONES_H
#include<iostream>
#include"estructuras.h"
//declarar funciones para mostrar lista de productos
void mostrar_camisetas(camisetas arr[], int &n1);
void mostrar_shorts(shorts arr[], int &n2);
void mostrar_zapatillas(zapatillas arr[], int &n3);
void mostrar_canilleras(canilleras arr[], int &n4);
void mostrar_medias(medias arr[], int &n5);
void mostrar_balones(balones arr[], int &n6);


//declarar funciones para agregar producto
void agregar_camisetas(camisetas arr[], int &n1);
void agregar_shorts(shorts arr[], int &n2);
void agregar_zapatillas(zapatillas arr[], int &n3);
void agregar_canilleras(canilleras arr[], int &n4);
void agregar_medias(medias arr[], int &n5);
void agregar_balones(balones arr[], int &n6);

// declarar funciones para actualizar un producto
void mostar_menu_principal( );

void submenu_actualizar_camisetas(camisetas camiseta[], int& n1);
void submenu_actualizar_shorts(shorts pantalon_corto[], int& n2);
void submenu_actualizar_zapatillas(zapatillas zapatillas[], int& n3);
void submenu_actualizar_canilleras(canilleras canilleras[], int& n4);
void submenu_actualizar_medias(medias medias[], int& n5);
void submenu_actualizar_balones(balones balones[], int& n6);

void actualizar_camisetas(camisetas arr[], int &n1, int indice);
void actualizar_shorts(shorts arr[], int &n2, int indice);
void actualizar_zapatillas(zapatillas arr[], int &n3, int indice);
void actualizar_canilleras(canilleras arr[], int &n4, int indice);
void actualizar_medias(medias arr[], int &n5, int indice);
void actualizar_balones(balones arr[], int &n6, int indice);

//declarar funciones para eliminar un producto
void eliminar_camisetas(camisetas arr[], int &n1);
void eliminar_shorts(shorts arr[], int &n2);
void eliminar_zapatillas(zapatillas arr[], int &n3);
void eliminar_canilleras(canilleras arr[], int &n4);
void eliminar_medias(medias arr[], int &n5);
void eliminar_balones(balones arr[], int &n6);

//declarar funciones para registrar una venta
void registar_ventas(ventas arr1[], camisetas arr2[], int &n1, int &v1, int &cont1);
void registar_ventas(ventas arr1[], shorts arr2[], int &n2, int &v1, int &cont2);
void registar_ventas(ventas arr1[], zapatillas arr2[], int &n3, int &v1, int &cont3);
void registar_ventas(ventas arr1[], canilleras arr2[], int &n4, int &v1, int &cont4);
void registar_ventas(ventas arr1[], medias arr2[], int &n5, int &v1, int &cont5);
void registar_ventas(ventas arr1[], balones arr2[], int &n6, int &v1, int &cont6);

//declarar funciones para ver el tipo de producto más vendido
void producto_mas_vendido(int &cont1, int &cont2, int &cont3, int &cont4, int &cont5, int &cont6);

//declarar funciones para mostrar historial de ventas
void historial_ventas(ventas arr1[], int &v1);
//declarar funciones para mostrar la ganancia total
double dinero_acumulado(ventas arr[], int &v1);

#endif
