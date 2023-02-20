//
//  main.cpp
//  Упражнения, глава 4.6
//
//  Created by Ivan Voloshyn on 23.01.23.
//

#include <iostream>
#include <vector>
#include <stdexcept>
using namespace std;


int main() {
    cout << "Enter Zahl wie Wort oder wie Ziffer!\n";
    string enter;
    vector<string> wort = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    vector<string> ziffer = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9"};
    while(cin>>enter){
        for(int i = 0; i < ziffer.size(); ++i){
            if(ziffer[i]==enter){
                cout << wort[i] << "\n";
                break;
            }
            if(wort[i]==enter){
                cout << ziffer[i] << "\n";
                break;
            }
        }
    }
    return 0;
}
