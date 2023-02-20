//
//  main.cpp
//  Упражнения, глава 4.4
//
//  Created by Ivan Voloshyn on 23.01.23.
//

#include <iostream>
using namespace std;

int main() {
    int enter;
    string antwort;
    cout << "Введите число чтобы я его отгадал!\n";
    cin >> enter;
    cout << "\nВаше число больше 50?(Ответ д если да или н если нет)\n";
    cin >> antwort;
    if (antwort== "д"){
        cout << "Ваше число больше 75?";
        cin >> antwort;
        if(antwort== "д"){
            cout << "Ваше число больше 87?";
            cin >> antwort;
            if(antwort== "д"){
                cout << "Ваше число больше 93?";
                cin >> antwort;
                if(antwort== "д"){
                    cout << "Ваше число больше 96?";
                    cin >> antwort;
                    if(antwort== "д"){
                        cout << "Ваше число больше 98?";
                        cin >> antwort;
                        if(antwort== "д"){
                            cout << "Ваше число делится на два без остатка?";
                            cin >> antwort;
                        }
                    }
                }
            }
        }
    }
    else{
        cout << "Ваше число больше 25?";
        cin >> antwort;
    }
    return 0;
}
