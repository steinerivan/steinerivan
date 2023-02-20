//
//  main.cpp
//  Упражнения, глава 4.5
//
//  Created by Ivan Voloshyn on 23.01.23.
//

#include <iostream>
#include <stdexcept>

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


int main() {
    double zahl1, zahl2;
    string todo;
    cout << "Enter zwei Zahlen und Operation!\n";
    cin >> zahl1 >> zahl2 >> todo;
    rechnen(zahl1, zahl2, todo);
    return 0;
}
