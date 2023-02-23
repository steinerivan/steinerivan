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

double ktoc(double k){
    double c = k - 273.15;
    return c;
}

int main() {
    double k = 0;
    cin >> k;
    if(k<0){cerr << "Error range\n"; return 1;}
    double c = ktoc(k);
    cout << c << "\n";
    return 0;
}
