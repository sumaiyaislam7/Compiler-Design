#include <iostream>

#include <string>

using namespace std;

bool VariableName(const string& s) {

    if (s.empty()) {

        cout << "Variable name cannot be empty"<<endl;

        return 0;

    }


    if (!(s[0] >= 'a' && s[0] <= 'z') && !(s[0] >= 'A' && s[0] <= 'Z') && s[0] != '_') {

        cout << "Variable name must start with a letter or underscore"<<endl;

        return 0;

    }


    for (char c : s) {

        if (!((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9') || c == '_')) {

            cout << "Invalid character in variable name: " << c << endl;

            return 0;

        }

    }


    if (s == "char" || s == "int" || s == "float" || s == "double" || s == "for" ||

        s == "if" || s == "else" || s =="else if"|| s == "while" || s == "return" || s == "class"|| s =="void") {

         return 0;

    }


    return 1;

}

int main() {

    string n;

    cout << "Enter a variable name: ";

    cin >> n;

    if (VariableName(n)) {

        cout  << n << " is a valid variable name "<<endl;

    }

    else

    {

        cout<< n << " is  not a valid variable name "<<endl;

    }
    return 0;

}
