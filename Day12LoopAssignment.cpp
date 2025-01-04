#include<iostream>
using namespace std;
int main(){
    /*
    Question 1: Predict the output.?
    */
    while ('1' < '2')
        cout << "In while loop" << endl;

    /*
    Q1: Output : Infinite Loops
    */ 

    /*
    Question 2:
    */ 
    int t = 10;
    while (t /= 2) {
    cout << "Hello" << endl;
    }    

    /*
    Q2: Output : 
        Hello
        Hello
        Hello
    */ 

    /*
    Question 3: Predict the output.?
    */  

    for (int x = 1; x * x <= 10; x++){
         cout<<"In for Loop"<<endl;
    
    }

    /*
    Q3: Output:
        In for Loop
        In for Loop
        In for Loop
    */

    /*
    Question 4: Predict the output:

    */

    int x = 10, y = 0 ;
    while ( x >= y ) {
        x-- ;
        y++ ;
        cout << x << " " << y << endl ;
    }

    /*
    Q5: Output:
        9 1
        8 2
        7 3
        6 4
        5 5
        4 6

    */

    /*
    Question 5: Write a Program to print the sum of a given number and its reverse.?
    */
    int n;
    cout<<"Enter a any integer number : "<<endl;
    cin>>n;
    int lastdigit;
    int sum=0;
    while(n>0){
        lastdigit = n%10;
        n/=10;
        if(lastdigit%2==0){
            sum +=lastdigit;
        }
    }
    cout<<"The sum of Even Number : "<<sum<<endl;
         
    /*
    Question 6: Write a Program to print the factorials of first 'n' number.?
    */

    int n;
    cout<<"Enter a any integer number to find factorial : "<<endl;
    cin>>n;
    int fact=1;
    cout<<"The factorial show of number "<< n<<" times "<<endl;
    for(int i=1; i<=n; i++){
        fact *=i;
         cout<<fact<<endl;
      
    }

    /*
    Question 7: Write a Program the Print first 'n' fibonacci number.?
    */
    int n;
    cout<<"Enter a any integer number to print the fibonacci Series : "<<endl;
    cin>>n;
    int t1=0, t2=1, nextTerm;
    cout<<"Fibonaaci Series is : "<<endl;
    for(int i=0; i<=n; i++){
        cout<<t1<<" ";
        nextTerm = t1+t2;
        t1 = t2;
        t2 = nextTerm;
    }


    /*
    Question 9: Write a program to print out all Armstrong numbers between 1 and 500. If the sum of cubes of 
    each digit of the number is equal to the number itself, then the number is called an Armstrong 
    number. For example, 153 = ( 1 * 1 * 1 ) + ( 5 * 5 * 5 ) + ( 3 * 3 * 3 ) .?
    */

    int n;
    cout<<"Enter a any Number to print the find the   Armstrong numbers : "<<endl;
    cin>>n;
    int lastDigit;
    int armstrong;
    cout<<"The  check of Armstrong numbers : "<<endl;
    while(n>0){
        lastDigit = n%10;
        armstrong += (lastDigit*lastDigit*lastDigit);
        n/=10;
    }

    if(armstrong==n){
        cout<<"The Number is Armstrong."<<endl;
    }
    else{
        cout<<"The Number is not Armstrong."<<endl;
    }

     
    





}