//
//  main.cpp
//  Упражнения, глава 4.12
//
//  Created by Ivan Voloshyn on 23.01.23.
//

#include <iostream>
#include <vector>

using namespace std;

void einfachzahl(int max){
    vector<int> v;
    int i, x;
    for(i = 2; i <= max; i++){
        for(x = 2; x <= i; x++){
            if(i%x==0&&i/x==1){
                v.push_back(i);
            }
            else if(i/x!=1&&i%x==0){
                break;
            }
            
        }
    }
    for(int z: v){
        cout << "\n" << z << "\n";
    }
}

int main() {
    int max;
    cout << "Enter Zahl(max). Wir rechnen einfache Zahle von 1 bis max!\n";
    cin >> max;
    einfachzahl(max);
    
    return 0;
}
