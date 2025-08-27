#include<iostream>

using namespace std;

int main (){
	int hora, min;
	
	
	cout<<"Digita tu hora de entrada(Solo hora sin minuto):\n ";cin>>hora;
	cout<<"Digita los minutos de entrada:\n ";cin>>min;
	
	if (hora<24 && hora>=0 && min>=0 && min <60) {
		if (hora<10) cout<<"0"<<hora;
		else cout<<hora;
		
		cout<<":";
		
		if (min<10) cout<<"0"<<min;
		else cout<<min;

	
	
	}	
	else cout<<"\nHora invalida\n";


	cout<<"\nDigita tu hora de salida(Solo hora sin minuto):\n ";cin>>hora;
	cout<<"Digita los minutos de salida:\n ";cin>>min;
	
	if (hora<24 && hora>=0 && min>=0 && min <60) {
		if (hora<10) cout<<"0"<<hora;
		else cout<<hora;
		
		cout<<":";
		
		if (min<10) cout<<"0"<<min;
		else cout<<min;

	
	
	}	
	else cout<<"Hora invalida";
	

