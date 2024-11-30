// 1
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
// while ('1' < '2')
// cout << "In while loop" << endl;
// }
// In while loop
// In while loop
// In while loop
// In while loop
// In while loop
// Infinity time of loop here

// 2
// #include<iostream>
// using namespace std;
// int main()
// {
//     int t = 10;
//     while (t /= 2) {
//         cout<<"Hello" <<endl;
//     }
// }
/* Hello
   Hello
   Hello */

// 3
// #include <bits/stdc++.h>
// using namespace std;
// int main( ) {
//     for (int x = 1; x * x <= 10; x++)
//     {
//         cout << "In for loop" << endl;
//     }
// }
/* In for loop * 3 */

//4
// #include <iostream>
// using namespace std;
// int main()
// {
//     int x = 10, y = 0 ;
//     while ( x >= y ) {
//         x-- ;
//         y++ ;
//         cout<<x <<" "<<y<<endl ;
//     }
// }
/* 9 1
   8 2
   7 3
   6 4
   5 5 */

// 5
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n = 4556;
//     int answ = 0;
//     while(n>0)
//     {
//         int b = n%10;
//         if(b%2 == 0)
//         {
//             answ += b;
//         }
//         n /= 10;
//     }
//     cout<<answ<<" ";
//     return 0;
// }

// 6
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n = 12;
//     int answ = 0;
//     int a;
//     int b = 0;
//     answ += n;
//     while(n>0)
//     {
//         a = n / 10;
//         b = b * 10 + a;
//         n %= 10;
//     }
//     answ += b;
//     cout<<answ;
//     return 0;
// }
// 7
#include<iostream>
using namespace std;
int main()
{
    int n = 10;
    int fact = 1;
    for(int i = 1; i <= n; i++)
    {
        fact *= i;
        cout<<fact<<",";
    }
}