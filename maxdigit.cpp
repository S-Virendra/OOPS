/*nclude<iostream>
using namespace std;

     int max(int n){
    int max=0;

         while(n>0){
        int digit=n/10;
        if(digit>max){
            max=digit;
        }
        n=n/10;
       
    }
    return max;


}
int main(){
    int n;
    cin>>n;
 cout<<max(n);
}*/
#include <iostream>
//nclude <cmath>
using namespace std;

// Function to find the maximum digit in a number
int maxDigit(int num) {
    int maxDigit = 0;  // Variable to hold the maximum digit

    // Handle the case when the number is 0
    if (num == 0) {
        return 0;
    }

    // Loop through each digit of the number
    while (num > 0) {
        int digit = num % 10;  // Get the last digit
        if (digit > maxDigit) {
            maxDigit = digit;  // Update maxDigit if the current digit is larger
        }
        num /= 10;  // Remove the last digit
    }

    return maxDigit;  // Return the largest digit
}

int main() {
    int number;

    // Ask user to input a number
    cout << "Enter a number: ";
    cin >> number;

    // Call the maxDigit function and print the result
    cout << "The maximum digit in the number is: " << maxDigit(number) << endl;

    return 0;
}
