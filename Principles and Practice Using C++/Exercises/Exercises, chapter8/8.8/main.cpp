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

double sum(vector<double> price, vector<double> weight){
    if(price.size()!=weight.size()){throw runtime_error("");}
    double sum{0};
    for(int i = 0; i < price.size(); i++){
        sum = sum + price[i]*weight[i];
    }
    return sum;
}

int main() {
    try{
        vector<double> price{1, 5.5, 6.6}, weight{5, 6, 7.5};
        double prices, weights;
        cout << sum(price, weight);
        return 0;
    }
    catch(...){
        cerr << "Invalid size";
    }
}
