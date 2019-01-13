
// C++ Program to concatenate two string
// using unary operator overloading
#include <iostream>
#include <string.h>

using namespace std;

class AddString {

public:
    char s1[25], s2[25];

    AddString(char str1[], char str2[])
    {

        strcpy(this->s1, str1);
        strcpy(this->s2, str2);
    }

    void operator+()
    {
        cout << "\nConcatenation: " << strcat(s1, s2);
    }
};

// Driver Code
int main()
{
    // Declaring two strings
    char str1[] = "Devil ";
    char str2[] = "Prince";


    AddString a1(str1, str2);

    +a1;
    return 0;
}
