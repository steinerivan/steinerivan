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

int main() {
    try{
        int number;
        vector<int> numbers;
        while(cin>>number){
            numbers.push_back(number);
        }
        print(numbers);
        cout << "\n";
        return 0;
    }
    catch(exception& e){
        cerr << "Error enter";
    }
}
