#include "Entry.h"

bool operator==(Entry const &e, Entry const &f) { return e.first() == f.first() && e.last() == f.last() && e.phone() == f.phone(); }

std::ostream& operator<<(std::ostream& os, Entry const &e)
{
   os << e.first() << "\t" << e.last() << "\t" << e.phone();
   return os;
}

