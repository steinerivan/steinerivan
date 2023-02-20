//
//  mannschaft.cpp
//  Fussballmannschaft
//
//  Created by Ivan Voloshyn on 05.02.23.
//

#include<iostream>
#include<vector>
#include<string>
#include<stdexcept>
#include"spieler.hpp"
#include"mannschaft.hpp"
using namespace std;

//Implementierung der Klasse Mannschaft
Mannschaft::Mannschaft(string name, vector<Spieler> spielerliste)
  : name{name}, spielerliste{spielerliste}{
    if(name==""){
      throw runtime_error("Error");
    }
    for(unsigned long i = 0; i < spielerliste.size(); i++){
      for(unsigned long x = 0; x < spielerliste.size(); x++){
        if(spielerliste[x]==spielerliste[i]&&x!=i){
          throw runtime_error("Error");
        }
      }
    }
  }
  vector<Spieler> Mannschaft::engagieren(const vector<Spieler>& v){
    vector<Spieler> new_list;
    for(unsigned long i = 0; i < v.size(); i++){
            bool check = false;
      for(unsigned long x = 0; x < spielerliste.size(); x++){
        if(v[i]==spielerliste[x]){
          check = true;
          new_list.push_back(v[i]);
        }
      }
      if(check == false){spielerliste.push_back(v[i]);}
    }
    return new_list;
  }
//  [Name, {Liste der Spieler}]
  ostream& Mannschaft::print(ostream& os) const{
    os << "[" << name << ", {";
    bool first = true;
    for(const auto& v: spielerliste){
      if(first==true){
        os << v;
        first = false;
      }
      else{
        os << ", " << v;
      }
    }
    return os << "}]";
  }
ostream& operator<<(ostream& os, const Mannschaft& a){
  return a.print(os);
}
