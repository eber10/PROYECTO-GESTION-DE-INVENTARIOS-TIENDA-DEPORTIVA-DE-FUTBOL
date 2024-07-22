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

#endif
