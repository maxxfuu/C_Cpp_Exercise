# OOP-Exercise
Documenting the progression of my mini projects of incrementing difficulty to practice OOP concepts around Encapsulation, Inheritance, Polymorphism, and Abstraction.
# Object-Oriented Programming (OOP) Concepts

## Introduction

Object-Oriented Programming (OOP) is a programming paradigm based on the concept of "objects," which can contain data and code. OOP focuses on the objects that developers want to manipulate rather than the logic required to manipulate them. This approach to programming can make it easier to manage complex software systems.

## The Four Pillars of OOP

### 1. Encapsulation

Encapsulation is the bundling of data and the methods that operate on that data within a single unit, or object. This concept is also often referred to as data hiding.

Key points:
- It restricts direct access to some of an object's components.
- It prevents the accidental modification of data.
- It allows the object to control its own state.

Example:
In many programming languages, encapsulation is achieved through the use of access modifiers like `private`, `protected`, and `public`.

### 2. Abstraction

Abstraction is the process of hiding the complex reality while exposing only the necessary parts. It helps in reducing programming complexity and effort.

Key points:
- It provides a simple interface to the user while hiding complex implementation details.
- It allows focusing on what the object does instead of how it does it.
- Abstract classes and interfaces are common ways to implement abstraction.

Example:
Consider a car's steering wheel. It abstracts the complex machinery that turns the wheels, presenting a simple interface to the driver.

### 3. Inheritance

Inheritance is a mechanism where a new class is derived from an existing class. The new class, known as a derived class, inherits attributes and behaviors from the existing class, known as the base class.

Key points:
- It promotes code reusability.
- It allows for hierarchical classification.
- It supports the concept of hierarchical classification.

Example:
A 'Car' class might inherit from a more general 'Vehicle' class, adding specific attributes and methods while retaining the common ones.

### 4. Polymorphism

Polymorphism allows objects of different classes to be treated as objects of a common base class. The literal meaning of polymorphism is "many forms".

Key points:
- It allows the same interface to be used for a general class of actions.
- It provides a way to perform a single action in different ways.
- It's often achieved through method overloading and method overriding.

Example:
A base class 'Shape' might have a method 'calculateArea()'. Derived classes like 'Circle' and 'Rectangle' can have their own implementations of 'calculateArea()', which will be used when called on objects of these classes.

## Advance C++ Concepts that I intend on understanding
- Value categories & Move semantics
- Type deduction
- Type erasure 
- SFINAE (Substitution Failure Is Not An Error)
- smart pointers
- RAII (Resource Acquisition Is Initialization)
- Compile-time programming 
- Virtual inheritance 