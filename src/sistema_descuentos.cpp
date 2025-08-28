#include <iostream>
using namespace std;
int main () {
    double vip,pa,pp,tp,dp,fp;

    cout << "Ingrese el 1 si es cliente VIP, y el 0 si es cliente regular: ";
    cin >> vip;
    if (vip ==1) {
    	 cout << "El usuario es un cliente VIP." << endl;
        cout << "Ingrese la cantidad de productos: ";
        cin >> pa;
        cout << "Ingrese el valor unitario del producto: ";
        cin >> pp;
        tp = (pa * pp);
        dp = (tp * 20) / 100;
        fp = tp - dp;
        cout << "El precio de la compra es: $" << tp << " y con el 20% de descuento el valor total de la compra es: $" << fp;
    }else if (vip==0) {
        cout << "El usuario es un cliente regular." << endl;
        cout << "Ingrese la cantidad de productos: ";
        cin >> pa;
        cout << "Ingrese el valor unitario del producto: ";
        cin >> pp;
        tp = (pa * pp);    
        if (pa >= 4) {
            dp = (tp * 10) / 100;
            fp = tp - dp;
            cout << "El precio de la compra es: $" << tp << " y con el 10% de descuento el valor total de la compra es: $" << fp;
        }else {
            cout << "El precio total de la compra es: $" << tp;
        }
    }
	else if (vip>1) cout<<"Error\n";
    
    return 0;
}
