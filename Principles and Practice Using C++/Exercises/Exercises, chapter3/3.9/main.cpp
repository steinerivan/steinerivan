//
//  main.cpp
//  Упражнения, глава 3.9
//
//  Created by Ivan Voloshyn on 22.01.23.
//

#include <iostream>

using namespace std;

int main() {
    cout << "Введите строкой цифру от нуля до девяти и я преобразую ее в число!\n";
    string enter;
    cin >> enter;
    if(enter == "ноль"){
        cout << 0 << "\n";
    }
    else if(enter == "один"){
        cout << 1 << "\n";
    }
    else if(enter == "два"){
        cout << 2 << "\n";
    }
    else if(enter == "три"){
        cout << 3 << "\n";
    }
    else if(enter == "четыре"){
        cout << 4 << "\n";
    }
    else if(enter == "пять"){
        cout << 5 << "\n";
    }
    else if(enter == "шесть"){
        cout << 6 << "\n";
    }
    else if(enter == "семь"){
        cout << 7 << "\n";
    }
    else if(enter == "восемь"){
        cout << 8 << "\n";
    }
    else if(enter == "девять"){
        cout << 9 << "\n";
    }
    else{
        cout << "Я не знаю такого числа\n";
    }
    return 0;
}
