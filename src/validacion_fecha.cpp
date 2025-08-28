#include<iostream>

using namespace std;

int main (){
	
	int mesact, mes, ano, dia;
	cout<<"Digite el mes actual (en numeros, ejemplo: 4, es decir abril )\n"; cin>>mesact;
	cout<<"Digite su ano de nacimiento(tienes que por lo menos haber nacido en 2007)"<<endl; cin>>ano;
	cout<<"Digite su mes de nacimiento (en numeros, ejemplo: 4, es decir abril )"<<endl; cin>>mes;
	cout<<"Digite su dia de nacimeinto"<<endl; cin>>dia;
	
	if (ano<2008  && mesact==mes  && dia<=31) {
		switch(mes){
			case 1 :
				cout<<"¡Tienes la promocion especial por cumplir en Enero!\n";
				break;
			case 2 :
				if(dia>29){
					cout<<"Error\n";
					break;
				}
				
			cout<<"¡Tienes la promocion especial por cumplir en Febrero!\n";
				break;
			case 3 :
				cout<<"¡Tienes la promocion especial por cumplir en Marzo!\n";
				break;
			case 4 :
					if(dia>30){
					cout<<"Error\n";
					break;
				}
				cout<<"¡Tienes la promocion especial por cumplir en Abril!\n";
				break;
			case 5 :
				cout<<"¡Tienes la promocion especial por cumplir en Mayo!\n";
				
				break;
			case 6 :
					if(dia>30){
					cout<<"Error\n";
					break;
				}					
				cout<<"¡Tienes la promocion especial por cumplir en Junio!\n";
				break;
			case 7 :
				cout<<"¡Tienes la promocion especial por cumplir en Julio!\n";
				break;
			case 8 :
				cout<<"¡Tienes la promocion especial por cumplir en Agosto!\n";
				break;
			case 9 :
					if(dia>30){
					cout<<"Error\n";
					break;
				}	
				cout<<"¡Tienes la promocion especial por cumplir en Septiembre!\n";
				break;
			case 10 :
				cout<<"¡Tienes la promocion especial por cumplir en Octubre!\n";
				break;
			case 11 :
					if(dia>30){
					cout<<"Error\n";
					break;
				}	
				cout<<"¡Tienes la promocion especial por cumplir en Noviembre!\n";
				break;
			case 12 :
				cout<<"¡Tienes la promocion especial por cumplir en Diciembre!\n";
				break;
			default :
				cout<<"Error, no se permite esta fecha\n";
			break;
		}
		
	}
	else if (mesact != mes){
		cout<<"Lo siento, no tienes la promocion\n";
	}
	else  {
	cout<<"Error, no se permite esta fecha\n";
	}
	cout<<"Las fechas ingresadas son del ano: "<<ano<<" del mes "<<mes<<" del dia "<<dia<<" y el mes actual para la promocion es el : "<<mesact;
	return 0;
}



