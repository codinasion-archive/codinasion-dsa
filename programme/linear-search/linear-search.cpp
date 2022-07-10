/*
Write a C++ programme for Linear Search.

Name: Krish Shah
*/

#include <iostream>
#include <sstream>
#include <vector>
#include <string>
using namespace std;

vector<int> takeInput() {
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

int main() {
    vector<int> numbers = takeInput();

    int target;
    cout << "Target : ";
    cin >> target;

    cout << "Output : ";

    int elementIndex = -1;
    for (int i = 0; i < numbers.size(); i++) {
        if (numbers[i] == target) {
            elementIndex = i;
        }
    }

    cout << elementIndex;

    return 0;
}