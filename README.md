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
Start
Define a class cube with three public integer variables: height, width, and length.
Initialize the variables with default values:
height = 2
width = 3
length = 5
In the main() function:
Create an object c1 of class cube.
Calculate the volume using the formula:
volume=c1.height×c1.width×c1.length
Display the volume using cout.
End

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
Start
Define a class cube with:
Public variables: height, width, and length initialized to 2, 3, and 5 respectively.
A public member function volume() that:
Multiplies height, width, and length.
Returns the result.
In the main() function:
Create an object cube1 of class cube.
Call the volume() function using cube1.
Store the returned value in a variable vol.
Print the value of vol.
End

