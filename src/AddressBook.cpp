#include "AddressBook.h"
#include <regex>

std::string AddressBook::str_tolower(std::string s) {
    std::transform(s.begin(), s.end(), s.begin(),
                   [](unsigned char c){ return std::tolower(c); }
                  );
    return s;
}

void AddressBook::remove(Entry const &e) {
   auto pos = std::find(_entries.begin(), _entries.end(), e);
   _entries.erase(pos);
}

void AddressBook::sortByFirstname() {
   _entries.sort([](Entry const& e, Entry const& f) {return e.first() < f.first();});
}

void AddressBook::sortByLastName() {
   _entries.sort([](Entry const& e, Entry const& f) {return e.last() < f.last();});
}

std::list<Entry> AddressBook::match(std::string const &exp)
{
   AddressBook tmp;

   std::regex reg("("+str_tolower(exp)+")"+"(.*)"); // matches "dan*"

   for(auto e: this->entries()) {
      if(std::regex_match(str_tolower(e.first()), reg) || std::regex_match(str_tolower(e.last()), reg)) {
         tmp.add(e);
      }
   }

   return tmp.entries();
}

