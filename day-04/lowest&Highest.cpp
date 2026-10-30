#include <iostream>
using namespace std;

// Function to find the highest mark
int findHighest(int marks[], int size)
{
    int highest = marks[0];

    for (int i = 1; i < size; i++)
    {
        if (marks[i] > highest)
        {
            highest = marks[i];
        }
    }

    return highest;
}

// Function to find the lowest mark
int findLowest(int marks[], int size)
{
    int lowest = marks[0];

    for (int i = 1; i < si ze; i++)
    {
        if (marks[i] < lowest)
        {
            lowest = marks[i];
        }
    }

    return lowest;
}

int main()
{
    int marks[5];

    // Enter marks
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter mark for student " << i + 1 << ": ";
        cin >> marks[i];
    }

    // Display highest and lowest marks
    cout << "\nHighest mark: " << findHighest(marks, 5);
    cout << "\nLowest mark: " << findLowest(marks, 5);

    return 0;
}
