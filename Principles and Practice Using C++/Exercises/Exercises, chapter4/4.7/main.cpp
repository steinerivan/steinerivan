//
//  main.cpp
//  Упражнения, глава 4.7
//
//  Created by Ivan Voloshyn on 23.01.23.
//

#include <iostream>
#include <vector>

using namespace std;

void rechnen(double zahl1, double zahl2, string todo){
    if(todo == "*"){
        cout << "\nMultiplikation von " << zahl1 << " und " << zahl2 << " ist gleich " << zahl1*zahl2 << "\n";
    }
    else if(todo == "+"){
        cout << "\nSumme von " << zahl1 << " und " << zahl2 << " ist gleich " << zahl1+zahl2 << "\n";
    }
    else if(todo == "-"){
        cout << "\nDifferenz von " << zahl1 << " und " << zahl2 << " ist gleich " << zahl1-zahl2 << "\n";
    }
    else if(todo == "/"){
        cout << "\nDivision von " << zahl1 << " und " << zahl2 << " ist gleich " << zahl1/zahl2 << "\n";
    }
    else{
        throw runtime_error("Wrong enter");
    }
}

void wiederhol(int zahl1, int zahl2){
    string enter;
    vector<string> wort = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    vector<string> ziffer = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9"};
    vector<int> zahl = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    while(){
        for(int i = 0; i < ziffer.size(); ++i){
            if(ziffer[i]==enter){
                cout << wort[i] << "\n";
                break;
            }
            if(wort[i]==enter){
                cout << ziffer[i] << "\n";
                break;
            }
        }
    }
}


int main() {
    double zahl1, zahl2;
    string todo;
    cout << "Enter zwei Zahlen und Operation!\n";
    cin >> zahl1 >> zahl2 >> todo;
    rechnen(zahl1, zahl2, todo);
    return 0;
}
