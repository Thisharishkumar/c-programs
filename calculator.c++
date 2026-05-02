#include <iostream>
using namespace std;

int main(){
double a, b;
char op;

cout <<"Enter: a op b:";
cin>> a >> op >> b;

switch (op) {
    case '+':
        cout << a + b;
        break;
    case '-':
        cout << a - b;
        break;
    case '*':
        cout << a * b;
        break;
    case '/':
        if (b != 0)
            cout << a / b;
        else
            cout << "Error: Division by zero";
        break;
    default:
        cout << "Error: Invalid operator";
}
}
