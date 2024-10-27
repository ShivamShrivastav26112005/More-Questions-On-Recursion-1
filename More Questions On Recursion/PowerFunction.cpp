// Ques.1-> Calculate a power b using iteration (loops) and function.
// 2 power 3 , ans = 8.

// #include<iostream>
// using namespace std;
// int power(int a, int b)
// {
//     int p=1;
//     for(int i=1; i<=b; i++)
//     {
//         p=p*a;
//     }
//     return p;
// }
// int main()
// {
// cout<<power(2,3);
// }
// // 8 


// Ques.2-> Calculate a power b using recursion and functions.
// method.1

// #include<iostream>
// using namespace std;
// int power(int n, int m)
// {
       // base case 
//     if(m==0) return 1;
//     if(m==1) return n;

//     return n*power(n,m-1);

// }
// int main()
//  {
//     // cout<<power(2,3); // 8
//     cout<<power(4,0); // 1
//  }


// method.2 using recursion 

// #include<iostream>
// using namespace std;
// int power(int a, int b)
// {
//     if(b==1) return a; // base case it's very important

//     if(b%2==0) // even 
//     return power(a,b/2) * power(a,b/2); // do bar call lag rha h
//     if(b%2!=0) // odd
//     return power(a,b/2)  *power(a,b/2)*a;
// }
//  int main()
//  {
//     // cout<<power(2,3); // 8 
//        cout<<power(2,4); // 16
//  }



// Method.3-> store the answer so that it's take less call

// #include<iostream>
// using namespace std;
// int power(int a, int b)
// {
//     if(b==1) return a;  // base case 

//     int ans=power(a,b/2); // ek bar hi call lag rhe h
//     if(b%2==0) 
//     return ans*ans;
//     else
//     return ans*ans*a;
// }
//  int main()
//  {
//     // cout<<power(2,3); // 8
//        cout<<power(2,4); // 16
//  }



