std::vector<int> vec = {1, 2, 3, 4, 5};
for (int i = 0; i <= vec.size(); ++i) { // Error: Accessing vec[vec.size()] is out of bounds
  std::cout << vec[i] << " ";
}

std::map<std::string, int> map = {{"a", 1}, {"b", 2}};
for (auto it = map.begin(); it != map.end(); ++it) {
  // Modifying map while iterating leads to undefined behavior
  if (it->first == "b") {
    map.erase(it);
  }
}

int* ptr = nullptr;
*ptr = 10; // Dereferencing a null pointer causes segmentation fault

int arr[5] = {1, 2, 3, 4, 5};
for (int i = 0; i < 10; ++i) { // Error: Accessing arr[5] to arr[9] out of bounds
    arr[i] *=2;
}

//Error: double free or corruption (fasttop) and memory leak
int *dynamicArray = new int[5];
// some code
delete[] dynamicArray;  
delete[] dynamicArray; //Error: double free or corruption (fasttop)

int *dynamicArray2 = new int[5];
// some code without delete[] dynamicArray2
