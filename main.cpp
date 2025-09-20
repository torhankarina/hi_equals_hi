#include <iostream>
#include <string>
#include "src/hello.hpp"

using namespace std;

int main() {
  string s1, s2;
  int result;

  s1 = "String one";
  s2 = "string two";
  result = strcmp_case_insensitive(s1, s2);
  cout << "The comparison of \"" << s1 << "\" and \"" << s2 << "\" returns " << result << "." << endl;

  s1 = "String one";
  s2 = "string one";
  result = strcmp_case_insensitive(s1, s2);
  cout << "The comparison of \"" << s1 << "\" and \"" << s2 << "\" returns " << result << "." << endl;

  s1 = "String two";
  s2 = "string one";
  result = strcmp_case_insensitive(s1, s2);
  cout << "The comparison of \"" << s1 << "\" and \"" << s2 << "\" returns " << result << "." << endl;

  return 0;
}