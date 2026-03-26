# Sorting Assignment (Insertion, Merge, Quick Sort)

## 📁 Project Structure

```
Sorting-Assignment/
│
├── insertion_sort/
│   ├── insertion_sort.cpp
│   ├── insertion_sort.o
│   ├── insertion_sort        (executable)
│   ├── input.in
│   └── output.in
│
├── merge_sort/
│   ├── merge_sort.cpp
│   ├── merge_sort.o
│   ├── merge_sort            (executable)
│   ├── input.in
│   └── output.in
│
├── quick_sort/
│   ├── quick_sort.cpp
│   ├── quick_sort.o
│   ├── quick_sort            (executable)
│   ├── input.in
│   └── output.in
│
└── random_number_generation.cpp
```

---

## ⚙️ How It Works

### 1. Random Test Case Generator

The file:

```
random_number_generation.cpp
```

* Generates random numbers using a manual Linear Congruential Generator (LCG)
* Creates a list of numbers
* Writes the same input file into all three sorting folders:

  * `insertion_sort/input.in`
  * `merge_sort/input.in`
  * `quick_sort/input.in`

---

### 2. Input Format

Each `input.in` file looks like:

```
100000
56
789
1234
...
```

* First line → number of elements
* Next lines → values

---

### 3. Output Format

Each sorting program writes sorted output to:

```
output.in
```

---

## 🚀 How to Compile

Go inside each folder and run:

### Insertion Sort

```bash
g++ insertion_sort.cpp -o insertion_sort
```

### Merge Sort

```bash
g++ merge_sort.cpp -o merge_sort
```

### Quick Sort

```bash
g++ quick_sort.cpp -o quick_sort
```

---

## ▶️ How to Run

Run executables inside each folder:

```bash
./insertion_sort
./merge_sort
./quick_sort
```

---

## 🎲 Generate Test Data

Compile and run the generator:

```bash
g++ random_number_generation.cpp -o generator
./generator
```

This will automatically create input files for all sorting algorithms.

---

## 📌 How to Set File Paths

In your generator code, you used absolute paths like:

```cpp
writeToFile(testCases,
"/media/rashed/DSA/Sorting-Assignment/insertion_sort/input.in");
```

### ✅ Option 1: Use Absolute Path (Your Current Way)

✔ Works only on your machine
❌ Not portable

---

### ✅ Option 2 (Recommended): Use Relative Paths

Replace with:

```cpp
writeToFile(testCases, "insertion_sort/input.in");
writeToFile(testCases, "quick_sort/input.in");
writeToFile(testCases, "merge_sort/input.in");
```

✔ Works on any system
✔ Best for GitHub projects

---

## 📂 Important Note About Paths

* Run the generator **from the root folder**:

```bash
cd Sorting-Assignment
./generator
```

Otherwise, relative paths will break.

---

## 🧠 Summary

* Generator creates test cases
* Each algorithm reads from `input.in`
* Each writes to `output.in`
* Use **relative paths** for portability

---

## ✅ Tips

* Always keep folder structure unchanged
* Use same input for fair comparison
* Avoid absolute paths in shared projects

---

## 👨‍💻 Author

Rashed
(Data Structures & Algorithms Assignment)
