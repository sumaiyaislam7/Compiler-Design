#include <iostream>
#include <string>
using namespace std;

bool isSingleLineComment( string input) {
    return (input.substr(0, 2) == "//");
}

bool isMultiLineCommentStart( string input) {
    return (input.substr(0, 2) == "/*");
}

bool isMultiLineCommentEnd( string input) {
    return (input.substr(input.size() - 2, 2) == "*/");
}

bool isComment( string input) {
    if (isSingleLineComment(input) || isMultiLineCommentStart(input) || isMultiLineCommentEnd(input)) {
        return true;
    }
    return false;
}

int main() {
    string input;

    cout << "Enter input: ";
    getline(cin, input);

    if (isSingleLineComment(input)) {
        cout << "Single line comment" << endl;
    } else if(isMultiLineCommentStart(input) || isMultiLineCommentEnd(input)){
        cout << "Multiple line comment" << endl;
    }else{cout<< " Input is not a comment"<<endl;}

    return 0;
}

