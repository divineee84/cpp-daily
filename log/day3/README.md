ing math using operators:

+ addition

- subtraction

* multiplication

/ division

% remainder (modulus)

Using string to store words and names

💻 Code

#include <iostream>
#include <string>
using namespace std;

```
int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "Sum: " << a + b << '\n';
    cout << "Difference: " << a - b << '\n';
    cout << "Product: " << a * b << '\n';
    cout << "Quotient: " << a / b << '\n';
    cout << "Remainder: " << a % b << '\n';

    string name;
    cout << "Enter your name: ";
    cin >> name;
    cout << "Hello, " << name << "!" << '\n';

    return 0;
}
```

🌱 Thoughts

Today I learned how to interact with the user instead of just printing fixed values.
It feels like the program is finally starting to listen and respond, not just shout numbers at me. Slowly, it’s feeling more alive ⚡
