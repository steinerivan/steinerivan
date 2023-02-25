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

class Name_pairs{
    vector<string> name;
    vector<double> age;
public:
    void read_names(){
        name.clear();
        cout << "Give your names(to finish enter |)\n";
        string names;
        while(cin>>names){
            if(names == "|"){break;}
            name.push_back(names);
        }
    }
    void read_ages(){
        age.clear();
        cout << "Give your ages(to finish enter |)\n";
        double ages;
        while(cin>>ages){
            age.push_back(ages);
        }
    }
    void print(){
        if(age.size()!=name.size()){throw runtime_error("Error");}
        for(int i = 0; i < name.size(); i++){
            cout << name[i] << " " << age[i] << "\n";
        }
    }
    void sorts(){
        vector<string> v = name;
        sort(name.begin(), name.end());
        vector<double> copy;
        for(int i = 0; i < name.size(); i++){
            for(int x = 0; x < v.size(); x++){
                if(name[i]==v[x]){copy.push_back(age[x]);}
            }
        }
        age = copy;
    }
};

int main() {
    try{
        Name_pairs a;
        a.read_names();
        a.read_ages();
        a.print();
        a.sorts();
        a.print();
        return 0;
    }
    catch(...){
        cerr << "Invalid size";
    }
}
