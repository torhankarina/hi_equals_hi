#include "hello.hpp"
#include <iostream>
#include <cctype>
using namespace std;

int strcmp_case_insensitive(const string& s1, const string& s2) {
   size_t i = 0;

   while (i < s1.length() && i < s2.length()) {
      char c1 = tolower(s1[i]);
      char c2 = tolower(s2[i]);

      if (c1 < c2) return -1;
      if (c1 > c2) return 1;

      i++;
   }

   if (s1.length() < s2.length()) return -1;
   if (s1.length() > s2.length()) return 1;

   return 0;
}