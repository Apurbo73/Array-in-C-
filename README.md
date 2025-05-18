## Array in C++


Here’s a simple **C++ program** that:

1. Declares an array
2. Initializes it (optionally)
3. Takes user input
4. Prints the array elements

---

### ✅ **Full C++ Program:**

```cpp
#include <iostream>
using namespace std;

int main() {
    const int SIZE = 5; // Size of the array
    int numbers[SIZE];  // Declaration of the array

    // Input: Taking values from user
    cout << "Enter " << SIZE << " integers:" << endl;
    for (int i = 0; i < SIZE; ++i) {
        cout << "Element " << i + 1 << ": ";
        cin >> numbers[i];
    }

    // Output: Printing the array elements
    cout << "\nYou entered:" << endl;
    for (int i = 0; i < SIZE; ++i) {
        cout << "Element " << i + 1 << ": " << numbers[i] << endl;
    }

    return 0;
}
```

---

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

Let me know if you’d like to modify this for:

* **Floating-point numbers**
* **Strings**
* **2D arrays**
* Or **dynamic size (using vectors)**
