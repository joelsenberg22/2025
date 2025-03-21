#include <iostream>
using namespace std;

main(){
     string semana[7]={"Lunes","Martes","Miercoles","jueves","Viernes","Sabado","Domingo"};
     semana [3]="Jueves";
     for(int i=0;i<7;i++){
     	cout<<semana[i]<<endl;
	 }
};


/*

	//array = arreglo o coleccion o matriz
	//se utilizan para almacenar varios valores en una sola variable
	int tam=0,suma=0,promedio=0;
	int notas[tam];
	char res;
	do{
		tam++;
		cout<<"ingrese nota "<<tam<<" : ";
			cin>>notas[tam-1];
		cout<<"desea ingresar otra nota (s/n): ";
		cin>>res;
	}while(res=='s'||res=='S');
	
	for(int i=0;i<tam;i++){
			suma += notas[i];
	}
	promedio =suma /tam;
	cout<< "el promedio es :"<<promedio<<endl;
	
*/


/*
cout<<"cuantas notas desea ingresar: ";
	cin>>tam;
	int notas[tam]; 
	for(int i=0;i<tam;i++){
		cout<<"ingrese nota "<<i+1<<":";
		cin>>notas[i];
		
	}
	for(int i=0;i<tam;i++){
		suma += notas[i]; //suma =suma+ notas[i}
	}
	promedio =suma /tam;
	cout<< "el promedio es :"<<promedio<<endl;
	
	
	
	  char nombre[30];
   cout<<"ingrese nombre :";
   //cin>>nombre;
   cin.get(nombre,30);
   cout<<nombre<<endl;
   
    string nombre; //char nombre [30}
 cout<<"ingrese nombre completo"
 getline(cin,nombre);
 cout<<nombre<<endl;
 
 
 string nombre; 
	int datos=0;
	cout<<"Dato :";
	cin>>datos;
	cin.ignore();
	cout<<"Ingrese Nombre Completo:";
	getline(cin,nombre);
	cout<<nombre<<endl;
*/

