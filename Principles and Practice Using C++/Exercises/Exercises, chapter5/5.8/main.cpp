//
//  main.cpp
//  test
//
//  Created by Ivan Voloshyn on 23.02.23.
//

#include <iostream>
#include <vector>
#include <stdexcept>
#include <cmath>

using namespace std;



int main() {
    try{
        int a, number, sum{0};
        vector<int> numbers;
        cout << "Enter amount of numbers you will summarize\n";
        cin >> a;
        cout << "Enter your numbers(to stop enter |)\n";
        while(cin>>number){
            numbers.push_back(number);
        }
        if(a>numbers.size()){throw runtime_error("Error");}
        for(int i = 0; i < a; i++){
            sum+=numbers[i];
        }
        cout << "Sum of " << a << " first numbers equals " << sum << endl;
        return 0;
    }
    catch(exception& e){
        cerr << "Wrong size";
    }
}
