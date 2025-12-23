NOTE-all questions are with test cases you can remove that line to get normal code
# 📦 Arrays – Data Structures & Algorithms

An **array** is a linear data structure that stores elements of the **same data type** in **contiguous memory locations**.  
It allows **fast access using index**, making it one of the most fundamental and widely used data structures in DSA.

---

## 🔹 Why Learn Arrays?
- Arrays are the **base of most data structures**
- Used in almost **every real-world program**
- Many advanced topics (strings, matrices, DP) rely on arrays
- Frequently asked in **coding interviews & contests**

---

## 🔹 Key Characteristics
- Fixed size (in most languages like C++)
- Zero-based indexing
- Stores homogeneous elements
- Contiguous memory allocation

---

## 🔹 Time Complexity
| Operation | Complexity |
|---------|------------|
| Access by index | **O(1)** |
| Search (unsorted) | **O(n)** |
| Insertion | **O(n)** |
| Deletion | **O(n)** |

---

## 🔹 Types of Arrays
- 1D Array
- 2D Array (Matrix)
- Multi-Dimensional Array
- Dynamic Array (vector in C++)

---

## 🔹 Common Array Problems
- Finding maximum / minimum
- Reverse an array
- Rotate an array
- Remove duplicates
- Kadane’s Algorithm (Maximum Subarray Sum)
- Prefix sum
- Two pointers technique
- Sliding window problems

---

## 🔹 Important Concepts
- Indexing
- Traversal
- Prefix & Suffix arrays
- Frequency array
- Subarrays
- Array manipulation techniques

---

## 🔹 Example (C++)
```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    for(int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
