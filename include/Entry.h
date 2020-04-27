#pragma once
#include <string>
#include <iostream>

class Entry {

public:
   Entry(std::string const &first, std::string const &last, std::string const &phone=""): _first(first), _last(last), _phone(phone) {}
   std::string first() const { return _first; }
   std::string last() const  { return _last; }
   std::string phone() const { return _phone; }
   virtual ~Entry() { } // make destructor virtual to avoid resource leaks when using class polymorphically

private:
   std::string _first;
   std::string _last;
   std::string _phone;
};

bool operator==(Entry const &e, Entry const &f);
std::ostream& operator<<(std::ostream& os, Entry const &e);
