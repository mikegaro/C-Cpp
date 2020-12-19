#include<iostream>
//Hay dos versiones de main, la que no adquiere parametros "main()" y

//la version main(int argc, char *argv[])
//En esta version, main espera informacion del SO. Es decir, si debes
//ingresar informacion al progrma desde la terminal (lo cual es muy comun
//desde la linea de comando).

/* Main solicita dos parametros, primero se requieren el numero de datos
   que se ingresaron y el segundo parametro son los datos en forma de array
   de caracteres
  */
//main(int numero_de_datos, char * datos_ingresados[])

//Para ingresar estos argumentos se escribe:

//C: programa.exe argumento1 argumento2

int main(int argc, char const *argv[]) {
  std::cout << "jeje ya entendi pa que sirve lo del main" << std::endl;
  return 0;
}
