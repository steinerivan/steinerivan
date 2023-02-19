//
//  wagon.hpp
//  Zug
//
//  Created by Ivan Voloshyn on 02.02.23.
//

#ifndef WAGON_H
#define WAGON_H

#include<iostream>
#include<string>
#include<vector>
#include<stdexcept>

using namespace std;

enum class Feature{Bar,Restaurant,Couchette,Standard,Toilet};
const std::vector<std::string> feature_names{"bar", "restaurant", "couchette", "standard","toilet"};

//Definition der Klasse Wagon
class Wagon{
  int masse;
  Feature einrichtung;
  public:
  Wagon(int masse, Feature einrichtung = Feature::Standard);
  int get_mass() const;
  bool has_feature(Feature) const;
  Feature get_feature() const;
  ostream& print(ostream&) const;
  
};
ostream& operator<<(ostream&, const Wagon&);
#endif
