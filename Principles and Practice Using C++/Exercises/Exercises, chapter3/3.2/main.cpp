//
//  main.cpp
//  Упражнения, глава 3
//
//  Created by Ivan Voloshyn on 22.01.23.
//

#include <iostream>

using namespace std;

int main() {
    cout << "Введите количество миль, чтобы преобразовать его в километры!\n";
    double mili;
    cin >> mili;
    cout << mili*1.609 << " километров в " << mili << " милях\n";
    return 0;
}
