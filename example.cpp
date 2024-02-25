#include <string>

#include "./Sauce.hpp"

int main() {
  Sauce sauce;

  std::string name = "Omar";
  sauce.test(name, "Omar");
  sauce.test(name, "Omarius");

  name += "ius";
  sauce.test(name, "Omarius");

  sauce.finish();
}

// To run the example, compile it using this command
// g++ example.cpp
// Then run the program with this command
// ./a.out
