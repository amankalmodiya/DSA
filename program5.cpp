// #include<iostream>
// using namespace std;
// int main(){
// int a=5;
// int b=2;
// // a=a-b;

// // b=a+b;
// // a=b-a;
// a=a/b;
// b=a*b;
// a=b/a;
// cout<<"a is ;"<<a;

// cout<<"b is:"<<b;
//     return 0;
// }

#include <iostream>

int main() {
    int num1, num2;

    // Prompt user for input
    std::cout << "Enter the first number (num1): ";
    std::cin >> num1;
    std::cout << "Enter the second number (num2): ";
    std::cin >> num2;

    // Display values before swapping
    std::cout << "\n--- Before Swapping ---\n";
    std::cout << "num1 = " << num1 << std::endl;
    std::cout << "num2 = " << num2 << std::endl;

    // Swapping using multiplication and division method
    if (num1 != 0 && num2 != 0) {
        num1 = num1 * num2; // num1 now holds the product
        num2 = num1 / num2; // num2 now holds the original num1
        num1 = num1 / num2; // num1 now holds the original num2

        // Display values after swapping
        std::cout << "\n--- After Swapping (Multiplication/Division Method) ---\n";
        std::cout << "num1 = " << num1 << std::endl;
        std::cout << "num2 = " << num2 << std::endl;
    } else {
        std::cout << "\nSwapping with multiplication/division is not possible if either number is zero.\n";
        std::cout << "Consider using the addition/subtraction method or XOR method instead for zero values.\n";
    }

    return 0;
}
