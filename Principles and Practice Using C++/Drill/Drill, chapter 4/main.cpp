//
//  main.cpp
//  Задание, 4 глава
//
//  Created by Ivan Voloshyn on 23.01.23.
//

#include <iostream>

using namespace std;

int main() {
    cout << "Введите два числа!\n";
    double zahl1, zahl2;
    string size1, size2;
    while(cin>>zahl1){
        while(cin>>zahl2){
            if(zahl1>zahl2){
                cout << "\nНаименьшее значение равно: " << zahl2;
                cout << "\nНаибольшее значение равно: " << zahl1;
            }
            else if(zahl1==zahl2){
                cout << "\nЧисла равны.";
                
            }
            else{
                cout << "\nНаименьшее значение равно: " << zahl1;
                cout << "\nНаибольшее значение равно: " << zahl2;
            }
            if((zahl1>zahl2&&zahl1-zahl2<1.0/100)||(zahl1<zahl2&&zahl2-zahl1<1.0/100)){
                cout << "\nЧисла почти равны.";
            }
            break;
            
                
        }
    }
    return 0;
}
