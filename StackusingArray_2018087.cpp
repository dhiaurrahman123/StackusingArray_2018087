
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
    string push(string element) {
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
    void pop() {
        if (empty()) {
            cout << "\nStack is empty. Connot pop." << endl;
            return;
        }
        cout << "\nThe poppped element is:" << stack_array[top] << endl;
    }
    bool empty() {
        return(top == -1);
    }
};


int main()
{
    std::cout << "Hello World!\n";
}
