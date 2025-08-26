
//Situación1
# include <iostream>

using namespace std;

int main(){

     int ctp, perso;
     double total, cosp, topso;
   
    cout<<"Ingrese el numero de productos: "<<endl ;cin>>ctp;
    cout<<"Ingrese el precio unitario del producto: "<<endl ; cin>>cosp;
    
    total = ctp * cosp;
    cout<<"El total de la cuenta es: " <<total<<endl; 
    
       
   cout<<"Ahora ingresa el numero de personas que van a pagar el total (si es solo una digita una y no se acepta 0): "; cin>>perso;

 
    if (perso >0 )
    { 
    topso = total / perso;
    
    cout<< "La cuenta a pagar por persona es: " <<topso<<endl;
    
    	
	 } else 
	 { 
	 cout<<"Ingreso no valido de personas, Error."<<endl;

	 }
 return 0;
	}    
    
    
 
