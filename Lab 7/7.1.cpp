#include <iostream>
using namespace std;

typedef int GradeType[100]; // declares a new data type:
                            // an integer array of 100 elements

float findAverage (const GradeType, int); // finds average of all grades
int findHighest (const GradeType, int, int&); // finds highest of all grades
int findLowest (const GradeType, int, int&); // finds lowest of all grades

int main()
{
    GradeType grades; 
    int numberOfGrades; 
    int pos; float avgOfGrades; 
    int highestGrade; 
    int lowestGrade; 
    
    // Read in the values into the array
    pos = 0;
    cout << "Please input a grade from 1 to 100, (or -99 to stop)" << endl;

    cin >> grades[pos];

    while (grades[pos] != -99)
    {
        pos++;
        cout << "Please input a grade from 1 to 100, (or -99 to stop)" << endl;
        cin >> grades[pos];
    }

    numberOfGrades = pos; // Fill blank with appropriate identifier

    // call to the function to find average
    avgOfGrades = findAverage(grades, numberOfGrades);
    cout << endl << "The average of all the grades is " << avgOfGrades << endl;

    // Fill in the call to the function that calculates highest grade
    findHighest(grades, numberOfGrades, highestGrade);

    cout << endl << "The highest grade is " << highestGrade << endl;

    // Fill in the call to the function that calculates lowest grade
    findLowest(grades,numberOfGrades, lowestGrade);

    // Fill in code to write the lowest to the screen
    cout << endl << "The lowest grade is " << lowestGrade << endl;

    return 0;
}

//********************************************************************************
// findAverage
//
// task: This function receives an array of integers and its size.
// It finds and returns the average of the numbers in the array
//
// data in: array of floating point numbers
// data returned: average of the numbers in the array
//
//********************************************************************************
float findAverage (const GradeType array, int size)
{
float sum = 0; // holds the sum of all the numbers
for (int pos = 0; pos < size; pos++)
sum = sum + array[pos];
return (sum / size); //returns the average
}

//****************************************************************************
// findHighest
//
// task: This function receives an array of integers and its size.
// It finds and returns the highest value of the numbers in the array
//
// data in: array of floating point numbers
// data returned: highest value of the numbers in the array
//****************************************************************************

int findHighest (const GradeType array, int size, int &highestGrade)
{
    // Fill in the code for this function
    highestGrade = array[0];

    for(int count = 1; count < size; count++){
        if(array[count] > highestGrade){
            highestGrade = array[count];
            }
        }
    return highestGrade;

}

//****************************************************************************
// findLowest
//
// task: This function receives an array of integers and its size.
//  It finds and returns the lowest value of the numbers in the array
// 
// data in: array of floating point numbers
// data returned: lowest value of the numbers in the array
//****************************************************************************
int findLowest (const GradeType array, int size, int &lowestGrade)
{
// Fill in the code for this function
    lowestGrade = array[0];

   for(int count = 1; count < size; count++){
    if (array[count] < lowestGrade){
        lowestGrade = array[count];
        }
    }
    return lowestGrade;

}
