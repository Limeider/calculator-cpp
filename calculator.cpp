#include <iostream>
#include <limits>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    double n1 = 0.0, n2 = 0.0;
    char op = '\0';
    cout << "Enter two numbers !" << endl;
    cin >> n1 >> n2;
    if (cin.fail())
    {
        cout << "Entered numbers must be numeric !";
        return -1;
    }
    // clear cin buffer for clean input from operator
    cin.clear();                                                   // removes internal error flag failbit
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Discard invalid input in buffer

    cout << "Enter operator !" << endl;
    cin >> op;
    if (cin.fail())
    {
        cout << "Choose a valid operator ! { +  -  /  * or x } " << endl;
        return -1;
    }
    switch (op)
    {
    case '+':
        cout << n1 + n2 << endl;
        break;
    case '-':
        cout << n1 - n2 << endl;
        break;
    case '/':
        cout << n1 / n2 << endl;
        break;
    case '*':
    case 'x':
        cout << n1 * n2 << endl;
        break;
    default:
        cout << "Error occured!" << endl;
        return -1;
    }

    return 0;
}