//
//  zutat.cpp
//  Smoothie
//
//  Created by Ivan Voloshyn on 28.01.23.
//

#include<iostream>
#include<string>
#include<vector>
#include<stdexcept>
#include"zutat.hpp"
using namespace std;
Zutat::Zutat(string name, int brennwerte)
  : name{name}, brennwerte{brennwerte}{
    if(name=="" || brennwerte < 10 || brennwerte > 75){
      throw runtime_error("Error");
    }
  }
  int Zutat::brennwert() const{
    return brennwerte;
  }
    string Zutat::namen() const{
    return name;
  }
  bool Zutat::operator==(const Zutat& a){
    if(this->brennwerte == a.brennwert() && this->name == a.namen()){
     return true;
    }
    else{return false; }
  }
//[Name Brennwert kJ]
  ostream& Zutat::print(ostream& os) const{
    return os << "[" << name << " " << brennwerte << " kJ]";
  }
ostream& operator<<(ostream& os, const Zutat& a){
  return a.print(os);
}
