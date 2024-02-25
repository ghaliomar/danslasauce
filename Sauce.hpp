#ifndef SAUCETESTER
#define SAUCETESTER

#include <iostream>
#include <string>

using namespace std;

class Sauce {
private:
  int tests;
  int successes;

public:
  Sauce() : tests(0), successes(0) {}

  void test(string result, string expected) {
    tests++;

    cout << "Sauce test #" << tests << endl;
    if (result == expected) {
      successes++;
      cout << "\tSUCCESS" << endl;
    } else {
      cout << "\tFAIL: Expected \"" << expected << "\" but received \""
           << result << "\"" << endl;
    }

    cout << endl;
  }

  void finish() {
    cout << "Ran " << tests << " tests with " << successes << " successes and "
         << tests - successes << " fails." << endl;
  }
};

#endif
