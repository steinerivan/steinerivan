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

void checkv(vector<double>& v){
    double max = v[0];
    double min = v[0];
    double sum {0};
    for(int i = 0; i < v.size(); i++){
        if(max<v[i]){max=v[i];}
        if(min>v[i]){min=v[i];}
        sum = sum + v[i];
    }
    double average = sum/v.size();
    double median = 0.0;
    if(v.size()%2==0)
    {
        median = (v[v.size()/2]+v[v.size()/2-1])/2;
    }
    else{
        median = v[v.size()/2+0.5];
    }
    cout << min << " " << max << " " << median << " " << average <<  "\n";
}

int main() {
    try{
        vector<double> price{1, 0.5, 7.7, 6.6};
        checkv(price);
        return 0;
    }
    catch(...){
        cerr << "Invalid size";
    }
}
