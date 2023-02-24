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

double fahrenheit(double f){
    double c = (f-32)*5/9;
    return c;
}

int main() {
    try{
        double f = 122;
        if(fahrenheit(f)<-273.15){throw runtime_error("Error"); return 1;}
        double c = fahrenheit(f);
        if(c!=50){throw runtime_error("Fail");}
        cout << c << "\n";
        return 0;
    }
    catch(exception& e){
        cerr << "Error";
    }
}
