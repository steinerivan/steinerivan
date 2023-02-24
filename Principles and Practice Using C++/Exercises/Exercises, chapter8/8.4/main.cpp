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

void print(vector<int>& a){
    bool first = true;
    for(int i = 0; i < a.size(); i++){
        if(first == true){
            cout << a[i];
            first = false;
        }
        else{
            cout << " " << a[i];
        }
    }
}
vector<int> fibonacci(int x, int y, vector<int> v, int n){
    v.push_back(x); v.push_back(y);
    int i = 2;
    if(n<2){throw runtime_error("Error");}
    while(n != v.size()){
        v.push_back(v[i-2]+v[i-1]);
        i++;
        if(v[i-2]+v[i-1]<0){cout << "Max number is the last number in a row: " << v[i-3]+v[i-2] << "\n"; break;}
    }
    return v;
}
int main() {
    try{
        int x, y, n;
        vector<int> v, numbers;
        cout << "Enter x, y and n for fibonacci\n";
        cin >> x >> y >> n;
        numbers = fibonacci(x, y, v, n);
        print(numbers);
        cout << "\n";
        return 0;
    }
    catch(exception& e){
        cerr << "Error enter";
    }
}
