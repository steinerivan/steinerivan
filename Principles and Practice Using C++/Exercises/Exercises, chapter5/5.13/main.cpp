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

vector<int> game(){
    vector<int> mynumbers;
    srand(time(NULL));
    for(int i = 0; i < 4; i++){
        int x = rand();
        while(x>9){
            x = x/10;
        }
        mynumbers.push_back(x);
    }
    bool check = false;
    while(check == false){
        check = true;
        for(int x = 0; x < mynumbers.size(); x++){
            for(int y = 0; y < mynumbers.size(); y++){
                if(mynumbers[x]==mynumbers[y]&&x!=y){
                    check = false;
                    if(mynumbers[x]!=9){
                        mynumbers[x] = mynumbers[x] + 1;
                    }
                    else{mynumbers[x] = mynumbers[x] - 1;}
                }
            }
        }
    }
    return mynumbers;
}

int main() {
    try{
        while(true){
            vector<int> mynumbers = game();
            int number;
            int bulls = 0;
            int cows = 0;
            for(int y = 0; y < mynumbers.size(); y++){
                cout << mynumbers[y] << " ";
            }
            cout << "Enter four numbers" << "\n";
            while(bulls!=4){
                bulls = 0; cows = 0;
                vector<int> answernumbers;
                for(int i = 0; answernumbers.size() < 4; i++){
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
                mynumbers.clear();
            }
        }
        return 0;
    }
    catch(exception& e){
        cerr << "Error enter";
    }
}
