# Uncommon C++ Bugs and Errors
This repository demonstrates some uncommon but critical errors that can occur in C++ programming.  Understanding these errors is essential for writing robust and reliable code.

## Bugs Included:
* **Out-of-bounds array access:** Accessing elements beyond the allocated size of arrays or vectors.
* **Modifying map during iteration:**  The behavior is undefined, and the result can be unpredictable.
* **Null pointer dereference:** Attempting to access memory using a null pointer, leading to segmentation faults.
* **Double free:** Freeing the same memory location twice which can cause unpredictable program crashes.
* **Memory Leak:** Failing to deallocate dynamically allocated memory results in memory leaks.