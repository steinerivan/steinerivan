//
//  train.h
//  Zug
//
//  Created by Ivan Voloshyn on 02.02.23.
//

#ifndef TRAIN_H
#define TRAIN_H

#include<iostream>
#include<string>
#include<vector>
#include<stdexcept>
#include"wagon.hpp"

using namespace std;

//Definition der Klasse Train
class Train{
  int lokmasse;
  int maximallast;
  vector<Wagon> wagons;
  public:
  Train(int lokmasse, int maximallast, vector<Wagon> wagons = {});
  int total_load() const;
  bool ready() const;
  void couple(vector<Wagon>);
  vector<Wagon> uncouple(size_t from);
  vector<Wagon> get_wagons();
  void set_wagon(vector<Wagon>&, size_t);
  void sort();
  void switches(size_t, size_t, Train&, size_t);
  ostream& print(ostream&) const;
};
ostream& operator<<(ostream&, const Train&);
#endif
