//
//  main.cpp
//  Упражнения, глава 4.2
//
//  Created by Ivan Voloshyn on 23.01.23.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    cout << "Введите значения в вектор чтобы посчитать медиану\n";
    vector<double> v;
    double enter;
    while(cin>>enter){
        v.push_back(enter);
    }
    sort(v.begin(), v.end());
    for(double x: v){
        cout << x << endl;
    }
    if(v.size()%2==1){
        cout << "Медиана - " << v[v.size()/2];
    }
    else{
        cout << "Медиана - " << v[v.size()/2-1];
    }
    return 0;
}
