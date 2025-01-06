#include<iostream>
using namespace std;
int main(){
    /*
    Question 1: Print the following pattern.?
        1 1 1 1
        2 2 2 2
        3 3 3 3
        4 4 4 4 

    */
    int n;
    cout<<"Enter a number : "<<endl;
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cout<<i<<" ";
           
        }
         
        cout<<endl;
    }

    /*
    Question 2: Print the following pattern.?
        1 2 3 4
        1 2 3 
        1 2 
        1 
    
    */
    cout<<"Enter a Row Number : "<<endl;
    int n;
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n+1-i; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    /*
    Question 3: Print the following pattern.?

        A
        A B
        A B C 
        A B C D
    */
    cout<<"Enter a Row Number : "<<endl;
    int n;
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
        
            cout<<char(j+64)<<" ";
        }
        cout<<endl;
    }
    
    /*
    Question 4: Print the following pattern.?
        
        1
        A B
        1 2 3
        A B C D
        1 2 3 4 5

    */
    int n;
    cout<<"Enter a Number : "<<endl;
    cin>>n;
    for(int i=1; i<=n; i++){
       if(i%2==1){
            for(int j=1; j<=i; j++){
                cout<<j<<" ";
            }
            cout<<endl;
          
       }
         else{
                for(int j=1; j<=i; j++){
                    cout<<(char)('A'+j-1)<<" ";
                }
                cout<<endl;
            }

    }

    /*
    Question 5: Print the following pattern.?
    input n=4
    output:

        *
        **
        ***
        ****
        ***
        **
        *

    */
    cout<<"Enter a number : "<<endl;
    int n;
    cin >> n;

    
   // Printing Upper Triangle
   for(int i=1; i<=n; i++){
        for(int j=1; j<i; j++){
            cout<<"*";
        }
        cout<<endl;
   }
   // Printing lower triangle
   for(int i=1; i<=n-1; i++){
        for(int j=0; j<n-i-1; j++){
            cout<<"*";
        }
        cout<<endl;
   }

   /*
   Question 6: Print the following pattern
   Sample Input : m=4, n=6
   Sample Output: 
        ******
        *    *
        *    *
        ******

   
   */
    int m;
    cout<<"Enter a row of number : "<<endl;
    cin>>m;
    int n;
    cout<<"Enter a column of number : "<<endl;
    cin>>n;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(i==0 || j==0 || i==m-1 || j==n-1){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }

    /*
    Question 7: Print the following pattern.
        Sample Input : n=4
        Output :
                ***
               ***
              ***
             ***
    */

   cout<<"Enter a Number : "<<endl;
   int n;
   cin>>n;
   for(int i=0; i<=n; i++){
        for(int j=0; j<=n-i-1; j++){
            cout<<" ";
        }
        for(int j=0; j<n; j++){
            cout<<"*";
        }
        cout<<endl;
   }






    /*
    Question 8: Print the following pattern.?
        1
        1 2
        1 2 3
        1 2 3 4

    */

    cout<<"Enter a Row Number : "<<endl;
    int n;
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
        
            cout<<j<<" ";
        }
        cout<<endl;
    }

    /*
    Question 9: Print the following patter.?
        Input n=4
        Output : 

              A
            A B
          A B C
        A B C D

    */
     cout<<"Enter a Row Number : "<<endl;
    int n;
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i; j++){
            cout<<" ";
        }
        for(int k=1; k<=i; k++){
            cout<<char(k+64);
        }
        cout<<endl;
    }

    /*
    Question 10: Print the following pattern.?
    */
    cout<<"Enter a Row Number : "<<endl;
    int n;
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            
        
        }
        cout<<endl;
    }

    


}