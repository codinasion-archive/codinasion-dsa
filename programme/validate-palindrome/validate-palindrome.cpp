// Write a programme to Validate Palindrome string

#include <string>
#include <iostream>
using namespace std;

string validPalindrome(string s){

    // Automatically returns true if the string is empty
    if (s.length() == 0){
        return "True";
    }

    int i = 0;
    
    // Turns all cases of the string to lower case
    while (i < s.length()){
        s[i] = tolower(s[i]);
        i++;
    }
    
    string reverse = "";

    i = s.length() - 1;
    while(reverse.length() != s.length()){
        reverse.push_back(s[i]);
        i--;
    }

    if (reverse.compare(s) == 0){
        return "True";
    } else {
        return "False";
    }
    
}


int main(){

    string i = "TacoCat";

    cout << i << ": " << validPalindrome(i) << endl;

    i = "";

    cout << i << ": " << validPalindrome(i) << endl;

    i = "ToweR";

    cout << i << ": " << validPalindrome(i) << endl;

    
    return 0;
}