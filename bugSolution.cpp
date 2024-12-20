#include <iostream>
#include <vector>
#include <map>

int main() {
  std::vector<int> vec = {1, 2, 3, 4, 5};
  for (size_t i = 0; i < vec.size(); ++i) { // Correct: Use size_t and < instead of <= 
    std::cout << vec[i] << " ";
  }
  std::cout << std::endl;

  std::map<std::string, int> map = {{"a", 1}, {"b", 2}};
  std::vector<std::string> keysToRemove;
  for (auto it = map.begin(); it != map.end(); ++it) {
    if (it->first == "b") {
      keysToRemove.push_back(it->first); //Store keys to remove later
    }
  }
    for (const auto &key : keysToRemove) {
        map.erase(key);
    }

  for (const auto& pair : map) {
    std::cout << pair.first << ": " << pair.second << std::endl;
  }

  int* ptr = new int; // Allocate memory dynamically
  *ptr = 10;
  std::cout << *ptr << std::endl;
  delete ptr; // Deallocate memory
  ptr = nullptr; // Set pointer to null after deallocation

  int arr[5] = {1, 2, 3, 4, 5};
  for (int i = 0; i < 5; ++i) { // Correct: Access only within bounds
    arr[i] *= 2;
    std::cout << arr[i] << " ";
  }

  int *dynamicArray = new int[5];
  // some code
delete[] dynamicArray; 
  dynamicArray = nullptr;
  return 0;
}
