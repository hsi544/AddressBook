#include "AddressBook.h"
   
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

