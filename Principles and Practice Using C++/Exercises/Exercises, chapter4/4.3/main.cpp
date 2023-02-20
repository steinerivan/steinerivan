//
//  main.cpp
//  Упражнения, глава 4.3
//
//  Created by Ivan Voloshyn on 23.01.23.
//

#include <iostream>
#include <vector>

using namespace std;

int main() {
    cout << "\nВведите в вектор!\n";
    vector<double> v;
    double enter, sum {0};
    while(cin>>enter){
        v.push_back(enter);
        sort(v.begin(), v.end());
    }
    for(double x: v){
        cout << x << "\t";
        sum += x;
        
    }
    cout << "\nCумма всех расстояний: " << sum;
    cout << "\nНаименьшее расстояние: " << v[0];
    cout << "\nНаибольшее расстояние: " << v[size(v)-1];
    cout << "\nСреднее расстояние: " << sum/v.size();
    return 0;
}
