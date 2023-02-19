//
//  smoothie.hpp
//  Smoothie
//
//  Created by Ivan Voloshyn on 28.01.23.
//

#ifndef SMOOTHIE_HPP
#define SMOOTHIE_HPP

#include<iostream>
#include<string>
#include<vector>
#include<stdexcept>
#include"zutat.hpp"
using namespace std;

//Definition der Klasse Smoothie
class Smoothie{
  string bezeichnung;
  vector<Zutat> zutate;
  public:
  Smoothie(string bezeichnung);
  void hinzu(const Zutat&);
  void unterheben(const Zutat&);
  int brennwert() const;
  void liste(ostream&) const;
  ostream& print(ostream&) const;
};
ostream& operator<<(ostream&, const Smoothie&);
#endif
