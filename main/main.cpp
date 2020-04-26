#include <iostream>
#include <string>
#include "Entry.h"
#include "AddressBook.h"

using namespace std;

int main(int argc, char **argv)
{


   Entry e{"John", "Doe", "+447890345234"};
   Entry f{"Jack", "Sparrow", "+447570345334"};
   Entry g{"Mary", "Poppins", "+449998887374"};
   Entry h{"Alan", "Turing", "+441110001110"};


   AddressBook ab;

   ab.add(e);
   ab.add(f);
   ab.add(g);
   ab.add(h);

   cout << "entries :" << endl;
   for(auto e: ab.entries())
      cout << e << endl;
   cout << "\n";

   ab.sortByFirstname();

   cout << "entries sorted by firstname :" << endl;
   for(auto e: ab.entries())
      cout << e << endl;
   cout << "\n";

   ab.sortByLastName();

   cout << "entries sorted by lastname :" << endl;
   for(auto e: ab.entries())
      cout << e << endl;
   cout << "\n";

   // add entries for pattern matching
   ab.add(Entry{"Daniel", "Craig"});
   ab.add(Entry{"Mary", "Poppins"});
   ab.add(Entry{"Danny", "Glover"});
   ab.add(Entry{"Francis", "Dan"});
   ab.add(Entry{"ADan", "guruguru"});

   list<Entry> matches = ab.match("Dan");


   cout << "all entries: " << endl;
   for(auto e: ab.entries())
      cout << e << endl;
   cout << "\n";

   cout << "matches for Dan :" << endl;
   for(auto m: matches)
      cout << m << endl;
   cout << "\n";

   return 0;
}
