//
//  main.cpp
//  test
//
//  Created by Ivan Voloshyn on 23.02.23.
//

#include <iostream>
#include <vector>
#include <stdexcept>
#include <cmath>

using namespace std;

void sqrt1(double a, double b, double c){
    double diskr = b*b-4*a*c;
    if(diskr < 0){throw runtime_error("Error");}
    if(diskr == 0){
        double x1 = -b/(2*a);
        cout << x1 << "\n";
    }
    else{
        double x1, x2;
        x1 = (-b+sqrt(diskr))/(2*a);
        x2 = (-b-sqrt(diskr))/(2*a);
        cout << x1 << " " << x2 << "\n";
    }
}

int main() {
    try{
        double a, b, c;
        cout << "Enter coefficient a, b and c in ax^2+bx+c=0\n";
        cin >> a >> b >> c;
        sqrt1(a, b, c);
        return 0;
    }
    catch(exception& e){
        cerr << "No solutions";
    }
}
