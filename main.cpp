#include <iostream>

using namespace std;

void dispNumber(int* number, int length);
void sortNum(int* number, int length);
void swap(int& num1, int& num2);

int main(void)
{
    int number[] = {19, 3, 81, 1, 24, 21};
    int index = 0;
    int length = (int)(sizeof(number)/sizeof(number[0]));

    cout << "~~~~~~~~~~~~~~~Before Sorting~~~~~~~~~~~~~~~~~~" << endl;
    dispNumber(number, length);

    sortNum(number, length);

    cout << "~~~~~~~~~~~~~~~After Sorting~~~~~~~~~~~~~~~~~~" << endl;
    dispNumber(number,length);
    
    return 0;
}

void dispNumber(int* number, int length)
{
    int index = 0;

    for(index = 0; index < length; index++)
    {
        cout << number[index] << " ";
    }

    cout << endl;
}

void sortNum(int* number, int length)
{
    int index = 0;
    int index2 = 0;

    for(index = 0; index < length - 1; index++)
    {
        for(index2 = 0; index2 < length - index - 1; index2++)
        {
            if(number[index2] > number[index2 + 1])
            {
                swap(number[index2], number[index2 + 1]);
            }
        }
    }

    return;
}

void swap(int& num1, int& num2)
{
    int numToChange = 0;

    numToChange = num1;
    num1 = num2;
    num2 = numToChange;

    return;
}