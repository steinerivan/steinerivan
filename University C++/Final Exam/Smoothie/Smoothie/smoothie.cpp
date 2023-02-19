//
//  smoothie.cpp
//  Smoothie
//
//  Created by Ivan Voloshyn on 28.01.23.
//

#include<iostream>
#include<string>
#include<vector>
#include<stdexcept>
#include"zutat.hpp"
#include"smoothie.hpp"
Smoothie::Smoothie(string bezeichnung)
  :bezeichnung{bezeichnung}{
    if(bezeichnung == ""){
      throw runtime_error("Error404");
    }
  }
  void Smoothie::hinzu(const Zutat& z){
    zutate.push_back(z);
  }
  int Smoothie::brennwert() const{
    int sum{0};
    for(unsigned long i = 0; i < zutate.size(); i++){
      sum = sum + zutate[i].brennwert();
    }
    return sum;
  }
void Smoothie::unterheben(const Zutat& z){
  if(zutate.empty()==true){
    throw runtime_error("Error");
  }
  unsigned long check = zutate.size()*2;
  for(unsigned long i = 0; i < check; i = i + 2){
    zutate.insert(zutate.begin()+i, z);
  }
}
//  [Apfel 27 kJ]*2, [Birne 31 kJ]*1
void Smoothie::liste(ostream& os) const{
  vector<unsigned long> check;
  bool first {true};
  for(unsigned long i = 0; i < zutate.size(); i++){
    int sum{1};
    bool check1 {true};
    for(unsigned long y = 0; y < check.size(); y++){
      if(check[y]==i){ check1 = false;}
    }
    if(check1 == true){
    for(unsigned long x = 0; x < zutate.size(); x++){
      if(zutate[i].brennwert()==zutate[x].brennwert() && zutate[i].namen() == zutate[x].namen() && i!=x){
        sum++;
        check.push_back(x);
      }
    }
    if(first == true){
    os << zutate[i] << "*" << sum;
      first = false;
      }
    else{
            os << ", " << zutate[i] << "*" << sum;
    }
  }
}
}
// [{Liste der Zutaten}, Bezeichnung]
  ostream& Smoothie::print(ostream& os) const{
    os << "[{";
    bool first {true};
    for(const auto& v: zutate){
      if(first == true){
        os << v;
        first = false;
      }
      else{
        os << ", " << v;
      }
    }
    return os << "}, " << bezeichnung << "]";
  }
ostream& operator<<(ostream& os, const Smoothie& a){
  return a.print(os);
}

