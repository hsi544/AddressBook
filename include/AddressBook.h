#pragma once
#include <list>
#include <algorithm>
#include "Entry.h"

class AddressBook {
public:
   bool empty() const {return _entries.empty();};
   void add(Entry const &e) { _entries.push_back(e); }
   void remove(Entry const &e);
   size_t size() const { return _entries.size(); }
   std::list<Entry>& entries(){ return _entries; }
   void sortByFirstname();
   void sortByLastName();
private:
   std::list<Entry> _entries;

};
