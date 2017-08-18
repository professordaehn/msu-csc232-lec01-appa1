# CSC232 - Data Structures with C+

## Lecture 1: Language Basics

The sample code included here is used to demonstrate and/or highlight the following C++ basics:

- Comments
- Identifiers and keywords
- Primitive data types
- Variables
- Literal constants
- Named constants
- Enumerations
- The `typedef` statement
- Assignments and expressions

### Comments

**Single-line comments**

```c++
// Single-line comments begin with the two slashes and continues to the end of the line...
// Although this appears to be a multi-line comment, it is really just
// three single-line comments in a row.
```

**Multi-line comments**

```c++
/*
 Begins with the above character sequence and ends with the
 following character sequence.
 */
 
/**
 * Sometimes we make it look like a Javadoc multi-line comment and
 * often repeat the * on each line for aesthetics, but it is not
 * necessary. What ever you do, just be consistent. 
 *
 * Note that your instructor prefers this style preceding class 
 * and method declarations.
 */
```

### Identifiers and keywords

A C++ **identifier** is a case-sensitive sequence of letters, digits, and underscores that must begin with either a letter or an underscore.

You use identifiers to name various parts of your program. While the above prescription for an identifier is clear, there are certain ones that are reserved by C++. These reserved identifiers are also known as **keywords**, and you should not use them for other purposes. A list of several identifiers appears inside the cover of your textbook. Many IDEs will use a different color to highlight reserved words in your editor. More exist with C++17 and C++20. See [http://en.cppreference.com/w/cpp/keyword](http://en.cppreference.com/w/cpp/keyword).

### Primitive data types

There are basically four categories of primitive data types:

Category         | Available Data Types by Category
-----------------|----------------------------------
Boolean          | **bool** 
Character        | **char**, signed char, unsigned char
Signed Integer   | short, **int**, long
Unsigned Integer | unsigned short, unsigned, unsigned long
Floating Point   | float, **double**, long double 

The primitive types shown in **bold** are what we'll use for the most part.

### Variables

A variable, whose name is a C++ identifier, represents a memory location that contains a _value_ of a particular type. For example, 

```c++
double radius;
```

declares a variable named `radius` that can store any _value_ of type `double`.

The above declaration is also a _definition_ in that it assigns memory for the variable `radius`. The memory location however, has no particular initial value and so is said to be _uninitialized_. You should avoid uninitialized variables by defining an appropriate initial value. For example:

```c++
double volume{ 4 * PI * radius * radius * radius / 3 };
```

This assumes, of course, `PI` and `radius` have already been defined.

### Literal constants

You use **literal constants** to indicate particular values within a program. For example, the `4` and `3` in the above definition of `volume` are literal constants.

### Named constants

Unlike variables, whose values can change during program execution, **named constants** have values that do not change. The declaration of a named constant is like that of an initialized variable, but the keyword `const` precedes the data type. For example, 

```c++
const double PI = 3.14159;
```

declares `PI` as a named floating constant.

### Enumerations (Not show in demo program)

### The `typedef` statement (Not shown in demo program)

### Assignments and expressions
