# 📦 Arrays in C++ – Complete Guide

This repository contains **easy-to-understand examples of Arrays in C++**, starting from basics to common DSA use cases.  
Made for **beginners** who want to understand arrays properly with code.

---

## 🔹 What is an Array?
An array is a data structure used to store **multiple values of the same type** in a single variable.

Example:
```cpp
int arr[5] = {1, 2, 3, 4, 5};

🔹 Why Arrays?
Store multiple values easily
Use loops efficiently
Fast access using index
Used in almost every DSA problem

🔹 Types of Arrays
1️⃣ One Dimensional Array
int arr[5] = {10, 20, 30, 40, 50};
Used for marks, scores, prices, etc.
2️⃣ Two Dimensional Array
int mat[2][3] = {
  {1, 2, 3},
  {4, 5, 6}
};
Used for matrices, grids, game boards.
3️⃣ Multi Dimensional Array
int arr[2][2][2] = {
  {{1,2},{3,4}},
  {{5,6},{7,8}}
};
Used in 3D games and simulations.
🔹 Input & Output
int n;
cin >> n;
int arr[n];

for(int i=0;i<n;i++)
    cin >> arr[i];

for(int i=0;i<n;i++)
    cout << arr[i] << " ";
🔹 Common Operations
Traversing
for(int i=0;i<n;i++)
    cout << arr[i];
Searching
for(int i=0;i<n;i++)
    if(arr[i] == key) cout << "Found";
Maximum Element
int mx = arr[0];
for(int i=1;i<n;i++)
    mx = max(mx, arr[i]);
Sum of Elements
int sum = 0;
for(int i=0;i<n;i++)
    sum += arr[i];
🔹 Sorting
Bubble Sort
for(int i=0;i<n-1;i++)
    for(int j=0;j<n-i-1;j++)
        if(arr[j] > arr[j+1])
            swap(arr[j], arr[j+1]);
Built-in Sort
sort(arr, arr + n);
🔹 Reverse an Array
int l = 0, r = n-1;
while(l < r){
    swap(arr[l], arr[r]);
    l++;
    r--;
}

🔹 Count & Frequency

a-Count Even Numbers
int cnt = 0;
for(int i=0;i<n;i++)
    if(arr[i] % 2 == 0) cnt++;

b-Frequency Count
int freq[101] = {0};
for(int i=0;i<n;i++)
    freq[arr[i]]++;

🔹 Arrays in Functions
void print(int arr[], int n){
    for(int i=0;i<n;i++)
        cout << arr[i] << " ";
}

🔹 Character Array (String)
char name[10] = "Nipun";
cout << name;

🔹 Important Points
Index starts from 0
Fixed size in C++
Fast access
Used in almost all DSA problems

🔹 Real-Life Uses
Student marks
Game boards (maze, grid)
Images (pixels)
Competitive programming
BFS / DFS