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

using namespace std;



int main() {
    try{
        vector<int> mynumbers{2, 3, 4, 5};
        int number;
        int bulls = 0;
        int cows = 0;
        cout << "Enter four numbers" << "\n";
        while(bulls!=4){
            bulls = 0; cows = 0;
            vector<int> answernumbers;
            for(int i = 0; i < 4; i++){
                cin >> number;
                answernumbers.push_back(number);
            }
            for(int i = 0; i < 4; i++){
                for(int x = 0; x < 4; x++){
                    if(mynumbers[i]==answernumbers[x] && x==i){
                        bulls++;
                    }
                    if(mynumbers[i]==answernumbers[x] && x!=i){
                        cows++;
                    }
                }
            }
            cout << "\nYou have " << bulls << " bulls and " << cows << " cows!\n";
        }
    }
    catch(exception& e){
        cerr << "Error";
    }
}
