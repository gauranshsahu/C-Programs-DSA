//stack implementation
#include <iostream>
using namespace std;
int main() {
    int MAX = 5; 
    int stack[MAX];
    int top = -1;
    int choice;
    do {
        cout << "\n1. Push\n2. Pop\n3. Display\n4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: 
                if (top == MAX - 1) {
                    cout << "Stack Overflow! ho chuka hein.\n";
                } else {
                    int value;
                    cout << "Enter value to push: ";
                    cin >> value;
                    stack[++top] = value;
                    cout << value << " pushed onto the stack.\n";
                }
                break;

            case 2: 
                if (top == -1) {
                    cout << "Stack Underflow! kuch value n h stack mein.\n";
                } else {
                    cout << stack[top--] << " popped from the stack.\n";
                }
                break;

            case 3:
                if (top == -1) {
                    cout << "Stack is empty.\n";
                } else {
                    cout << "Stack elements: ";
                    for (int i = top; i >= 0; i--) {
                        cout << stack[i] << " ";
                    }
                    cout << "\n";
                }
                break;

            case 4: 
                cout << "Exiting...\n";
                break;

            default:
                cout << "Invalid choice! kuch samay pashchat prayas krein.\n";
        }
    } while (choice != 4);
    return 0;
}