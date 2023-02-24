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
#include <stdlib.h>

using namespace std;

double maxv(vector<double>& v){
    double max = v[0];
    for(int i = 0; i < v.size(); i++){
        if(max<v[i]){max=v[i];}
    }
    return max;
}

int main() {
    try{
        vector<double> price{1, 5.5, 7.7, 6.6};
        double prices, weights;
        cout << maxv(price) << "\n";
        return 0;
    }
    catch(...){
        cerr << "Invalid size";
    }
}
