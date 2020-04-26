#include "gmock/gmock.h"
#include "Entry.h"



TEST(Entry, FirstLastConstruction) {
   Entry e("John", "Doe");

   ASSERT_EQ(e.first(), "John");
   ASSERT_EQ(e.last(), "Doe");

}

TEST(Entry, FirstLastPhoneConstruction) {
   Entry e("John", "Doe", "+447959595302");

   ASSERT_EQ(e.first(), "John");
   ASSERT_EQ(e.last(), "Doe");
   ASSERT_EQ(e.phone(), "+447959595302");

}

TEST(Entry, EqualOperator) {
   Entry e("John", "Doe", "+447959595302");
   Entry f("John", "Doe", "+447959595302");

   ASSERT_TRUE(e == f);

}
