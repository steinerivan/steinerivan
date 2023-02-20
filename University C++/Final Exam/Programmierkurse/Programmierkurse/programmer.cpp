//
//  programmer.cpp
//  Programmierkurse
//
//  Created by Ivan Voloshyn on 10.02.23.
//

#include <iostream>
#include <string>
#include <vector>
#include "programmer.hpp"

using namespace std;

//Implementierung der Klasse Programmer
Programmer::Programmer(string name, int credits, vector<Language> languages): name{name}, credits{credits}, languages{languages}{
  if(credits < 0){
    throw runtime_error("405");
  }
  if(name == ""){
    throw runtime_error("406");
  }
  else{
    if(languages.size()>1){
      if(languages.size()>2){
          for(unsigned long i = 0; i < languages.size(); i++){
                   for(unsigned long x = 0; x < languages.size(); x++){
        if(i==x) {continue;}
            else if(languages[i]==languages[x]){
                  throw runtime_error("Error 404");
                  }
      }
      }
      }
    else if((languages.size()==2) && (languages[0] == languages[1])) {
      throw runtime_error("407");
    }
}
}
}
bool Programmer::knows_one_of(const vector<Language>& langs) const{
  for(unsigned long i = 0; i < langs.size(); i++){
    for(unsigned long x = 0; x < languages.size(); x++){
      if(langs[i]==languages[x]){return true;}
    }
  }
  return false;
}
  bool Programmer::eligible(int cost, Language lang) const{
    if(credits>=cost){
      for(unsigned long i = 0; i < languages.size(); i++){
        if(languages[i]==lang){
              return false;
        }
      }
      return true;
    }
    else{
      return false;
    }
  }
  void Programmer::finish(int cost, Language lang){
    if(credits<cost){
      throw runtime_error("Zu wenig Guthaben");
    }
    else{
      bool check {false};
      for(unsigned long i = 0; i < languages.size(); i++){
           if(languages[i]==lang){
          throw runtime_error("Already done");
        }
      }
      if(check == false){
        credits = credits - cost;
        languages.push_back(lang);
      }
  }
  }
bool Programmer::revoke(const vector<Language>& langs){
  bool check = false;
  for(unsigned long i = 0; i < langs.size(); i++){
    for(unsigned long x = 0; x < languages.size();){
      if(langs[i]==languages[x]){
        languages.erase(languages.begin()+x);
        check = true;
        x = 0;
      }
      else{
        x++;
      }
    }
  }
  return check;
}
  // [name: credits, {Liste der beherrschten Sprachen}]
  ostream& Programmer::print(ostream& os) const{
    os << "[" << name << ": " << credits << ", {";
    bool first = true;
    for(const auto& v: languages){
      if(first==true){
        os << language_names[int(v)];
        first = false;
      }
      else{
        os << ", " << language_names[int(v)];
      }
    }
    return os << "}]";
  }

ostream& operator<<(ostream& os, const Programmer& z){
  return z.print(os);
}
