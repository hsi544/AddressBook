set(target AddressBook_UnitTest)

find_package(GTest REQUIRED)

add_executable(${target} AddressBookTest.cpp EntryTest.cpp)

add_test(NAME ${target} COMMAND ${target})

target_include_directories(${target} PRIVATE ${CMAKE_SOURCE_DIR}/include)

target_link_libraries(${target} adbook GTest::GTest GTest::Main)

#target_link_libraries(${target} PRIVATE AddressBook)

