// Ques.1-> Maze path -> matrix = 2*2
// in starting postion (0,0) and ending postion (2,2)
// (0,0) -> (2,2) jana hai.

// use- 4 variables.

// #include<iostream>
// using namespace std;
// int maze(int sr,int sc,int er,int ec)
// {
//     if(sr>er || sc>ec) return 0;  // base case 
//     if(sr==er && sc==ec) return 1; // 1*1 ka matrix hai

//     int rightways=maze(sr,sc+1,er,ec);
//     int downways=maze(sr+1,sc,er,ec);
//     int totalways=rightways+downways;
//     return totalways;
// }
// int main()
// {
//     cout<<maze(0,0,2,2); // 6 ways lagega means hm 6 tariko se yha aa sakte h
// }




// Ques.2-> Print ways

// #include<iostream>
// using namespace std;
// void printpath(int sr,int sc,int er,int ec,string s)
// {
//     if(sr>er || sc>ec) return ;  
//     if(sr==er && sc==ec)
//     {
//         cout<<s<<endl;
//          return ; 
//     }
//        printpath(sr,sc+1,er,ec,s+'R');
//        printpath(sr+1,sc,er,ec,s+'D');
   
// }
// int main()
// {
//     printpath(0,0,2,2,""); // 6 ways lagega means hm 6 tariko se yha aa sakte h
// }

// RRDD
// RDRD
// RDDR
// DRRD
// DRDR
// DDRR




// Ques.3-> use only 2 variables.

// #include<iostream>
// using namespace std;
// int maze(int row, int col)
// {

//    if(row<1 || col<1) return 0;
//    if(row==1 && col==1) return 1; // 1 * 1 ka martix

//     int rightways= maze(row,col-1);
//     int downways = maze(row-1, col);
//     int totalways=rightways+downways;
//     return totalways;
// }
//  int main()
//  {
//     // cout<<maze(2,2); // 2
//        cout<<maze(3,3); // ans = 6
             // only two parameter pass (3,3)   
//  }




 //Qus.4-> print ways using two parameters.
 
#include<iostream>
using namespace std;
void printways(int row, int col,string s)
{

   if(row<1 || col<1) return ;
   if(row==1 && col==1) 
   {
    cout<<s<<endl;
    return ;
   }

    printways(row,col-1, s+'R');
    printways(row-1, col , s+'D');
   
}
 int main()
 {
    //  printways(2,2,"");   //RD ,DR

        printways(3,3,""); 
 }

// RRDD
// RDRD
// RDDR
// DRRD
// DRDR
// DDRR