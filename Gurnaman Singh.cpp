// Gurnaman Singh HW3.cpp
// Name: Gary Singh
// Date: 2/24/20

#include <iostream>
#include<algorithm>
#include <string>
using namespace std;
int input;
bool status;
string zero = to_string(0);
string NumberAsStr;
string removeZero(string num) {
    string my_str = num;
    my_str.erase(remove(my_str.begin(), my_str.end(), '0'), my_str.end());
    return my_str;
}

string reverse(string str)
{
    int n = str.length();

    if (str[0] == '-') {
        for (int i = 0; i < n / 2; i++)
        {
            swap(str[i], str[n - i - 1]);
        }
        str = "-" + str;
        str = str.substr(0, str.size() - 1);
    }
    else {
        for (int i = 0; i < n / 2; i++)
        {
            swap(str[i], str[n - i - 1]);
        }
    }
        return str;
}

bool error(string edit)
{
    int n = edit.length();
    
    for (int i = 0; i < n / 2; i++) {
        if (edit[i] == '-' || edit[i] == '1' || edit[i] == '2' || edit[i] == '3' || edit[i] == '4' || edit[i] == '5' || edit[i] == '6' || edit[i] == '7' || edit[i] == '8' || edit[i] == '9' || edit[i] == '0'){

            return false;
              }
        else {
           
            return true;
        }
    }
}


int main()
{  
        cout << "\nType a number(press 0 to exit): ";
        cin >> input;
        if (input == 0) {
            exit(0);
        }
        NumberAsStr = to_string(input);
        status = error(NumberAsStr);
        
    do {
        
            cout << "\nNumber with zeroes: ";
            string noZero = removeZero(NumberAsStr);
            cout << noZero;
            cout << "\nreversed version: ";
            string reversed = reverse(noZero);
            cout << reversed;
            main();
        }while (status==false);
        if (status == true) {
            cout << "\nPlease enter a valid number without decimals or extraneous  characters...";

        }
        
    main();
    return 0;
}



