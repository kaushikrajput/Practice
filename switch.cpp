#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
// {

//     char button;

//     cin >> button;

//     switch (button)
//     {
//     case 'a':
//         cout << "hello";
//         break;

//     case 'b':
//         cout << "namaste";
//         break;

//     case 'c':
//         cout << "salute";
//         break;

//     case 'd':
//         cout << "ciao";
//         break;

//     default:
//         cout << "I am still learning more!" << endl;
//         break;
//     }

//     return 0;
// }

{
    int n1, n2;
    cout << "INput two number ";
    cin >> n1 >> n2;

    char op;
    cout << "Input operator ";
    cin >> op;

    switch (op)
    {
    case '+':
        cout << n1 + n2 << endl;
        break;

    case '-':
        cout << n1 - n2 << endl;
        break;

    case '*':
        cout << n1 * n2 << endl;
        break;

    case '/':
        cout << n1 / n2 << endl;
        break;

    default:
        cout << "Input another operator" << endl ;
        break;
    }
}