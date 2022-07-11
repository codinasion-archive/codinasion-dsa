// Write a programme for Linear Search

#include <iostream>
#include <sstream>
#include <vector>
#include <string>

using namespace std;

vector<int> takeInput()
{
    // taking input of string containing numbers
    string numbers;
    cout << "Input  : ";
    getline(cin, numbers);

    // splitting string by spaces and extracting numbers
    stringstream iss(numbers);
    int numberInString;
    vector<int> input;
    while (iss >> numberInString)
        input.push_back(numberInString);

    return input;
}

int main()
{
    vector<int> numbers = takeInput();

    int target;
    cout << "Target : ";
    cin >> target;

    cout << "Output : ";

    int elementIndex = -1;
    for (int i = 0; i < numbers.size(); i++)
    {
        if (numbers[i] == target)
        {
            elementIndex = i;
        }
    }

    elementIndex == -1 ? cout << "Target Not Found" : cout << "Target found at index " << elementIndex;
    cout << endl;

    return 0;
}

// Code contributed by: @isobarbaric (Krish Shah)
