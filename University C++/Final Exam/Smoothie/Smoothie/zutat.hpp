//
//  zutat.hpp
//  Smoothie
//
//  Created by Ivan Voloshyn on 28.01.23.
//

#ifndef zutat_hpp
#define zutat_hpp

#include<iostream>
#include<string>
#include<vector>
#include<stdexcept>
using namespace std;

//Definition der Klasse Zutat
class Zutat{
  string name;
  int brennwerte;
  public:
  Zutat(string name, int brennwerte = 32);
  int brennwert() const;
  string namen() const;
  bool operator==(const Zutat&);
  ostream& print(ostream&) const;
};
ostream& operator<<(ostream&, const Zutat&);
#endif

