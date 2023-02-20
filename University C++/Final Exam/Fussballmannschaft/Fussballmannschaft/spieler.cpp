//
//  spieler.cpp
//  Fussballmannschaft
//
//  Created by Ivan Voloshyn on 05.02.23.
//

#include<iostream>
#include<vector>
#include<string>
#include<stdexcept>
#include"spieler.hpp"

using namespace std;

//Implementierung der Klasse Spieler
Spieler::Spieler(string name, int transfersumme, Position position): name{name}, transfersumme{transfersumme}, position{position}{
  if(name == "" || transfersumme < 10 || transfersumme > 500){
    throw runtime_error("Error404");
  }
}
string Spieler::get_name(){ return name;}
  bool Spieler::operator==(const Spieler& a) const{
    {
    if(this->name == a.name) {return true;}
    else {return false;}
    }
  }
Position Spieler::get_pos() {return position; }
//[Name, Transfersumme Mio Euro, Position]
  ostream& Spieler::print(ostream& os) const{
    return os << "[" << name << ", " << transfersumme << " Mio Euro, " <<  positionsnamen[int(position)] << "]";
  }
ostream& operator<<(ostream& os, const Spieler& a){
  return a.print(os);
}
