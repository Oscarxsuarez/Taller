#include<iostream>

using namespace std;

int main (){

int mesact, mes, dia;

cout<<"Digite su mes de nacimiento (en numeros, ejemplo: 4, es decir abril )"<<endl; cin>>mes;
cout<<"Digite su dia de nacimeinto"<<endl; cin>>dia;

if (dia<=31 ){
    cout<<"Las fechas ingresadas son del mes "<<mes<<" del dia "<<dia<<"\n  ";
switch (mes) {
        case 1:
            if (dia < 20){
                cout << "Eres Capricornio\n";
            }
            else{
                cout << "Eres Acuario\n";}
            break;
           

        case 2:
        if(dia<=29){
            if (dia < 19){
                cout << "Eres Acuario\n";}
            else{
                cout << "Eres Piscis\n";}
        }else{cout<<"Error, dia no valido\n";}
            break;

        case 3:
            if (dia < 21){
                cout << "Eres Piscis\n";}
            else{
                cout << "Eres Aries\n";}
            break;

        case 4:
            if (dia < 20){
                cout << "Eres Aries\n";}
            else{
                cout << "Eres Tauro\n";}
            break;

        case 5:
            if (dia < 21){
                cout << "Eres Tauro\n";}
            else{
                cout << "Eres Geminis\n";}
            break;

        case 6:
            if (dia < 21){
                cout << "Eres Geminis\n";}
            else{
                cout << "Eres Cancer\n";}
            break;

        case 7:
            if (dia < 23){
                cout << "Eres Cancer\n";}
            else{
                cout << "Eres Leo\n";}
            break;

        case 8:
            if (dia < 23){
                cout << "Eres Leo\n";}
            else{
                cout << "Eres Virgo\n";}
            break;

        case 9:
            if (dia < 23){
                cout << "Eres Virgo\n";}
            else{
                cout << "Eres Libra\n";}
            break;

        case 10:
            if (dia < 23){
                cout << "Eres Libra\n";}
            else{
                cout << "Eres Escorpio\n";}
            break;

        case 11:
            if (dia < 22){
                cout << "Eres Escorpio\n";}
            else{
                cout << "Eres Sagitario\n";}
            break;

        case 12:
            if (dia < 22){
                cout << "Eres Sagitario\n";}
            else{
                cout << "Eres Capricornio\n";}
            break;

        default:
            cout << "Error, mes no valido.\n";
              break;
    }
} else {
    cout<<"Error\n";
}
    return 0;
}
