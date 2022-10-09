#include <iostream>

using namespace std;
int main(int argc, char const *argv[])

// {
//     int n;
//     cout << "Input the rows: ";
//     cin >> n;

//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= 2 * n - 1; j++)
//         {
//             if (j >= i && j <= 2*n - i)

//             {
//                 cout << "*";
//             }
//             else
//             {
//                 cout << " ";
//             }
//         }
//         cout << "\n";
//     }
//     return 0;
// }

// {
//     int i, j;
//     cout << "pattern is\n";

//     for (i = 1; i <=5; i++)
//     {
//         for (j = 1; j <= 9; j++)
//         {
//             if (j >= 6 - i && j <= 4 + i)
//             {
//                 cout << "*";
//             }
//             else
//             {
//                 cout << " ";
//             }
//         }
//         cout << "\n";
//     }
//     return 0;
// }

// {
//     int n;
//     cin >> n;

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < 2 * n; j++)
//         {
//             if (j >= i && j <= n - i)
//             {
//                 cout << "*";
//             }
//             else
//             {
//                 cout << " ";
//             }
//         }
//         cout << endl;
//     }
//     return 0;
// }

{
    int no_rows;

    cout << "Input the no. of rows: ";
    cin >> no_rows;

for (int row = no_rows; row >= 1; row--)
{
    for (int column = 1; column <= no_rows + 5 - row; column++)

        cout << " ";

        for(int column=1;column<=row;column++)

    for (int column = row - 1; column >= 1; column--)

        cout << "*";
    cout << "\n";
}

    // for (int row = no_rows; row >= 1; row--)
    // {
    //     for (int column = 1; column <= row; column++)
    //     {
    //         cout <<"*" ;
    //     }

    //     for (int column = row-1; column >= 1 ; column--)
    //     {
    //         cout<<" ";
    //     }

    //     cout << "\n";
    // }

    return 0;
}

// {
//     int n;
//     // char alpha='A';
//     cout << "Input the no. of rows: ";
//     cin >> n;

//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n; j++)
//         {
//             if (j <= i)
//             {
//                 cout << "*";
//             }
//             else
//             {
//                 cout << " ";
//             }
//         }
//         cout << "\n";
//     }

//     return 0;
// }

// {
//     int n;
//     cout << "Input the no. of rows: \n";
//     cin >> n;

//     for (int i = 0; i <= n-1; i++)
//     {
//         for (int j = 0; j <= 2*n-1; j++)
//         {
//             if (j <= n -1-i && j >= n - i+i)
//             {
//                 cout << "*";
//             }
//             else
//             {
//                 cout << " ";
//             }
//         }
//         cout << "\n";
//     }
//     return 0;
// }


// {

//     int row, col, i, j;

//     cout << "Input the no. of rows and coloumn :";
//     cin >> row >> col;

//     for (i = 1; i <= row; i++)
//     {
//         for (j = 1; j <= col; j++)
//         {
//             if (i == 1 || i == row || j == 1 || j == col)
//             {
//                 cout << "*";
//             }

//             else
//             {
//                 cout << " ";
//             }
//         }

//         cout << endl;
//     }
//     return 0;
// }