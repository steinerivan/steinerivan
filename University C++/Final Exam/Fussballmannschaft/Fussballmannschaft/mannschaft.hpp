//
//  mannschaft.hpp
//  Fussballmannschaft
//
//  Created by Ivan Voloshyn on 05.02.23.
//

#ifndef MANNSCHAFT_HPP
#define MANNSCHAFT_HPP

#include<iostream>
#include<vector>
#include<string>
#include<stdexcept>
#include"spieler.hpp"
using namespace std;

//Definition der Klasse Mannschaft
class Mannschaft{
  string name;
  vector<Spieler> spielerliste;
  public:
  Mannschaft(string name, vector<Spieler> spielerliste = {});
  vector<Spieler> engagieren(const vector<Spieler>&);
  ostream& print(ostream&) const;
};
ostream& operator<<(ostream&, const Mannschaft&);

#endif
