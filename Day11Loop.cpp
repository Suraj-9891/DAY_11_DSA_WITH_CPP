#include<iostream>
using namespace std;

bool isPrime(int num, int divisor = 2) {
    // Base cases
    if (num <= 1)
        return false; // Numbers less than or equal to 1 are not prime
    if (divisor * divisor > num)
        return true; // No divisor found, number is prime
    if (num % divisor == 0)
        return false; // Divisor found, number is not prime

    // Recursive step
    return isPrime(num, divisor + 1);
}

   bool isComposite(int num, int divisor = 2) {
    // Base cases
    if (num <= 1)
        return false; // Numbers less than or equal to 1 are neither composite nor prime
    if (divisor * divisor > num)
        return false; // No divisor found, number is not composite (it is prime)
    if (num % divisor == 0)
        return true; // Divisor found, number is composite

    // Recursive step
    return isComposite(num, divisor + 1);
}

int main(){
    /*
    Question 1: Write a Program if a number primme or not.?
    */

// Recursive function to check if a number is prim


    int number;

    // Input number
    cout << "Enter a number: ";
    cin >> number;

    // Check if the number is prime
    if (isPrime(number))
        cout << number << " is a prime number." << endl;
    else
        cout << number << " is not a prime number." << endl;


    /*
    Question 2: Write a Program to check if a number is compositive prime or not.?
    */


    int number;

    // Input number
    cout << "Enter a number: ";
    cin >> number;

    // Check if the number is composite
    if (isComposite(number))
        cout << number << " is a composite number." << endl;
    else
        cout << number << " is not a composite number." << endl;



    /*
    Question 3: Write a program to print odd number from 1 to 100.?
    */
    // int n;
    // cout<<"Enter a Number for print odd number : "<<endl;
    // cin>>n;
    // cout<<"The odd number for "<< n<<" times "<<endl;
    // for(int i=0; i<=n; i++){
    //     if(i%2!=0){
    //         cout<<i<<endl;
    //     }
    // }

    /*
    Question 5: Write a program to count digits of a given number.?
    */
    int n;
    cout<<"Enter a any Number : "<<endl;
    cin>>n;
    int a=n;
    int count=0;
    while(n>0){
        n/=10;
        count++;
    }
    cout<<"The number of digit is : ";
    if(a==0) cout<<1;
    else cout<<count<<endl;
    
    /*
    Question 6: Write a program to printsum of digits of given number.?
    */
    int n;
    cout<<"Enter a any Number : "<<endl;
    cin>>n;
    int sum=0;
    while(n>0){
        int lastdigit = n%10;
        n/=10;
        sum+=lastdigit;
    }
    cout<<"The sum of the number is : "<<endl;
    cout<<sum<<endl;

    /*
    Question 7: Write a Program to print reverse of given number.?
    */

    int n;
    cout<<"Enter a any number : "<<endl;
    cin>>n;
    int r,lastDigit;
    while(n>0){
         lastDigit = n%10;
        n/=10;
        r = r*10;
        r+=lastDigit;

    }
    cout<<"The reverse number is : "<<endl;
    cout<<r<<endl;

    /*
    Question 8: print the sum of this series:
    1-2+3-4+5-6......upto 'n'.
    */
    int n;
    cout<<"Enter a any number : "<<endl;
    cin>>n;
    int sum=0;
    for(int i=0; i<=n; i++){
        if(i%2!=0) sum+=i;
        else sum-=i;
    }
    cout<<"The sum of 1 - 2 + 3 - 4 + 5 - 6… upto 'n' "<<sum<<endl;

    /*
    Question 9: Write a Program to print the factorial of a given number 'n'.?
    */
   int n;
   cout<<"Enter a any number to find the factorial : "<<endl;
   cin>>n;
   int fact=1;
   for(int i=1; i<=n; i++){
        fact *=i;
   }
   cout<<"The value of factorial : "<<fact<<endl;


   /*
   Question 10: Write a Program print the fibonacci number.?
   */ 
    
    int n; // Number of terms in the Fibonacci series
    cout << "Enter the number of terms: ";
    cin >> n;

    // First two terms of the Fibonacci series
    int t1 = 0, t2 = 1;

    cout << "Fibonacci Series: ";

    for (int i = 1; i <= n; ++i) {
        cout << t1 << " ";
        int nextTerm = t1 + t2; // Calculate the next term
        t1 = t2;               // Update t1
        t2 = nextTerm;         // Update t2
    }

    /*
    Question 11: : Two numbers are entered through the 
    keyboard. Write a program to find the value of one 
    number raised to the power of another.
    */


    int base, exponent;
    long long result = 1; // Using long long to handle large results

    // Input two numbers
    cout << "Enter the base number: ";
    cin >> base;
    cout << "Enter the exponent: ";
    cin >> exponent;

    // If exponent is 0, the result is 1
    if (exponent == 0) {
        result = 1;
    } else if (exponent > 0) {
        // Loop for positive exponent
        for (int i = 1; i <= exponent; ++i) {
            result *= base;
        }
    } else {
        // Handle negative exponents (optional, for integer exponents)
        cout << "Negative exponents not supported in integer operations." << endl;
        return 0;
    }

    // Display the result
    cout << base << " raised to the power of " << exponent << " is: " << result << endl;






}