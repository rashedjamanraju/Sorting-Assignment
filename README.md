# 🧮 Sorting Assignment (Insertion, Merge, Quick Sort)

## 📁 Project Structure

```bash
Sorting-Assignment/
│
├── insertion_sort/
│   ├── insertion_sort.cpp
│   ├── insertion_sort      # executable
│   ├── input.in
│   └── output.in
│
├── merge_sort/
│   ├── merge_sort.cpp
│   ├── merge_sort          # executable
│   ├── input.in
│   └── output.in
│
├── quick_sort/
│   ├── quick_sort.cpp
│   ├── quick_sort          # executable
│   ├── input.in
│   └── output.in
│
└── random_number_generation.cpp
```

---

## ⚙️ Overview

This project implements three sorting algorithms:

* Insertion Sort
* Merge Sort
* Quick Sort

A separate program generates random input data and distributes it to all algorithms for fair comparison.

---

## 🎲 Random Test Case Generator

**Source File:**

```bash
random_number_generation.cpp
```

### ⚠️ Important

This file is **not executable by default**.
You must compile it to create a program (e.g., `generator`).

---

## 🚀 How to Compile

### 🔧 Compile Generator

```bash
g++ random_number_generation.cpp -o generator
```

👉 This creates an executable named:

```bash
generator
```

---

### 🔧 Compile Sorting Programs

```bash
# Insertion Sort
cd insertion_sort
g++ insertion_sort.cpp -o insertion_sort

# Merge Sort
cd ../merge_sort
g++ merge_sort.cpp -o merge_sort

# Quick Sort
cd ../quick_sort
g++ quick_sort.cpp -o quick_sort
```

---

## ▶️ How to Run

### 1️⃣ Generate Input Data

```bash
cd Sorting-Assignment
./generator
```

✔ This runs the compiled generator
✔ Creates:

```bash
insertion_sort/input.in
merge_sort/input.in
quick_sort/input.in
```

---

### 2️⃣ Run Sorting Algorithms

```bash
# Insertion Sort
cd insertion_sort
./insertion_sort

# Merge Sort
cd ../merge_sort
./merge_sort

# Quick Sort
cd ../quick_sort
./quick_sort
```

---

## 📌 Input Format

```txt
N
value1
value2
value3
...
```

* `N` = number of elements
* Each value is on a new line

---

## 📌 Output

Each algorithm writes to:

```bash
output.in
```

---

## 📌 Important: Relative Paths

Generator uses:

```cpp
"insertion_sort/input.in"
```

### ✅ Correct Way

```bash
cd Sorting-Assignment
./generator
```

### ❌ Wrong Way

```bash
cd insertion_sort
../generator   # ❌ wrong directory
```

---

## 🧠 Key Notes

* Same input is used for all algorithms
* Ensures fair comparison
* Uses relative paths → portable
* No dependency on absolute paths

---

## 💡 Future Improvements

* ⏱ Add execution time comparison
* 📊 Benchmark results
* 🛠 Makefile automation
* 📈 Graph visualization

---

## 👨‍💻 Author

Rashed
Data Structures & Algorithms Assignment
