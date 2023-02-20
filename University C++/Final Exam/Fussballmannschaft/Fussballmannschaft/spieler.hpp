//
//  spieler.hpp
//  Fussballmannschaft
//
//  Created by Ivan Voloshyn on 05.02.23.
//

#ifndef SPIELER_HPP
#define SPIELER_HPP

#include<iostream>
#include<vector>
#include<string>
#include<stdexcept>
#include<algorithm>

using namespace std;

enum class Position {Tor, Abwehr, Mitte, Sturm};
const vector<string> positionsnamen{"Tor","Abwehr","Mitte","Sturm"};
class Spieler{
  string name;
  int transfersumme;
  Position position;
  public:
  Spieler(string name, int transfersumme, Position position = Position::Tor);
  string get_name();
  Position get_pos();
  bool operator==(const Spieler&) const;
  ostream& print(ostream&) const;
};
ostream& operator<<(ostream&, const Spieler&);
//Definition der Klasse Spieler

#endif
