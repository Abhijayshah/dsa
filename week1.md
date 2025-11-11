# MCQ Questions on C++ Basics

### Question 1
What is the correct comparison operator in C++?

- A) =
- B) ==
- C) ===
- D) !=

**Answer:** B) `==`  
**Explanation:** `=` is assignment, `==` is comparison.

---

### Question 2
What will happen if you declare the same variable twice in the same scope?

```cpp
int age = 21;
int age = 25;
```

- A) The second value overwrites the first  
- B) Compilation error  
- C) Runtime error  
- D) Both values are stored

**Answer:** B) Compilation error  
**Explanation:** You cannot redeclare a variable in the same scope.

---

### Question 3
What is the output of this code?

```cpp
int num = 15;
int result = (num > 10) ? 100 : 200;
cout << result;
```

- A) 10
- B) 15
- C) 100
- D) 200

**Answer:** C) 100  
**Explanation:** Since `15 > 10` is true, the ternary operator returns `100`.

---

### Question 4
Which statement is better suited for checking multiple specific values of a variable?

- A) Multiple if-else statements  
- B) `switch` statement  
- C) Nested ternary operators  
- D) `while` loop

**Answer:** B) `switch` statement  
**Explanation:** `switch` is cleaner and often more efficient for checking multiple specific values.

---

### Question 5
What is wrong with this code?

```cpp
if (x = 5) {
    cout << "Five";
}
```

- A) Missing semicolon  
- B) Using assignment `=` instead of comparison `==`  
- C) Wrong syntax for `if` statement  
- D) Nothing wrong

**Answer:** B) Using assignment `=` instead of comparison `==`  
**Explanation:** This assigns `5` to `x` instead of comparing, so the condition is not what was intended.

---

### Question 6
What is the correct syntax for the ternary operator?

- A) `condition : value1 ? value2`  
- B) `condition ? value1 : value2`  
- C) `value1 ? condition : value2`  
- D) `? condition : value1 value2`

**Answer:** B) `condition ? value1 : value2`  
**Explanation:** Format is `condition ? (if true) : (if false)`.

---

### Question 7
What must be declared before using a variable in C++?

- A) Its value  
- B) Its data type  
- C) Its scope  
- D) Its memory address

**Answer:** B) Its data type  
**Explanation:** Variables must be declared with a data type like `int`, `float`, etc.

---

### Question 8
Which is the best use case for the ternary operator?

- A) Complex multi-line logic  
- B) Simple value assignments based on a condition  
- C) Executing multiple `cout` statements  
- D) Loop control

**Answer:** B) Simple value assignments based on a condition  
**Explanation:** Ternary is best for concise, single-line conditional assignments.