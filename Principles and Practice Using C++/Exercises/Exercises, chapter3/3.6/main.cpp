//
//  main.cpp
//  Упражнения, глава 3.6
//
//  Created by Ivan Voloshyn on 22.01.23.
//

#include <iostream>
using namespace std;


int main() {
    cout << "Введите три числа!\n";
    int val1, val2, val3;
    cin >> val1 >> val2 >> val3;
    if(val1>=val2&&val2>=val3){
        cout << val3 << ", " << val2 << ", " << val1;
    }
    else if(val2>=val1&&val1>=val3){
        cout << val3 << ", " << val1 << ", " << val2;
    }
    else if(val1>=val3&&val3>=val2){
        cout << val2 << ", " << val3 << ", " << val1;
    }
    else if(val2>=val3&&val3>=val2){
        cout << val1 << ", " << val3 << ", " << val2;
    }
    else if(val3>=val1&&val1>=val2){
        cout << val2 << ", " << val1 << ", " << val3;
    }
    else{
        cout << val1 << ", " << val2 << ", " << val3;
    }
    return 0;
}
