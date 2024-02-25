#ifndef SAUCETESTER
#define SAUCETESTER

#include <iostream>

using namespace std;

template <typename T> class Sauce {
private:
  int tests;
  int successes;

public:
  Sauce() : tests(0), successes(0) {}

  void test(T result, T expected) {
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
