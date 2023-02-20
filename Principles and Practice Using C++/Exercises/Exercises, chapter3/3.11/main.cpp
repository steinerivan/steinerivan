//
//  main.cpp
//  Упражнения, глава 3.11
//
//  Created by Ivan Voloshyn on 22.01.23.
//

#include <iostream>

using namespace std;

int main() {
    int cent1, cent5, cent10, cent25, cent50;
    cout << "Введите кол во одноцентовых монет!\n";
    cin >> cent1;
    cout << "Введите кол во пятицентовых монет!\n";
    cin >> cent5;
    cout << "Введите кол во десятицентовых монет!\n";
    cin >> cent10;
    cout << "Введите кол во двадцатипятицентовых монет!\n";
    cin >> cent25;
    cout << "Введите кол во пятидесятицентовых монет!\n";
    cin >> cent50;
    if(cent1== 1){
        cout << "У вас " << cent1 << " одноцентовая монета!\n";
    }
    else{
            cout << "У вас " << cent1 << " одноцентовых монет!\n";
    }
    if(cent5== 1){
        cout << "У вас " << cent5 << " пятицентовая монета!\n";
    }
    else{
            cout << "У вас " << cent5 << " пятицентовых монет!\n";
    }
    if(cent10== 1){
        cout << "У вас " << cent10 << " десятицентовая монета!\n";
    }
    else{
            cout << "У вас " << cent10 << " десятицентовых монет!\n";
    }
    if(cent25== 1){
        cout << "У вас " << cent25 << " двадцатипятицентовая монета!\n";
    }
    else{
            cout << "У вас " << cent25 << " двадцатипятицентовых монет!\n";
    }
    if(cent50== 1){
        cout << "У вас " << cent50 << " пятидесятицентовая монета!\n";
    }
    else{
            cout << "У вас " << cent50 << " пятидесятицентовых монет!\n";
    }
    int summe, dol;
    summe = cent1+cent5*5+cent10*10+cent25*25+cent50*50;
    if(summe<100){
        dol = 0;
    }
    else{
        dol = summe/100;
    }
    cout << "Общая стоимость ваших монет равна " << cent1+cent5*5+cent10*10+cent25*25+cent50*50 << " центам или " << dol << " долларов и " << summe-dol*100 << " центов!\n";
    return 0;
}
