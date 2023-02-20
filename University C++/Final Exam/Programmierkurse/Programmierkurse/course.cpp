//
//  course.cpp
//  Programmierkurse
//
//  Created by Ivan Voloshyn on 10.02.23.
//

#include <iostream>
#include <string>
#include <vector>
#include "programmer.hpp"
#include "course.hpp"

using namespace std;

//Implementierung der Klasse Course
Course::Course(Language language, int cost, vector<Programmer> participants)
  : language{language}, cost{cost}, participants{participants}{
    if(participants.empty()==true||cost<0){
      throw runtime_error("Error");
    }
    for(unsigned long i = 0; i < participants.size(); i++){
      if(participants[i].eligible(cost, language)==false){
        throw runtime_error("Error");
      }
    }
  }
  void Course::finish(){
    for(unsigned long i = 0; i < participants.size(); i++){
      participants[i].finish(cost, language);
    }
  }
// [language: cost, {Teilnehmerliste}]
  ostream& Course::print(ostream& os) const{
    os << "[" << language_names[int(language)] << ": " << cost << ", {";
    bool first = true;
    for(const auto& v: participants){
      if(first == true){
        first = false;
        os << v;
      }
      else{
        os << ", " << v;
      }
    }
    return os << "}]";
  }
ostream& operator<<(ostream& os, const Course& a){
  return a.print(os);
}
