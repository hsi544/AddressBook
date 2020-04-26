#include <iostream>
#include <string>
#include "Entry.h"
#include "AddressBook.h"


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
  
   std::cout << "entries :" << std::endl;
   for(auto e: ab.entries())
      std::cout << e << std::endl;
   std::cout << "\n"; 

   ab.sortByFirstname();

   std::cout << "entries sorted by firstname :" << std::endl;
   for(auto e: ab.entries())
      std::cout << e << std::endl;
   std::cout << "\n"; 

   ab.sortByLastName();

   std::cout << "entries sorted by lastname :" << std::endl;
   for(auto e: ab.entries())
      std::cout << e << std::endl;
   std::cout << "\n"; 

   return 0;
}
