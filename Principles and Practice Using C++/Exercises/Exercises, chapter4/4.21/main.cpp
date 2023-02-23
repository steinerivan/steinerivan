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
            if(name_enter[x]==name_enter[i]&&i!=x){return 404;}
        }
    }
    for(int i = 0; i < name_enter.size(); i++){
        cout << name_enter[i] << " " << age_enter[i] << "\n";
    }
    cout << "Enter your age\n";
    cin >> age;
    bool check = false;
    for(int i = 0; i < age_enter.size(); i++){
        if(age==age_enter[i]){
            cout << name_enter[i] << " " << age << "\n";
            check = true;
        }
    }
    if(check!=true){
        cout << "Age not found\n";
    }
    return 0;
}
