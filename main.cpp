#include <iostream>

using namespace std;

void sortNum(int* number, int length);
void swap(int& num1, int& num2);

int main(void)
{
    int number[] = {19, 3, 81, 1, 24, 21};
    int index = 0;
    int length = (int)(sizeof(number)/sizeof(number[0]));

    cout << "~~~~~~~~~~~~~~~Before swapping~~~~~~~~~~~~~~~~~~" << endl;

    for(index = 0; index < length; index++)
    {
        cout << number[index] << " ";
    }

    cout << endl;

    sortNum(number, length);

    cout << "~~~~~~~~~~~~~~~After swapping~~~~~~~~~~~~~~~~~~" << endl;

    for(index = 0; index < length; index++)
    {
        cout << number[index] << " ";
    }

    cout << endl;
    
    return 0;
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