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

vector<string> inverse(vector<string> a){
    vector<string> v;
    int x = 1;
    for(int i = 0; i < a.size(); i++){
        v.push_back(a[a.size()-x]);
        x++;
    }
    return v;
}


vector<string> vectorswap(vector<string> a){
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
    vector<string> strings{"a", "b", "ccc", "d", "e"};
    vector<string> a = inverse(strings);
    vector<string> v = vectorswap(strings);
    for(int i = 0; i < v.size(); i++){
        cout << " " << v[i];
    }
    for(int i = 0; i < a.size(); i++){
        cout << " " << a[i];
    }
        return 0;
}
