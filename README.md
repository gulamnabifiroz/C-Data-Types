# C-Data-Types
This repository contains examples of various data types and sizes in C++. It is designed to help beginners understand how to work with different data types and handle various sizes of data.
<br>
<p align="center">
<strong>Experiment No 2</strong>
</p>

## Aim
To determine the sizes of various data types in C++

## Software Used
- Dev C++

## Theory
Data types in C++ play a fundamental role in how variables are defined and how data is managed in a program. When a variable is declared in C++, the data type specifies the kind of data the variable can store, thus guiding the compiler in allocating the appropriate amount of memory for that variable.
<br>
<strong>Memory Allocation and Data Types</strong>
<br>
Each data type in C++ requires a specific amount of memory, allowing for efficient data storage and manipulation. For instance, an integer (int) typically uses 4 bytes, whereas a floating-point number (double) might use 8 bytes. The allocation of memory based on data types ensures that programs use system resources optimally.
<br>
<strong>Size Of Operator</strong>
<br>
The sizeof operator in C++ is a unary operator used to determine the size, in bytes, of a data type, constant, or variable at compile time. This operator is essential for understanding memory allocation and data structure sizes in C++.
<br>
<strong>Syntax</strong>
<br>
sizeof(variable_name);
<br>
## Algorithim
Step 1: Start
<br>
Step 2: Declare Variables a,b,c,d,e
<br>
Step 3: Read the integer number a from the user
<br>
Step 4: Display the size of a
<br>
Step 5: Read the character b from the user
<br>
Step 6: Display the size of b
<br>
Step 7: Read the float number c from the user
<br>
Step 8: Display the size of c 
<br>
Step 9: Read the string (one word) d from the user
<br>
Step 10: Display the size of d
<br>
Step 11: Read the boolean value e from the user
<br>
Step 12: Display the size of e
<br>
Step 13: Stop
<br>
<br>

## Program Code
<br>

```cpp 

#include <iostream>
#include <string>
using namespace std;

int main() {
    int a;
    char b;
    float c;
    bool d;
    string e;
    
    cout << "Please enter an integer number:" << endl;
    cin >> a;
    cout << "Your number is an integer: " << a << endl;
    cout << "Size in bytes: " << sizeof(a) << endl;
    
    cout << "Please enter a character:" << endl;
    cin >> b;
    cout << "Your character is: " << b << endl;
    cout << "Size in bytes: " << sizeof(b) << endl;
    
    cout << "Please enter a float number:" << endl;
    cin >> c;
    cout << "Your number is a float: " << c << endl;
    cout << "Size in bytes: " << sizeof(c) << endl;

    cout << "Please enter a string (one word):" << endl;
    cin >> e;
    cout << "Your string is: " << e<< endl; 
    cout << "Size of the string in bytes: " << sizeof(e)<<endl; 
    
    cout << "Please enter a boolean value (0 or 1):" << endl;
    cin >> d;
    cout << "Size in bytes: " << sizeof(d) << endl;
    
    return 0;
}

```

<br>

## Output
<br>

![image](https://github.com/user-attachments/assets/fb4f520b-0db8-4a8c-934c-8125bd473895)


<br>

## Conclusion

<br>

Hence, we have gained an understanding of data types and learned how to determine the sizes of various data types in memory.

<br>
