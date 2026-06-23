#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

// copy/paste each section if you want to test indiviudally

//option 1
void swap(float&, float&);

int main(){

    float first, second;
    
    cout << "enter the first number" <<endl << "then hit enter" <<endl;
    cin >> first;

    cout << "enter the second number" <<endl << "then hit enter" <<endl;
    cin >> second;

    cout << "you input the numbers as " << first << " and " << second << "." << endl;

    swap(first, second);
    cout << "After swapping, the first number has the value of " << first << " which was the value of the second number." << endl;
    cout << "The second number has the value of " << second << " which was the value of the first number.";
}

void swap(float& number1, float& number2)
{
    float temp = number1;
    number1 = number2;
    number2 = temp;
}


//option 2
void mph(float, float, float&);

int main(){

    float miles, hours, milesPerHour;
    
    cout << "please input the miles traveled" <<endl;
    cin >> miles;

    cout << "please input the hours traveled" <<endl;
    cin >> hours;

    mph(miles, hours, milesPerHour);   

    cout << fixed << setprecision(2);
    cout << "Your speed is " << milesPerHour << " miles per hour.";
}

void mph(float miles, float hours, float& milesPerHour)
{
    milesPerHour = miles / hours;
}

//option 3
void findAverage(int, int, float&);

int main(){
    int numGrades, totalGrade;
    float average;
    char grade;

    cout << "Enter the number of grades" << endl;
    cin >> numGrades;

    for(int x = 0; x < numGrades; x++){
        int currentGrade;
        cout << "Enter a numeric grade between 0 - 100" << endl;
        cin >> currentGrade;
        totalGrade += currentGrade;
    }

    findAverage(numGrades, totalGrade, average);

    if(average >= 90){
        grade = 'A';
    }
    else if(average >= 80){
        grade = 'B';
    }
    else if(average >= 70){
        grade = 'C';
    }
    else if(average >= 60){
        grade = 'D';
    }
    else if(average >= 0){
        grade = 'F';
    }

    cout << "The grade is " << grade;
}

void findAverage(int numGrades, int totalGrade, float& average){
    average = totalGrade / numGrades;
}