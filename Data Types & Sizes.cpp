// Name: Gulamnabi Khan
// PRN: 230701230503
//ENTC A3
#include <iostream>
#include <string>
using namespace std;

int main() {
    int a;
    char b;
    float c;
    bool d;
    string e;
    
    cout << "Please enter an integer number:" << endl;
    cin >> a;
    cout << "Your number is an integer: " << a << endl;
    cout << "Size in bytes: " << sizeof(a) << endl;
    
    cout << "Please enter a character:" << endl;
    cin >> b;
    cout << "Your character is: " << b << endl;
    cout << "Size in bytes: " << sizeof(b) << endl;
    
    cout << "Please enter a float number:" << endl;
    cin >> c;
    cout << "Your number is a float: " << c << endl;
    cout << "Size in bytes: " << sizeof(c) << endl;

    cout << "Please enter a string (one word):" << endl;
    cin >> e;
    cout << "Your string is: " << e<< endl; 
    cout << "Size of the string in bytes: " << sizeof(e)<<endl; 
    
    cout << "Please enter a boolean value (0 or 1):" << endl;
    cin >> d;
    cout << "Size in bytes: " << sizeof(d) << endl;
    
    return 0;
}
/*Output
Please enter an integer number:
45
Your number is an integer: 45
Size in bytes: 4
Please enter a character:
i
Your character is: i
Size in bytes: 1
Please enter a float number:
87.89
Your number is a float: 87.89
Size in bytes: 4
Please enter a string (one word):
hello
Your string is: hello
Size of the string in bytes: 8
Please enter a boolean value (0 or 1):
0
Size in bytes: 1
*/
