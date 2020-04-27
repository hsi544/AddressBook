#include "gmock/gmock.h"
#include "AddressBook.h"
#include <iostream>

TEST(AddressBook, EmptyOnCreation) {
   AddressBook adBook;
   ASSERT_TRUE(adBook.empty());
}

TEST(AddressBook, SizeOneForOneEntry) {
   AddressBook adBook;
   Entry e{"John", "Doe", "+447890345234"};
   adBook.add(e);

   ASSERT_EQ(adBook.size(), 1);
}

TEST(AddressBook, SizeZeroAfterAddRemove) {
   AddressBook adBook;
   Entry e{"John", "Doe", "+447890345234"};
   adBook.add(e);
   adBook.remove(e);

   ASSERT_EQ(adBook.size(), 0);
}

TEST(AddressBook, ThrowsWhenRemovingFromEmpty)
{
   AddressBook adBook;
   Entry e{"John", "Doe", "+447890345234"};

   ASSERT_THROW(adBook.remove(e), std::runtime_error);
}
