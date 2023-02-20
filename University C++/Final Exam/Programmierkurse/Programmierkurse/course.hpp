//
//  course.hpp
//  Programmierkurse
//
//  Created by Ivan Voloshyn on 10.02.23.
//

#ifndef course_hpp
#define course_hpp

#include <iostream>
#include <string>
#include <vector>
#include "programmer.hpp"

using namespace std;

//Definition der Klasse Course
class Course{
  Language language;
  int cost;
  vector<Programmer> participants;
  public:
  Course(Language language, int cost, vector<Programmer> participants);
  void finish();
  vector<int> statistic() const;
  ostream& print(ostream&) const;
};
ostream& operator<<(ostream&, const Course&);
#endif
