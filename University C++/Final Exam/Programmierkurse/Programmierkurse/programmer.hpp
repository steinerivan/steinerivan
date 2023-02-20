//
//  programmer.hpp
//  Programmierkurse
//
//  Created by Ivan Voloshyn on 10.02.23.
//

#ifndef programmer_hpp
#define programmer_hpp

#include <iostream>
#include <string>
#include <vector>

using namespace std;

enum class Language {JAVA, CPP, PYTHON, LISP, PERL};
const vector<string> language_names{"Java", "C++", "Python", "Lisp", "Perl"};

//Definition der Klasse Programmer
class Programmer{
  string name = "name";
  int credits;
  vector<Language> languages;
public:
  Programmer(string name, int credits = 100, vector<Language> languages = {});
  bool knows_one_of(const vector<Language>&) const;
  bool eligible(int, Language) const;
  void finish(int, Language);
  bool revoke(const vector<Language>&);
  ostream& print(ostream&) const;
};
ostream& operator<<(ostream&, const Programmer&);
#endif
