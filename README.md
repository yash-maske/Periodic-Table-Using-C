

# 🔬 Modern Periodic Table Program

This is a **C-based Modern Periodic Table Program** that allows users to explore chemical elements, search for specific properties, display the periodic table, and even take a quiz on element properties.

## 🚀 Features
✅ **Display All Elements** – View the complete periodic table with element details.  
✅ **Search Elements** – Find elements by **name, symbol, atomic number, or atomic weight**.  
✅ **Display the Periodic Table** – A structured **ASCII representation** of the periodic table.  
✅ **Sort Elements Alphabetically** – View elements sorted by their **symbols**.  
✅ **Interactive Quiz** – Test your knowledge of chemical elements!  
✅ **File-Based Data Handling** – Reads data from `periodic.txt`.  

---

## 📂 File Structure
```
📂 Modern_Periodic_Table
│── 📄 main.c        # C program file
│── 📄 periodic.txt  # Data file containing element details
│── 📄 README.md     # Documentation
```

---

## 🛠 How to Compile and Run
1️⃣ **Compile the program** using GCC:
   ```sh
   gcc main.c -o periodic
   ```
2️⃣ **Run the program**:
   ```sh
   ./periodic
   ```

---

## 📜 Input File Format (`periodic.txt`)
Each line in `periodic.txt` follows this structure:
```
<Name> <Symbol> <Atomic_Number> <Atomic_Weight> <Classification> <Electron_Configuration>
```
Example:
```
Hydrogen H 1 1.008 Nonmetal 1s1
Helium He 2 4.002 Noble_Gas 1s2
Lithium Li 3 6.941 Alkali_Metal [He]2s1
```

---

## 📌 Usage Guide
🔹 **Choose an option** from the menu.  
🔹 **Search for elements** by name, symbol, atomic number, or weight.  
🔹 **View the periodic table** in a structured format.  
🔹 **Sort elements alphabetically** by their symbol.  
🔹 **Take a quiz** to test your knowledge!  

---

## 🎮 Interactive Quiz Mode
- You can **select the number of questions** to be asked.
- The program will randomly generate **questions about atomic numbers, symbols, and element names**.
- Answer correctly and **increase your score!** 🎯

---

## 📌 Example Menu Output:
```
---------------- Modern Periodic Table ----------------
1. Display all Elements
2. Search by Name
3. Search by Symbol
4. Search by Atomic Number
5. Search by Atomic Weight
6. Display Periodic Table
7. Display elements in alphabetical order
8. Take a Quiz
9. Exit
------------------------------------------------------
Enter your choice:
```

---

## 📧 Contact
🔹 **Author:** Yash Maske 
🔹 **Email:** [yashmaske1235@outlook.com]  
🔹 **GitHub:** [yash-maske]  

🚀 *Happy Learning & Exploring Chemistry!* 🔬✨

