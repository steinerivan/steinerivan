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

vector<int> symbols(vector<string>& a){
    vector<int> v;
    for(unsigned long i = 0; i < a.size(); i++){
        v.push_back(int(a[i].size()));
    }
    return v;
}
string minimum(vector<string>& a){
    string min{a[0]};
    for(unsigned long i = 0; i < a.size(); i++){
        if(min.size()>a[i].size()){min = a[i];}
    }
    return min;
}
string maximum(vector<string>& a){
    string max{a[0]};
    for(unsigned long i = 0; i < a.size(); i++){
        if(max.size()<a[i].size()){max = a[i];}
    }
    return max;
}

int main() {
    try{
        vector<string> strings{"Ivan", "Andrey", "John", "Jake"};
        vector<int> answer = symbols(strings);
        for(int i = 0; i < answer.size(); i++){
            cout << " " << answer[i];
        }
        sort(strings.begin(), strings.end());
        cout << " " << minimum(strings) << " " << maximum(strings) << " " << strings[0] << " " << strings[strings.size()-1];
        return 0;
    }
    catch(...){
        cerr << "Invalid size";
    }
}
