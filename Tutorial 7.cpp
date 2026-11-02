#include <iostream>
#include <cstring>
using namespace std;

class MyString {
    char *data;                        

public:

    MyString() {
        data = new char[1];
        data[0] = '\0';
    }

    MyString(const char *str) {
        data = new char[strlen(str) + 1];   
        strcpy(data, str);
    }

 
    MyString(const MyString &other) {
        data = new char[strlen(other.data) + 1];
        strcpy(data, other.data);
    }

 
    MyString &operator=(const MyString &other) {
        if (this != &other) {              
            char *temp = new char[strlen(other.data) + 1];
            strcpy(temp, other.data);
            delete[] data;             
            data = temp;
        }
        return *this;
    }

 
    ~MyString() {
        delete[] data;
    }

    void accept() {
        char buffer[1000];
        cin.getline(buffer, sizeof(buffer));
        delete[] data;                    
        data = new char[strlen(buffer) + 1];
        strcpy(data, buffer);
    }


    void display() const {
        cout << data;
    }
};

int main() {
    MyString s1;                        
    cout << "Enter a string: ";
    s1.accept();

    MyString s2("Object Oriented Programming");
    MyString s3(s2);                      

    cout << "s1 = ";
    s1.display();
    cout << endl;

    cout << "s2 = ";
    s2.display();
    cout << endl;

    cout << "s3 (copy of s2) = ";
    s3.display();
    cout << endl;

    return 0;
}
