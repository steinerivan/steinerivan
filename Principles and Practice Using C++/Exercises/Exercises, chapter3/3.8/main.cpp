//
//  main.cpp
//  Упражнения, глава 3.8
//
//  Created by Ivan Voloshyn on 22.01.23.
//

#include <iostream>

using namespace std;

int main() {
    cout << "Введите целое число!\n";
    int a;
    cin >> a;
    if(a%2==0){
        cout << "Число " << a << " является четным\n";
    }
    else{
        cout << "Число " << a << " является нечетным\n";
    }
    return 0;
}
