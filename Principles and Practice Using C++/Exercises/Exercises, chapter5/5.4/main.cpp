//
//  main.cpp
//  test
//
//  Created by Ivan Voloshyn on 23.02.23.
//

#include <iostream>
#include <vector>
#include <stdexcept>

using namespace std;

double ctok(double c){
    if(c<-273.15){cerr << "Error range\n"; return 1;}
    double k = c + 273.15;
    return k;
}

int main() {
    double c = 0;
    cin >> c;
    double k = ctok(c);
    cout << k << "\n";
    return 0;
}
