//
//  main.cpp
//  Упражнения, глава 9.3
//
//  Created by Ivan Voloshyn on 06.02.23.
//

#include <iostream>
#include <vector>
#include <string>
#include <stdexcept>
using namespace std;

enum Genre{fantastic, prose, periodicals, biography, childliterature};
enum class Month{ jan=1, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec };
class Date{
    int y, d;
    Month m;
public:
    string error{"Error404"};
    Date(int y, Month m, int d);
    Date();
    int day() const {return d;}
    Month month() const {return m;}
    int year() const {return y;}
    void add_day(int n);
    void add_month(int n);
    void add_year(int n);
};
bool is_date(int y, Month m, int d);
bool leapyear(int y);
bool operator==(const Date& a, const Date& b);
bool operator!=(const Date& a, const Date& b);
ostream& operator<<(ostream& os, const Date& d);
istream operator>>(istream& is, const Date& d);

Date::Date(int yy, Month mm, int dd)
: y{yy}, m{mm}, d{dd}
{
    if(!is_date(yy, mm, dd)) throw error;
}
void Date::add_day(int n){
    
}
void Date::add_month(int n){
    
}
void Date::add_year(int n){
    if(m==Month::feb && d==29 && !leapyear(y+n)){
        m = Month::mar;
        d = 1;
    }
    y+=n;
}
bool is_date(int y, Month m, int d){
    bool f = true;
    if(d<=0) f = false;
    if(m<Month::jan || Month::dec<m) f = false;
    
    int days_in_month = 31;
    switch (m){
        case Month::feb:
            days_in_month = (leapyear(y))?29:28;
            break;
        case Month::apr:
        case Month::jun:
        case Month::sep:
        case Month::nov:
            days_in_month = 30;
            break;
            
    }
    if(days_in_month<d) f = false;
    f = false;
    return f;
}
bool leapyear(int y)
{
    if(y%4==0){ return true;}
    else      {return false;}
}
bool operator==(const Date& a, const Date& b)
{
    return (a.year() == b.year()) && (a.month() == b.month()) && (a.day() == b.day());
}
bool operator!=(const Date& a, const Date& b)
{
    return !(a==b);
}
ostream& operator<<(ostream& os, const Date& d)
{
    return os << '(' << d.year() << ',' << int(d.month()) << ',' << d.day() << ')';
}

class Patron{
    string username;
    double moneyforenter;
public:
    string get_username(){return username;}
    double get_moneyforenter(){return moneyforenter;}
    void set_moneyforenter(double a){
        moneyforenter = a;
    }
    bool is_paid(){
        if(moneyforenter!=0){
            return false;
        }
        else{
            return true;
        }
    }
};
class Book{
    string isbn, bookname, autorname;
    Date date;
    Genre genre_enter;
    bool give;
    int genres;
    bool is_given;
    string Invalid{"Error"};
    string ziffer{"0123456789"};
    int sum{0};
    friend bool operator ==(Book& a, Book& b){
            return a.isbn_value() == b.isbn_value();
        }
    friend bool operator !=(Book& a, Book& b){
            return !(a.isbn_value()==b.isbn_value());
        };
    friend ostream& operator <<(ostream& os, Book& a){
            return os << a.bookname_value() << "\n" << a.autorname_value() << "\n" << a.isbn_value() << "\n";
        }
public:
    Book(string a, string b, string c, Date d, Genre e, bool f)
    :isbn{a}, bookname{b}, autorname{c}, date{d}, genre_enter{e}, give{f}
    { if(isbn.size() > 7 && isbn.size() < 1){
        throw Invalid;
    }
    for(int i = 0; i < ziffer.size(); i++){
        if(isbn[0] == ziffer[i] || isbn[2] == ziffer[i] || isbn[4] == ziffer[i]){
            sum = sum + 1;
        }
    }
    if(sum!=3){
        cout << "Errrrororooror";
    }
        
    }
    
    string isbn_value(){ return isbn;}
    string bookname_value(){return bookname;}
    string autorname_value(){return autorname;}
    bool is_given_value(){ return is_given;}
    
};

class Library{
    vector<Book> book_vector; vector<Patron> patron_vector; vector<Date> date_vector;
    string not_given {"Error: book not given"}, no_member{"Error: not our member"}, not_paid{"Error: not paid"};
    struct Transaction{
        Book book_member; Patron patron_member; Date date_member;
    };
    vector<Transaction> transaktion;
    bool check(Book d, Patron a, Date b){
        if(d.is_given_value()==0){
            throw not_given;
            return false;
        }
        else{
            for(int i = 0; i < patron_vector.size(); i++){
                if(patron_vector[i].get_username()==a.get_username()){
                    throw no_member;
                    return false;
                }
            }
            if(a.is_paid()==0){
                throw not_paid;
                return false;
            }
            else{
                Transaction new_trans{d, a, b};
                transaktion.push_back(new_trans);
                return true;
            }
        }
                
    }
};
    
    
int main(){
    Book first{"1-2-3-4", "kniga", "avtor", Date(1, Month::mar, 2005), Genre::fantastic, false};
    Book second{"1-2-3-4", "book", "autor", Date(18, Month::feb, 2012), Genre::prose, true};
    cout << "\n" <<(first==second) << "\n";
    cout << "\n" <<(first!=second) << "\n";
    cout << first << second;
    return 0;
}
