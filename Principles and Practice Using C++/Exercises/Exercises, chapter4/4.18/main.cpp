//
//  main.cpp
//  Упражнения, глава 4.18
//
//  Created by Ivan Voloshyn on 23.01.23.
//

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    cout << "Enter a, b, c for ax^2+bx+c=0, damit ich das berechnen kann!\n";
    double a, b, c, antwort, antwort1;
    while(cin >> a >> b >> c){
        int diskr = sqrt(b*b-4*a*c);
        if(diskr==0){
            antwort = -b/(2*a);
            cout << "\nHere is only one solution: " << antwort;
        }
        else if(diskr > 0){
            antwort1 = (-b+diskr)/(2*a);
            antwort = (-b-diskr)/(2*a);
            cout << "\nHere are two solutions: " << antwort << " und " << antwort1;
        }
        else{
            cout << "\nThere are no solutions";
        }
    }
    
    return 0;
}
