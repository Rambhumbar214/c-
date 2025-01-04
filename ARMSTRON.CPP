#include <iostream.h>
#include <cmath.h>
#include <conio.h>


bool isArmstrong(int num) 
     {
    int originalNum = num, sum = 0, digits = 0;

    
    while (num != 0) {
        digits++;
        num /= 10;
    }

    num = originalNum;

   
    while (num != 0) {
        int digit = num % 10;
        sum += pow(digit, digits);
        num /= 10;
    }

   
    return sum == originalNum;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isArmstrong(num)) {
        cout << num << " is an Armstrong number." ;
    } else {
        cout << num << " is not an Armstrong number." ;
    }

    return 0;
}
