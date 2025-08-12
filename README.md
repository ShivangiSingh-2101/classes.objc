Program 1

Aim:
To write a C++ program to calculate the volume of a cube-like object (rectangular box) using a class with data members: height, width, and length.

 Theory:
In object-oriented programming (OOP), classes are used to encapsulate data and related functions. In this program:
A class named cube is defined with three data members: height, width, and length.
An object of this class is created.
The volume is calculated using the formula:
Volume=height×width×length
Volume=height×width×length
The result is displayed using cout.
Although the class is named cube, it actually represents a cuboid (since dimensions can vary).

 Algorithm:
- Start
- Define a class cube with three public integer variables: height, width, and length.
- Initialize the variables with default values:
- height = 2
- width = 3
- length = 5
- In the main() function:
- Create an object c1 of class cube.
- Calculate the volume using the formula:
- volume=c1.height×c1.width×c1.length
- Display the volume using cout.
- End

Program 2

 Aim:
To write a C++ program using a class to calculate the volume of a cuboid using a member function.

Theory:
In C++, a class is a user-defined data type that encapsulates data members and functions. This program demonstrates:
The use of a class (cube) with:
Public data members: height, width, and length
A member function volume() that computes the volume
The volume of a cuboid is calculated using the formula:
Volume=height×width×length
Volume=height×width×length
Though the class is named cube, it's technically representing a cuboid, as the dimensions are not necessarily equal.

 Algorithm:
- Start
- Define a class cube with:
- Public variables: height, width, and length initialized to 2, 3, and 5 respectively.
- A public member function volume() that:
- Multiplies height, width, and length.
- Returns the result.
- In the main() function:
- Create an object cube1 of class cube.
- Call the volume() function using cube1.
- Store the returned value in a variable vol.
- Print the value of vol.
- End

Program 3

 Aim:
To write a C++ program that calculates the volume of a cuboid using a class with private data members and a public member function.

 Theory:
 
In Object-Oriented Programming (OOP), encapsulation is the concept of restricting direct access to some of an object’s components, which helps protect the integrity of the data.
Private data members cannot be accessed directly from outside the class.
Public member functions act as the interface to work with private members.
In this program:
A class cube is created with private data members.
The function volume() is public and returns the calculated volume.
Formula for volume of a cuboid:
Volume=height×width×length
Volume=height×width×length

Algorithm:
- Start
- Define a class cube:
- Private data members: height = 2, width = 3, length = 5
-  Public function volume() that:
- Computes v = height * width * length
- Returns v
- In the main() function:
- Create an object cube1 of class cube-  
- Call the volume() method using the object
- Store result in vol
- Display vol
- End
