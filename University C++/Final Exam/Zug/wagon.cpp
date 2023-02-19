//
//  wagon.cpp
//  Zug
//
//  Created by Ivan Voloshyn on 02.02.23.
//

#include<iostream>
#include<string>
#include<vector>
#include<stdexcept>
#include"wagon.hpp"

using namespace std;

//Implementation der Klasse Wagon
Wagon::Wagon(int masse, Feature einrichtung)
  : masse{masse}, einrichtung{einrichtung}{
    if(masse < 5 || masse > 100){
      throw runtime_error("Error");
    }
    
  }
  int Wagon::get_mass() const{
    return masse;
  }
  bool Wagon::has_feature(Feature a) const{
    if(a == einrichtung){return true;}
    else{return false;}
  }
Feature Wagon::get_feature() const {return einrichtung;}

// [mass: Masse tons Feature-wagon]
  ostream& Wagon::print(ostream& os) const{
    return os << "[mass: " << masse << " tons " << feature_names[int(einrichtung)] << "-wagon]";
  }
ostream& operator<<(ostream& os, const Wagon& a){
  return a.print(os);
}
