#include <iostream>
#include <vector>
#include <bitset>

int main() {
  // Demonstrates issues with std::vector<bool>
  std::vector<bool> boolVector(5);
  boolVector[0] = true;
  boolVector[1] = false;

  // Accessing elements - note the difference
  std::cout << "boolVector[0]: " << boolVector[0] << std::endl; // correct

  // Using iterators is safer for std::vector<bool>
  for (bool value : boolVector) {
      std::cout << value << " ";
  }
  std::cout << std::endl;

  //Alternative approach
  std::vector<bool> boolVector2(5);
    for(size_t i = 0; i< boolVector2.size(); ++i){
        boolVector2[i] = (i%2 == 0);
    }
    for (bool value : boolVector2) {
        std::cout << value << " ";
    }
    std::cout << std::endl;
  
  // Using a std::bitset as alternative
  std::bitset<5> bitset1(0b10101);
    std::cout << "bitset1 : " << bitset1 << std::endl;

  return 0;
}
