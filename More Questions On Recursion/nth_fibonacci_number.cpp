// MULTIPLE CALLS 

// Ques.1-> Write a function to calculate the nth fibonacci number using iteration(loops)
// 0    1      1      2 3 5 8 13 21 ....
// 1st term 2nd term  3,4,5,...


// #include<iostream>
// using namespace std;
//  int main(){
//     int n;
//     cout<<"Enter n ";
//     cin>>n;

//     int sum=0;
//     int a=0,b=1; 
//   // if(a=1 and b=1 than i<n-1 or i<=n-2)

//  for(int i=1; i<n; i++) // i<=n-1
//     {
//       sum=a+b;
//       a=b;
//       b=sum;
//     }
//    cout<<b;
// }
 
//  Enter n 6
// 8





// Ques.2-> Write a function to calculate the nth fibonacci number(starts from 1) using recursion.
//  1 1 2 3 5 8 13 21 .... n=5 ans=5, n=6 ans=8

#include<iostream>
using namespace std;
int fibo(int n)
{
    if(n==1 || n==2) return 1; // bas case 
    return fibo(n-1)+fibo(n-2); // multiple calls 
}
 int main()
 {
    int n;
    cout<<"Enter n ";
    cin>>n;

    cout<<fibo(n);
 }

// Enter n 6
// 8


