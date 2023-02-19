//
//  train.cpp
//  Zug
//
//  Created by Ivan Voloshyn on 02.02.23.
//

#include<iostream>
#include<string>
#include<vector>
#include<stdexcept>
#include"wagon.hpp"
#include"train.h"

using namespace std;

//Implementation der Klasse Train
Train::Train(int lokmasse, int maximallast, vector<Wagon> wagons)
  : lokmasse{lokmasse}, maximallast{maximallast}, wagons{wagons}{
    if(lokmasse < 50 || lokmasse > 200){
      throw runtime_error("Error");
    }
    if(maximallast < 200 || maximallast > 10000){
      throw runtime_error("Error");
    }
    
  }
  int Train::total_load() const{
    int sum{0};
    for(unsigned long i = 0; i < wagons.size(); i++){
      sum = wagons[i].get_mass() + sum;
    }
    sum = sum + lokmasse;
    return sum;
  }
  bool Train::ready() const{
    if(total_load()<=maximallast){
      bool check1 = false, check2 = false, check3 = false, check4 = false, check5 = false;
      for(unsigned long i = 0; i < wagons.size(); i++){
        if(wagons[i].has_feature(Feature::Bar)==true){check1 = true;}
        if(wagons[i].has_feature(Feature::Restaurant)==true){check2 = true;}
        if(wagons[i].has_feature(Feature::Couchette)==true){check3 = true;}
        if(wagons[i].has_feature(Feature::Standard)==true){check4 = true;}
        if(wagons[i].has_feature(Feature::Toilet)==true){check5 = true;}
      }
      if(check1==true&&check2==true&&check3==true&&check4==true&&check5==true){
        bool checking = true;
        for(unsigned long i = 0; i < wagons.size(); i++){
          if(wagons[i].get_feature()!=Feature::Toilet){
            if(wagons[i+1].get_feature()!=Feature::Toilet && i+1 < wagons.size()){
              if(wagons[i+2].get_feature()!=Feature::Toilet && i+2 < wagons.size()){
                if(wagons[i+3].get_feature()!=Feature::Toilet && i+3 < wagons.size())
                checking = false;
              }
            }
          }
        }
        if(checking == true){
          return true;
        }
        else{
          return false;
        }
      }
      else{return false;}
    }
    else{return false;}
  }
  void Train::couple(vector<Wagon> a){
    for(unsigned long i = 0; i < a.size(); i++){
      wagons.push_back(a[i]);
    }
  }
  vector<Wagon> Train::uncouple(size_t from){
    vector<Wagon> new_list = {};
    if(from<=wagons.size()-1){
      for(size_t i = from; i < wagons.size(); i++){
        new_list.push_back(wagons[i]);
      }
      wagons.erase(wagons.begin()+from, wagons.end());
    }
    else{
      throw runtime_error("Error");
    }
    return new_list;
  }
void Train::sort(){
  vector<Wagon> new_list = wagons;
  wagons.clear();
  while(new_list.size()!=wagons.size()){
  for(unsigned long i = 0; i < new_list.size(); i++){
    if(new_list[i].has_feature(Feature::Bar)==true){
      wagons.push_back(new_list[i]);
      continue;
    }
  }
    for(unsigned long i = 0; i < new_list.size(); i++){
      if(new_list[i].has_feature(Feature::Restaurant)==true){
        wagons.push_back(new_list[i]);
        continue;
      }
    }
    for(unsigned long i = 0; i < new_list.size(); i++){
        if(new_list[i].has_feature(Feature::Couchette)==true){
        wagons.push_back(new_list[i]);
          continue;
      }
    }
    for(unsigned long i = 0; i < new_list.size(); i++){
        if(new_list[i].has_feature(Feature::Standard)==true){
        wagons.push_back(new_list[i]);
          continue;
      }
    }
    for(unsigned long i = 0; i < new_list.size(); i++){
        if(new_list[i].has_feature(Feature::Toilet)==true){
        wagons.push_back(new_list[i]);
          continue;
      }
      }
      }
}
vector<Wagon> Train::get_wagons(){
  return wagons;
}
void Train::set_wagon(vector<Wagon>& a, size_t pos){
  for(unsigned long i = 0; i < a.size(); i++){
    wagons.insert(wagons.begin() + pos, a[i]);
    pos++;
  }
}
  void Train::switches(size_t from, size_t count, Train& to, size_t pos){
    if(from > count || from + 1 >= wagons.size() || count + 1 >= wagons.size() || pos + 1 >= to.get_wagons().size()){
      throw runtime_error("Error");
    }
    else{
            vector<Wagon> new_list;
      for(size_t i = from; i < count; i++){
        new_list.push_back(wagons[i]);
      }
      wagons.erase(wagons.begin()+from, wagons.begin()+count-1);
      to.set_wagon(new_list, pos);
    }
    
  }
// [Gesamtlast/Maximallast tons, fahrbereit {Liste der Waggons}]
  ostream& Train::print(ostream& os) const{
    os << "[" << total_load() << "/" << maximallast << " tons, ";
    if(ready()==true){os << "ready {";}
    else{os << "not ready {";}
    bool first = true;
    for(const auto& v: wagons){
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
ostream& operator<<(ostream& os, const Train& a){
  return a.print(os);
}
