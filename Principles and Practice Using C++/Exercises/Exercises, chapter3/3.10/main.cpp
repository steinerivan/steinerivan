//
//  main.cpp
//  Упражнения, глава 3.10
//
//  Created by Ivan Voloshyn on 22.01.23.
//

#include <iostream>

using namespace std;

int main() {
    cout << "Введите оператора и две опреанды!\n";
    string operation;
    double oper1, oper2;
    cin >> operation >> oper1 >> oper2;
    if(operation== "+"||operation== "plus"){
        cout << oper1+oper2;
    }
    else if(operation== "-"||operation== "minus"){
        cout << oper1-oper2;
    }
    else if(operation== "*"||operation== "mul"){
        cout << oper1*oper2;
    }
    else if(operation== "/"||operation== "div"){
        cout << oper1/oper2;
    }
    else{
        cout << "Неправильный ввод данных";
    }
    return 0;
}
