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



int main() {
    try{
        vector<string> names;
        vector<int> ages;
        string name;
        int age;
        cout << "Enter names(to finish enter |)\n";
        while(cin>>name){
            if(name=="|"){break;}
            names.push_back(name);
        }
        cout << "Enter ages(to finish enter |)\n";
        while(cin>>age){
            ages.push_back(age);
        }
        if(ages.size()!=names.size()){throw runtime_error("Invalid input");}
        vector<string> new_names = names;
        sort(names.begin(), names.end());
        for(int i = 0; i < names.size(); i++){
            cout << names[i] << " ";
            for(int x = 0; x < new_names.size(); x++){
                if(new_names[x]==names[i]){
                    cout << ages[x] << "\n";
                }
            }
        }
        return 0;
    }
    catch(...){
        cerr << "Invalid input";
    }
}
