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

vector<int> inverse(vector<int> a){
    vector<int> v;
    int x = 1;
    for(int i = 0; i < a.size(); i++){
        v.push_back(a[a.size()-x]);
        x++;
    }
    return v;
}


vector<int> vectorswap(vector<int> a){
    int x = 1;
    while(x!=a.size()){
        for(int i = 0; i < a.size()-x; i++){
            if(i+1!=a.size()){
                swap(a[i], a[i+1]);
            }
        }
        x++;
    }
    return a;
}


int main() {
    vector<int> numbers{1, 2, 3, 4, 5};
    vector<int> v = vectorswap(numbers);
    for(int i = 0; i < v.size(); i++){
        cout << " " << v[i];
    }
        return 0;
}
