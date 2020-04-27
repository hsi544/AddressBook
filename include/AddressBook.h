#pragma once
#include <list>
#include <algorithm>
#include "Entry.h"

class AddressBook {
public:
   bool empty() const {return _entries.empty();};
   // add entry e to the address book
   void add(Entry const &e) { _entries.push_back(e); }
   // remove entry e from the adress book
   void remove(Entry const &e);
   size_t size() const { return _entries.size(); }
   // return address book entries in a list
   std::list<Entry>& entries(){ return _entries; }
   // sorts the address book in ascending order by firstname
   void sortByFirstname();
   // sorts the address book in ascending order by lastname
   void sortByLastName();
   // returns a list of entries that match an expression (equivalent to exp* in grep)
   std::list<Entry> match(std::string const&);
private:
   // utility function that transforms a string to lowercase
   std::string str_tolower(std::string s);
   std::list<Entry> _entries;
};

