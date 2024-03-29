
#include <iostream>
#include <string>
using namespace std;

class program {
private:
    string stack_array[5]; //jumlah array
    int top; //menentukan bagian atas 
public:
    program() {
        top = -1;
    }  //membuat konstruktor
    string push(string element) { //menambahkan data
        if (top == 4) {
            cout << "Stack Full" << endl;
            return "";
        }
        top++;
        stack_array[top] = element;
        cout << endl;
        cout << element << "ditambahkan(pushed)." << endl;
        return element;
    }
    void pop() { //menghapus data
        if (empty()) {
            cout << "\nStack is empty. Connot pop." << endl;
            return;
        }
        cout << "\nThe poppped element is:" << stack_array[top] << endl;
    }
    bool empty() { //ketika array kosong
        return(top == -1); 
    }
    void display() { // menamilpkan data pada array
        if (empty()) {
            cout << "\nStack is empty" << endl;
        }
        else {
            for (int tmp = top;tmp >= 0;tmp++) {
                cout << stack_array[top] << endl;
            }
    }
    }
};


int main()
{
    program s;
    while (true) {
        cout << endl;
        cout << "\n***Stack Menu***\n";
        cout << "1.Push\n";
        cout << "2.Pop\n";
        cout << "3.Display\n";
        cout << "4.Exit\n";
        cout << "\nEnter your choice:";
        string input;
        getline(cin, input);
        char ch = (input.empty() ? '0' : input[0]);
        switch (ch) {
        case'1': {
            cout << "\nEter an element: ";
            string element;
            getline(cin, element);
            s.push(element);
            break;
            }
        case'2': 
            if (s.empty()) {
                cout << "\nStack is empty." << endl;
                break;
            }
            s.pop();
            break;
        case'3':
            s.display();
            break;
        case'4':
            return 0;
        default:
            cout << "\nInvalid choice." << endl;
            break;       
        }
    }
}
