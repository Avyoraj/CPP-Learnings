Great — let’s break this down clearly so you can **find the time complexity** of any piece of code without needing to know deep math or logs.

---

## 🔍 **What is Time Complexity?**
It’s a way to estimate **how fast your code grows** with input size `n`.  
We write it in **Big-O notation**, like `O(n)` or `O(n²)`.

---

## 🪜 **Step-by-Step Guide to Find Time Complexity**

### ✅ 1. **Look at the loops**

**Each loop over `n` usually means `O(n)`**.

```cpp
for (int i = 0; i < n; i++) {
    // O(1) work inside
}
// → O(n)
```

Nested loops multiply:

```cpp
for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
        // O(1) work
    }
}
// → O(n²)
```

---

### ✅ 2. **Check if the loop divides input**

That’s usually **`O(log n)`** (like binary search):

```cpp
while (n > 1) {
    n = n / 2;
}
// → O(log n)
```

---

### ✅ 3. **Look at function calls (recursion)**

Check how many times the function is called, and what size of data it processes.

**Example:**

```cpp
void mergeSort(int arr[], int n) {
    if (n <= 1) return;
    // divide array
    // call mergeSort on left and right
    // merge step
}
// → O(n log n)
```

(You divide log n times, and each level does O(n) work)

---

### ✅ 4. **Look at STL functions**

- `sort()` → O(n log n)
- `min()`, `max()` → O(1)
- `find()` in `vector` → O(n)
- `unordered_map[key]` → O(1) average

---

### ✅ 5. **Drop constants and lower terms**

```cpp
O(2n) → O(n)  
O(n + log n) → O(n)
```

We only care about how the growth **scales** as `n` becomes large.

---

## 🔁 **Practice Examples**

### Example 1:
```cpp
for (int i = 0; i < n; i++) {
    cout << i;
}
```
✅ **O(n)** → One loop over `n`

---

### Example 2:
```cpp
for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
        cout << i << j;
    }
}
```
❌ **O(n²)** → Two nested loops

---

### Example 3:
```cpp
int i = 1;
while (i < n) {
    i *= 2;
}
```
✅ **O(log n)** → Doubles each time (log base 2)

---

### Example 4:
```cpp
sort(arr, arr + n);
```
✅ **O(n log n)** → Standard sorting

---

## Summary: Shortcut Table

| Code Pattern                           | Time Complexity |
|----------------------------------------|------------------|
| Single loop up to `n`                  | O(n)             |
| Nested loop `n × n`                    | O(n²)            |
| Divide input in half (like binary)     | O(log n)         |
| Sorting (`sort`, `mergeSort`)          | O(n log n)       |
| Recursion with full branching (Fibonacci) | O(2^n)         |

---

Would you like me to explain how to calculate the time complexity of a specific piece of code you're working on?