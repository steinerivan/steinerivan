//
//  main.cpp
//  Упражнения, глава 3.4
//
//  Created by Ivan Voloshyn on 22.01.23.
//

#include <iostream>

using namespace std;

int main() {
    cout << "Введите два значения через пробел!\n";
    int val1, val2;
    cin >> val1 >> val2;
    if(val1>val2){
        cout << val1 << " - наибольшее значение\n";
    }
    else if(val1<val2){
        cout << val2 << " - наибольшее значение\n";
    }
    else{
        cout << "Оба значения одинаковы";
    }
    cout << "Cумма - " << val1 + val2 << ".\n Разность - " << val1 - val2 << ".\n Произведение - " << val1*val2 << ".\n Частное - " << val1/val2 << ".\n"; 
    return 0;
}
