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



int main() {
    try{
        vector<int> fibonacci{1, 1};
        for(int i = 1; i < fibonacci.size(); i++){
            fibonacci.push_back(fibonacci[i]+fibonacci[i-1]);
            cout << fibonacci[i-1] << " ";
            if(fibonacci.size()>50) {throw runtime_error("error");}
            // max size from place where answer starts with negative number
        }
        return 0;
    }
    catch(exception& e){
        cerr << "Error";
    }
}
