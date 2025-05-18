## Array in C++



1. Declares an array
2. Initializes it (optionally)
3. Takes user input
4. Prints the array elements




### 🔍 **Explanation:**

* `int numbers[SIZE];` – Declares an integer array of size 5.
* `cin >> numbers[i];` – Takes input from the user.
* `cout << numbers[i];` – Prints each element with its position.

---

### 📝 Optional: Pre-initialized Array

If you want to initialize the array directly:

```cpp
int numbers[5] = {10, 20, 30, 40, 50};
```

Then skip the input part and just print.

---




---

## 🔢 What is an Array?

An **array** is a collection of **elements of the same type**, stored in **contiguous memory locations**. It allows you to store multiple values under one variable name and access them using an index.

---

## 📌 Key Characteristics:

* Fixed size (declared at compile time)
* Elements are stored sequentially in memory
* Index starts from 0
* All elements must be of the same data type

---

## 🧱 Array Declaration and Initialization

### 🟨 1. Declaration:

```cpp
int numbers[5];       // declares an integer array of size 5
float prices[10];     // float array of size 10
char letters[26];     // character array (can be used for alphabets)
```

### 🟩 2. Initialization:

#### At declaration:

```cpp
int numbers[5] = {10, 20, 30, 40, 50};
```

#### Partial initialization:

```cpp
int values[5] = {1, 2};  // Remaining elements will be 0
```

#### Without specifying size:

```cpp
int data[] = {5, 10, 15};  // Size is inferred as 3
```

---

## 🧭 Accessing Elements

```cpp
cout << numbers[0];  // Accesses first element
numbers[2] = 99;     // Changes the third element
```

---

## 🖨️ Input & Output Using Loops

```cpp
const int SIZE = 5;
int arr[SIZE];

// Input
for (int i = 0; i < SIZE; ++i) {
    cin >> arr[i];
}

// Output
for (int i = 0; i < SIZE; ++i) {
    cout << arr[i] << " ";
}
```

---

## 🔁 Array in Functions

### Passing Array to a Function:

```cpp
void display(int arr[], int size) {
    for (int i = 0; i < size; ++i)
        cout << arr[i] << " ";
}
```

### Calling the Function:

```cpp
int main() {
    int nums[] = {1, 2, 3, 4, 5};
    display(nums, 5);
    return 0;
}
```

---

## 🧩 Multidimensional Arrays

### 2D Array Declaration:

```cpp
int matrix[3][4];  // 3 rows, 4 columns
```

### Initialization:

```cpp
int matrix[2][2] = {
    {1, 2},
    {3, 4}
};
```

### Accessing:

```cpp
matrix[0][1];  // second element in first row
```

---

## 🧰 Common Operations on Arrays

| Operation     | Example                                       |
| ------------- | --------------------------------------------- |
| Traversal     | Loop through elements                         |
| Search        | Linear search or binary search                |
| Sort          | `sort(arr, arr + size);` (from `<algorithm>`) |
| Update        | `arr[i] = newValue;`                          |
| Sum / Average | Accumulate using loop                         |

---

## 🧠 Limitations of Arrays

* Fixed size
* No bounds checking (accessing `arr[100]` when size is 10 won’t give an error at compile time)
* Cannot grow or shrink dynamically

👉 Use **vectors** (`#include <vector>`) for flexible array-like containers in modern C++.

---

## ✅ Summary

| Feature     | Array                 |
| ----------- | --------------------- |
| Size        | Fixed at compile time |
| Type        | Same for all elements |
| Indexing    | Starts from 0         |
| Flexibility | Limited (use vectors) |
| Speed       | Fast (low overhead)   |

---



