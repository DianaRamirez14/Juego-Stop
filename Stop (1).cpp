#include <iostream>
#include <ctime> // Aleatoriedad de las letras 
#include <ctype.h> // Se encarga de todo lo relacionado a modificar y operar con caracteres
#include <chrono> //Es una librería de cabecera de C++ con la que podemos trabajar con el tiempo
#include <thread>
#include <string.h>
#include <string>

using namespace std;
string espaciar (int tamanio, int valor) {
  int espacio = 0; 
  string texto = "";

  espacio = valor - tamanio;
  for (int i = 0; i < espacio; i++){
    texto = texto + " ";
  }
  return texto;
}
//void tabla (string categoria[], string [][10]); // mostrara tabla

int main() {

  // Definicion de las variables 
time_t ti, tf, tti, ttf; // Variable para el tiempo
string nombre, desicion;
string nombre2 [5], apellido [5], capital [5], animal [5], pais [5], fruta [5], color [5], objeto [5];
int  i = 0, j = 0;
tf = time(0);
float tt[4];

  // Bienvenida e ingreso del nombre del juegador 
  cout << "-----------------------------------------------------------------" << endl;
cout << " \t Hola, ¡este es el juego del Stop!" << endl;
  cout << "-----------------------------------------------------------------" << endl;
  cout << "¿Cómo te llamas?" << endl;
  cin >> nombre;
  
  // Reglas del juego
cout << "\nHola " << nombre << ", acontinuación te voy a mostrar las REGLAS DEL JUEGO: \n" << endl;
cout  << "Tendras 4 turnos y te vamos a dar 4 letras del abecedario de manera aleatoria (¡Importante!, tienes que escribir las palabras solo en mayuscula, de lo contrario no recibirás puntaje)" << endl << "Por cada letra debes escribir palabras que inicien con dicha letra que correspondan a: \n"<< endl << "-Nombre" << endl << "-Apellido"<<  endl << "-Ciudad" << endl << "-Pais"<< endl << "-Animal" << endl << "-Fruta" << endl << "-Color" << endl << "-Objeto \n" << endl << "PUNTUACIÓN: \n" << endl << "* Por cada palabra correcta se te asignarán 20 puntos" << endl << "* Por cada palabra incorrecta se te quitarán 20 puntos" << endl << "* Si no escribes nada, no se te quitarán ni se te restarán puntos \n" << endl;
  //cout<< "¿Cuantos turnos quieres jugar?" << endl;
  //cin >> turno;
  cout<< "¡¿Ya estás listo?!, escribe si o no para continuar" << endl;
  cin >> desicion;

  
  //Desicion por si se continua o no con el juego 
  if (desicion == "si" || "Si" || "SI" || "sI")
  {
cout << "\nComencemos\n" << endl;
    cout << "-----------------------------------------------------------------------------" << endl;
  }
  else 
  {
    cout << "\n Game Over >.<" << endl;
    return (0) ;
  }
  
// Numero de turnos 
  while ( i < 4 ) {
//Aleatoriedad de las letras 
srand(time(NULL));
 
    string letra = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
     char ch  = letra[rand() % letra.size()];
    cout << "\nLa letra es: " << ch << endl;


  ti = time(0);
// Ingreso de palabras 
  cout << "\nINGRESE " << endl << "\nNombre: " << endl;
  cin >> nombre2 [i];
  cout << "\nApellido: " << endl; 
  cin >> apellido [i];
  cout << "\nCiudad: " << endl;
  cin >> capital [i];
  cout << "\nPais: " << endl;
  cin >> pais [i];
  cout << "\nAnimal: " << endl; 
  cin >> animal [i];
  cout << "\nFruta: " << endl; 
  cin >> fruta [i];
  cout << "\nColor: " << endl;
  cin >> color [i];
  cout << "\nObjeto: " << endl;
cin >> objeto [i];
   
    i++;
tf = time(0);
    
     }


  


cout << "\nTu puntaje es :o" << endl;
//cout << "___________________________________________________________________________________________________________________\n"  << endl;
//cout << "LETRA   NOMBRE    APELLIDO  CIUDAD    PAIS      ANIMAL    FRUTA     COLOR     OBJETO    TIEMPO(SEG)  TOTAL\n"  << endl;
//cout << "___________________________________________________________________________________________________________________\n" << endl;  
//for (int l = 0; l < 4; l++){
  //cout << i espaciar(8) << nombre2[i] << espaciar(nombre2.size()), 10) << apellido[i] << espaciar(apellido.size()), 10) << ciudad[i] << espaciar(ciudad.size()), 10) << pais[i] << espaciar(pais.size()), 10) << animal[i] << espaciar(animal.size()), 10) << fruta[i] << espaciar(fruta.size()), 10) << color[i] << espaciar(color.size()), 10) << objeto[i] << espaciar(objeto.size()), 10) << tf << espaciar(tf.size()), 10)

  


for (j=0; j<4; i++) { 
  cout << "\nNOMBRE: " << nombre2[i] << endl;
  cout << "\nAPELLIDO: " << apellido[i] << endl;
  cout << "\nCIUDAD: " << capital[i] << endl;
  cout << "\nPAIS: " << pais[i] << endl;
  cout << "\nANIMAL: " << animal[i] << endl;
  cout << "\nFRUTA: " << fruta[i] << endl;
  cout << "\nCOLOR: " << color[i] << endl;
  cout << "\nOBJETO: " << objeto[i] << endl;
  cout << "\nTiempo Inicial: " << ti << endl;
 cout << "\nTiempo Final: " << tf << endl;
  cout << "\nTiempo Total: " << tf-ti << " Segundos" << endl;
 }
  cout << "" << objeto [i] << endl;
  return 0;
}