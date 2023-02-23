//
//  main.cpp
//  test
//
//  Created by Ivan Voloshyn on 23.02.23.
//

#include <iostream>
#include <vector>
#include <stdexcept>

using namespace std;

int main() {
    cout << "Enter name and age!\n";
    string name;
    int age;
    vector<int> age_enter;
    vector<string> name_enter;
    while(cin>>name>>age){
        if(name=="NoName" && age == 0) {break;}
        name_enter.push_back(name);
        age_enter.push_back(age);
    }
    for(int i = 0; i < name_enter.size(); i++){
        for(int x = 0; x < name_enter.size(); x++){
            if(name_enter[x]==name_enter[i]&&i!=x){throw runtime_error("Error");}
        }
    }
    for(int i = 0; i < name_enter.size(); i++){
        cout << name_enter[i] << " " << age_enter[i] << "\n";
    }
    return 0;
}
