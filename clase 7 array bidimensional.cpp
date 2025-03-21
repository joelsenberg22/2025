#include <iostream>
using namespace std;

main(){
	//arreglos bidimensionales, matriz, tabla
	int fila=0,col=0;
	cout<<"ingrese las filas :";
	cin>>fila;
	cout<<"Ingrese las columnas :";
	cin>>col;
	int matriz [fila][col];
	 cout<<"-------------ingresar------------"<<endl;
     for (int i=0;i<fila;i++){
     	for(int ii=0;ii<col;ii++){
     		cout<<i<<" , "<<ii<<" : ";
     		cin>>matriz[i][ii];
			 }
			 cout<<"----------"<<endl;
	 }

	     cout<<"-------------Mostrar------------"<<endl;
     for (int i=0;i<fila;i++){
     	for(int ii=0;ii<col;ii++){
     		cout<<i<<" , "<<ii<<" : "<<matriz[i][ii]<<endl;
			 }
	 }
	
	
	
	
	


}



	/*cout<<matriz[0][0]<<endl;
	cout<<matriz[0][1]<<endl;
	cout<<matriz[0][2]<<endl;
	cout<<matriz[1][0]<<endl;
	cout<<matriz[1][1]<<endl;
	cout<<matriz[1][2]<<endl;
	*/
