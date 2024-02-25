#include <string>

#include "./Sauce.hpp"

int main() {
  // Create a sauce tester instance. Specify that the results it will be
  // comparing are strings.
  Sauce<std::string> sauce;

  // Initialize value to run tests on.
  std::string name = "Omar";

  // This test will succeed.
  sauce.test(name, "Omar");

  // This test will fail.
  sauce.test(name, "Omarius");

  // Modify the variable to obtain the result that the previous test expects.
  name += "ius";

  // Test again. This time it will succeed.
  sauce.test(name, "Omarius");

  // Print out final information.
  sauce.finish();
}

// To run the example, compile it using this command
// g++ example.cpp
// Then run the program with this command
// ./a.out
