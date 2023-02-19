//
//  main.cpp
//  Zug
//
//  Created by Ivan Voloshyn on 02.02.23.
//

#include<iostream>
#include<string>
#include<vector>
#include<stdexcept>
#include"wagon.hpp"
#include"train.h"

using namespace std;

int main() {
    cout << "Basisfunktionalitaet\n\nWagon\n";
    try {
        cout << Wagon{5};
        cout << Wagon{4};
        cout << '\n';
    }
    catch (runtime_error& e) {
        cout << " Error1\n";
    }
    try {
        cerr << Wagon{100};
        cerr << Wagon{101};
        cerr << '\n';
    }
    catch (runtime_error& e) {
        cout << " Error2\n";
    }
    try {
        cout << Wagon{52};
        cout << Wagon{-24};
        cout << '\n';
    }
    catch (runtime_error& e) {
        cout << " Error3\n";
    }
    const Wagon bar{24, Feature::Bar};
    const Wagon restaurant{30, Feature::Restaurant};
    const Wagon couchette{52, Feature::Couchette};
    const Wagon standard{10, Feature::Standard};
    const Wagon toilet{14, Feature::Toilet};

    cout << bar << '\n' << restaurant << '\n' << couchette << '\n' << standard << '\n' << toilet << '\n';
    cout << bar.has_feature(Feature::Couchette) << couchette.has_feature(Feature::Couchette) << toilet.has_feature(Feature::Couchette) << '\n';
    cout << restaurant.get_mass() << " " << couchette.get_mass() << " " << standard.get_mass() << '\n';
    cerr << standard << " " << restaurant << '\n';

    cout << "\n\nTrain\n";
    try {
        cout << Train{50,200};
        cout << Train{49,200};
        cout << '\n';
    }
    catch (runtime_error& e) {
        cout << " Error4\n";
    }
    try {
        cout << Train{200,5000};
        cout << Train{201,5000};
        cout << '\n';
    }
    catch (runtime_error& e) {
        cout << " Error5\n";
    }
    try {
        cout << Train{170,10000};
        cout << Train{170,10001};
        cout << '\n';
    }
    catch (runtime_error& e) {
        cout << " Error6\n";
    }
    try {
        cout << Train{80,200};
        cout << Train{80,199};
        cout << '\n';
    }
    catch (runtime_error& e) {
        cout << " Error7\n";
    }

    Train train{70,200,{bar,restaurant,toilet,couchette,standard}};
    const Train ctrain{train};
    cout << ctrain << '\n';
    cerr << ctrain << '\n';
    cout << ctrain.ready() << ' ' << ctrain.total_load() << '\n';
    cout << Train{80,200,{toilet,couchette}}.ready() << ' ' << Train{80,200,{bar,restaurant,bar}}.total_load() << '\n';

    train.couple({toilet,bar,couchette});
    cout << train << '\n';
    try {
      train.uncouple(8);
      cout << "?";
    }
    catch (runtime_error& e) {
        cout << " Error8\n";
    }
    try {
      train.uncouple(27);
      cout << "?";
    }
    catch (runtime_error& e) {
        cout << " Error9\n";
    }
    Train train2{100,5000,train.uncouple(2)};
    cout << train << '\n';
    cout << train2 << '\n';
    train.couple({couchette,standard,toilet});
    cout << train << '\n';
    train2.couple({restaurant,toilet,bar});
    cout << train2 << '\n';

    //Dekommentieren fuer Zusatz sort

    cout << "\n\nZusatz 10 Punkte\n";
    Train cpy{train};
    cpy.couple({couchette,standard,Wagon{25,Feature::Toilet},Wagon{50,Feature::Bar},bar,restaurant});
    cpy.sort();
    cout << cpy << '\n';
    cpy = train2;
    cpy.sort();
    cout << cpy << '\n';

    //Dekommentieren fuer Zusatz switches
/*
    cout << "\n\nZusatz 15 Punkte\n";
    Train cpy1{train};
    cpy1.couple({Wagon{37,Feature::Couchette},standard,Wagon{25,Feature::Toilet},Wagon{50,Feature::Bar},bar,restaurant});
    try {
      train.switches(5,1,cpy1,0);
      cout << "?";
    }
    catch (runtime_error& e) {
        cout << " Error10\n";
    }

    try {
      train.switches(2,2,cpy1,12);
      cout << "?";
    }
    catch (runtime_error& e) {
        cout << " Error11\n";
    }

    try {
      train.switches(2,4,cpy1,1);
      cout << "?";
    }
    catch (runtime_error& e) {
        cout << " Error12\n";
    }
    cout << train << '\n';
    cout << cpy1 << '\n';
    train.switches(2,2,cpy1,2);
    cout << train << '\n';
    cout << cpy1 << '\n';
    train.switches(0,3,cpy1,10);
    cout << train << '\n';
    cout << cpy1 << '\n';
    cpy1.switches(0,16,train,0);
    cout << train << '\n';
    cout << cpy1 << '\n';
*/
    return 0;
}
