#ifndef MENUS_H_INCLUDED
#define MENUS_H_INCLUDED

void menuIncio();
void menuAdmin();
void menuUser(int dni);
void cuadroSeleccionarEspacio();
void cuadroSeleccionarSector(int espacio);
void cuadroSeleccionDia(int espacio);
void cuadroConfirmacionReserva();
void cuadroLimitarEspacio(int);
bool menuModificarDatos(int nroRegistro);

#endif // MENUS_H_INCLUDED
