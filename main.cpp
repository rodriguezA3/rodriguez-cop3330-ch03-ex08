/* ch03 ex08
Write a program to test an integer value to determine if it is odd or
even. As always, make sure your output is clear and complete. In other
words, don’t just output yes or no. Your output should stand alone,
like "The value 4 is an even number." Hint: See the remainder (modulo)
operator in §3.4.
*/
#include <iostream>
#include "./Integer.h"
#include "./Integer.cpp"

using namespace std;
int main() {
    
    cout << "Enter an integer.\nI will tell you if it is even or odd: ";
    int temp;
    cin >>  temp;

    Integer num(temp);

    if (num.isEven())
        cout << num.getNum() << " is even" << endl;
    else
        cout << num.getNum() << " is odd" << endl;

    return 0;
}