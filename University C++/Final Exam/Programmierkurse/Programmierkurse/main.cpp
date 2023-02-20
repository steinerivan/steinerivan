//
//  main.cpp
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

int main() {
try {
  cout << "Class Programmer:\n";
  try {
    const Programmer p{""};
    cout << "error 1" << p << '\n';
  }
  catch (runtime_error& e) {
    cout << "catch 1\n";
  }
  try {
    const Programmer p{"Charles",12,{Language::CPP,Language::LISP,Language::CPP,Language::LISP}};
    cout << "error 2" << p << '\n';
  }
  catch (runtime_error& e) {
    cout << "catch 2\n";
  }
  try {
    const Programmer p{"Charles",-2,{Language::PYTHON}};
    cout << "error 3" << p << '\n';
  }
  catch (runtime_error& e) {
    cout << "catch 3\n";
  }

  const vector<Programmer> vp{{"Charles",70,{Language::PYTHON}},{"Susan",261,{Language::CPP,Language::JAVA}},
                              {"Richard",50},{"Anne"},{"Karen",73,{Language::JAVA}},{"Bob",99}};

  for (const auto& p : vp)
    cout << p << '\n';
  cerr << vp.at(2) << '\n';
  
  for (const auto& p: vp)
    cout << p.knows_one_of({Language::CPP,Language::JAVA,Language::PYTHON,Language::LISP,Language::PERL});
  cout << '\n';
  for (const auto& p: vp)
    cout << p.knows_one_of({Language::CPP,Language::PYTHON,Language::PERL});
  cout << '\n';

  for (const auto& p: vp)
    cout << p.eligible(70,Language::JAVA);
  cout << '\n';
  for (const auto& p: vp)
    cout << p.eligible(70,Language::PERL);
  cout << '\n';

  vector<Programmer> vp_var{vp};
  for (auto& p : vp_var) 
    try {
      p.finish(70,Language::CPP);
      cout << '.';
    }
    catch(runtime_error& e) {
      cout << 'e';
    }
  cout << '\n';
  for (auto& p : vp_var) 
    try {
      p.finish(70,Language::CPP);
      cout << '.';
    }
    catch(runtime_error& e) {
      cout << 'e';
    }
  cout << '\n';
  for (auto& p : vp_var) 
    try {
      p.finish(20,Language::LISP);
      cout << '.';
    }
    catch(runtime_error& e) {
      cout << 'e';
    }
  cout << '\n';
  for (const auto& p : vp_var)
    cout << p << '\n';

  cout << "\nClass Course:\n";
  try {
    const Course c{Language::PYTHON,0,{}};
    cout << "error 4" << c << '\n';
  }
  catch (runtime_error& e) {
    cout << "catch 4\n";
  }
  try {
    const Course c{Language::PYTHON,-1,vp};
    cout << "error 5" << c << '\n';
  }
  catch (runtime_error& e) {
    cout << "catch 5\n";
  }
  try {
    const Course c{Language::CPP,5,vp};
    cout << "error 6" << c << '\n';
  }
  catch (runtime_error& e) {
    cout << "catch 6\n";
  }
  try {
    const Course c{Language::LISP,90,vp};
    cout << "error 7" << c << '\n';
  }
  catch (runtime_error& e) {
    cout << "catch 7\n";
  }

  const Course c{Language::LISP,10,vp};
  cout << c << '\n';
  cerr << c << '\n';
  
  Course c_var{c};
  c_var.finish();
  cout << c_var << '\n';

  cout << "\nAdditional task revoke:\n";
  vp_var = vp;
  for (auto& p : vp_var)
    cout << p.revoke({Language::PYTHON,Language::CPP});
  cout << '\n';
  for (auto& p : vp_var)
    cout << p.revoke({Language::LISP,Language::PYTHON});
  cout << '\n';
  for (const auto& p : vp_var)
    cout << p << '\n';
  for (auto& p : vp_var)
    cout << p.revoke({Language::JAVA,Language::PERL});
  cout << '\n';
  for (const auto& p : vp_var)
    cout << p << '\n';
  vp_var = vp;
  for (auto& p : vp_var)
    cout << p.revoke({Language::PERL,Language::JAVA,Language::CPP});
  cout << '\n';
  for (const auto& p : vp_var)
    cout << p << '\n';


// Dekommentieren fuer Zusatz statistic
/*
  cout << "\nAdditional task statistic:\n";
  for (const auto& i : c.statistic())
    cout << i << ' ';
  cout << '\n';
  for (const auto& i : c_var.statistic())
    cout << i << ' ';
  cout << '\n';
*/
}
catch (exception& e) {
  cout << "Unexpected exception: " << e.what() << '\n';
}
catch (...) {
  cout << "Non standard exception thrown!";
}
return 0;
}
