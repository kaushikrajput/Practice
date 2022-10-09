#include <iostream>
#include <stack>
#define MAX 50

using namespace std;

/////////////////////////// 1. calculator using switch ///////////////////////////

// int main()
// {
//     int n1, n2;
//     cout << "INput two number ";
//     cin >> n1 >> n2;

//     char op;
//     cout << "Input operator ";
//     cin >> op;

//     switch (op)
//     {
//     case '+':
//         cout << n1 + n2 << endl;
//         break;

//     case '-':
//         cout << n1 - n2 << endl;
//         break;

//     case '*':
//         cout << n1 * n2 << endl;
//         break;
        

//     case '/':
//         cout << n1 / n2 << endl;
//         break;

//     default:
//         cout << "Input another operator" << endl;
//         break;
//     }
// }
///////////////////////////2. greatest  number ////////////////////////////

// int greatestNumber(int n1, int n2, int n3)
// {

//     if (n1 > n2 && n2 < n1 && n1 > n3 && n3 < n1)

//     {
//         return n1;
//     }
//     else if (n2 > n1 && n1 < n2 && n2 > n3 && n3 < n2)
//     {
//         return n2;
//     }
//     else
//     {
//         return n3;
//     }
// }
// int main()
// {

//     {
//         int n1, n2, n3;
//         cout << "Input first number: ";
//         cin >> n1;
//         cout << "Input  second number: ";
//         cin >> n2;
//         cout << "Input third number: ";
//         cin >> n3;

//         int result = greatestNumber(n1, n2, n3);
//         cout << "Greatest number is: " << result;

//         return 0;
//     }
// }

////////////////////////// 3.print 3x3 matrix ////////////////////////////////

// int main()
// {

//     int a[3][3];
//     cout << "Enter Elements of Array : ";

//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             cin >> a[i][j];
//         }
    
//     }

//     cout << "3x3 Matrix :" << endl;
//     for (int i = 0; i < 3; i++)
//     {
//         cout << endl;
//         for (int j = 0; j < 3; j++)
//         {
//             cout << a[i][j] << " ";
//         }
//     }
//     return 0;
// }

///////////////////////// 4. length of two string ////////////////////////

// int main()
// {
//     string s1 = "Tony Stark";
//     string s2 = "Iron Man";

//     if (s1 != s2)
//     {
//         cout << s1 << " is not equal to " << s2 << endl;

//         if (s1 > s2)
//         {
//             cout << s1 << " Greater than " << s2 << endl;
//         }
//         else
//         {
//             cout << s2 << " Greater than " << s1 << endl;
//         }
//     }
//     else 
//     {
//         cout << s1 << " is  equal to " << s2 << endl;
//     }
//     return 0;
// }

// ////////////////////////// 5. count length of string ////////////////////////////

// int main(int argc, char const *argv[])
// {
//     string s = "Tony Stark";
//     int length = 0;

//     while (s[length] != 0)
//     {
//         length++;
//     }
//     cout << "the length of the string is "<<length;

//     return 0;
// }

/////////////////////////// 6. reverse string ////////////////////////////////

// int main(int argc, char const *argv[])
// {
//     string s = "Tony Stark";
//     int i = 0, n = 0, t;

//     while (s[i] != 0)
//     {
//         n++;

//         i++;
//     }

//     for (i = 0; i < n / 2; i++)

//     {

//         t = s[i];

//         s[i] = s[n - i - 1];

//         s[n - i - 1] = t;
//     }

//     cout << s;

//     return 0;
// }

///////////////////////////////      7.      /////////////////////////////////

// int main(int argc, char const *argv[])
// {
//     int n1, n2, rows, columns, sum = 0;

// 	cout << "\nPlease Enter the rows and Columns =  ";
// 	cin >> n1 >> n2;

// 	int sumDgnalArr[n1][n2];

// 	cout << "\nPlease Enter the Items\n";
// 	for(rows = 0; rows < n1; rows++)	{
// 		for(columns = 0; columns < n2; columns++) {
// 			cin >> sumDgnalArr[rows][columns];
// 		}
// 	}

//  	for(rows = 0; rows < n1; rows++)
//   	{
//   		sum = sum + sumDgnalArr[rows][rows];
//   	}

//   	cout << "\nThe Sum of Diagonal Elements = " << sum;

//     return 0;
// }

//////////////////////////////////// 8. /////////////////////////////////

// int main(int argc, char const *argv[])
// {
//     int n1, n2, rows, columns, sum = 0;
//     int first[3][3];
//     int second[3][3];
//     int result[3][3];

//     ////////// input first matix

//     cout << "Enter the items: ";
//     for (rows = 0; rows < 3; rows++)
//     {
//         for (columns = 0; columns < 3; columns++)

//         {
//             cin >> first[rows][columns];
//         }
//     }
//     //////// input second matrix

//     cout << "Enter the items: ";
//     for (rows = 0; rows < 3; rows++)
//     {
//         for (columns = 0; columns < 3; columns++)

//         {
//             cin >> second[rows][columns];
//         }
//     }
//     ////////// display the matrix
//     cout<<"Entered both matrix "<<endl;
//     for (rows = 0; rows < 3; rows++)
//     {
//         for (columns = 0; columns < 3; columns++)

//         {
//             cout << first[rows][columns] << " ";
//         }
//         cout<<"  ";
//         for (columns = 0; columns < 3; columns++)
//         {
//             cout << second[rows][columns] << " ";
//         }
//         cout << endl;
//     }
//     /////// multiply the matrix

//     for (int rows = 0; rows < 3; rows++)
//     {

//         for (int columns = 0; columns < 3; columns++)
//         {

//             int sum = 0;
//             for (int k = 0; k < 3; ++k)
//             {
//                 sum += first[rows][k] * second[k][columns];
//             }
//             result[rows][columns] = sum;
//         }
//     }
//     ////////////// display result of matrix

//     cout << "Product of two matrix: "<<endl;
//     for (rows = 0; rows < 3; rows++)
//     {
//         for (columns = 0; columns < 3; columns++)
//         {
//             cout << " " << result[rows][columns];
//         }
//         cout << endl;
//     }

//     return 0;
// }

//////////////////////////////// 9. /////////////////////////////////

// int main(int argc, char const *argv[])
// {
//     int arr[3][3];
//     int sum = 0;
//     int n1, n2;
//     cout << "Enter the elements of 3x3 Matrix: ";

//     for (int rows = 0; rows < 3; rows++)
//     {
//         for (int columns = 0; columns < 3; columns++)
//         {
//             cin >> arr[rows][columns];
//         }
//     }

//     for (int rows = 0; rows < 3; rows++)
//     {
//         for (int columns = 0; columns < 3; columns++)
//         {
//             cout << arr[rows][columns]<<" ";
//             sum += arr[rows][columns];
//         }
//         cout<<endl;
//     }
//         cout << "sum is " << sum;

//     return 0;
// }

///////////////////////////   10.   ////////////////////////////

// int main(int argc, char const *argv[])
// {
//     int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};

//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             if (i >= j)
//             {
//                 cout << arr[i][j];
//             }
//         }
//             cout << endl;
//     }

//     return 0;
// }

/////////////////////////////// 11.//////////////////////////////

// int main(int argc, char const *argv[])
// {
//     int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};

//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             if (i <= j)
//             {
//                 cout << arr[i][j];
//             }
//         }
//             cout << endl;
//     }

//     return 0;
// }

/////////////////////////////// 12. /////////////////////////////////

// void swap(int &x, int &y)
// {
//     int temp;
//     temp = x;
//     x = y;
//     y = temp;
// }
// int main()
// {
//     int a, b;
//     cout << "Enter the value of a: ";
//     cin >> a;
//     cout << "Enter the value of b: ";
//     cin >> b;
//     cout << endl
//          << "Before swapping: ";
//     cout << "a= " << a << " and b= " << b;
//     swap(a, b);
//     cout << endl
//          << "After swapping: ";
//     cout << "a= " << a << " and b= " << b;
// }

///////////////////////////////// 13. //////////////////////////////

// void swap (int a, int b) {

//     int temp;

//     temp = a;
//     a = b;
//     b = temp;

//     cout << "After Swapping first number is"<<a<<endl;
//     cout<<" After Swapping second number is " << b;
// }

// int main() {

//    int first, second;

//    cout <<"Enter two numbers \n";
//    cin >> first >> second;

//    swap(first,second);

//    cout << " \n After swap function called first number is" << first << "\n and second number is "<< second;

//    return 0;
// }

/////////////////////////////  14. //////////////////////////////

// int fact(int n)
// {

//   if(n > 1)
//     return n * fact(n - 1);
//   else
//     return 1;
// }

// int main(int argc, char const *argv[])
// {
//     int n;
//     cout << "Enter a positive integer: ";
//     cin >> n;

//     cout << "factorial is: " << fact(n);

//     return 0;
// }

////////////////////////////////// 15. /////////////////////////

// int fib(int x)
// {
//     if ((x == 1) || (x == 0))
//     {
//         return (x);
//     }
//     else
//     {
//         return (fib(x - 1) + fib(x - 2));
//     }
// }
// int main()
// {
//     int x, i = 0;
//     cout << "Enter the number of terms of series : ";
//     cin >> x;
//     cout << "\nFibonnaci Series : ";
    
//     while (i < x)
//     {
//         cout << " " << fib(i);
//         i++;
//     }
//     return 0;
// }

////////////////////////////// 16.////////////////////////////////

// struct Employee
// {
//     int EmpID;
//     int Age;
//     int PhNumber;
//     string EmpName;
//     string Fname;
//     string Deptt;
// };

// int main(int argc, char const *argv[])
// {
//     struct Employee e;
//     e.EmpID = 23453;
//     e.Age = 30;
//     e.Deptt = "Dept_A";
//     e.EmpName = "Tony stark";
//     e.Fname = "Harvard stark ";
//     e.PhNumber = 1127238389;

//     cout << "Employee Id: " << e.EmpID << endl;
//     cout << "Employee Age: " <<  e.Age << endl;
//     cout << "Employee Department: " << e.Deptt << endl;
//     cout << "Employee name: " << e.EmpName << endl;
//     cout << "Employee Father Name: " << e.Fname << endl;
//     cout << "Employee Phone Number: " << e.PhNumber;
//     return 0;
// }

//////////////////////////////// 17. ////////////////////////////////

int main()
{

    int ArrayofInt[100];
    int size ;
    int temp;
    // input the unsorted array

    cout << "enter the size of array" << endl;
    cin >> size;
    for (int i = 0; i < size; i++) {
        cout << "Enter at array index " << i << endl;
        cin >> ArrayofInt[i];
    }
    // Printing the unsorted array to user

    cout << "|Unsorted array|" << endl;
    for (int i = 0; i < size; i++)
    {

        cout << ArrayofInt[i] << " ";
    }
    cout << endl;

    // sort array in ascending order using selection sort

    for (int i = 0; i < size - 1; i++)
    {

        for (int j = i + 1; j < size; j++)
        {

            if (ArrayofInt[i] > ArrayofInt[j])
            {
                // swapping with smallest element of array.

                temp = ArrayofInt[j];
                ArrayofInt[j] = ArrayofInt[i];
                ArrayofInt[i] = temp;
            }
        }
    }

    // printing the array in ascending order.

    cout << "|sorted array|" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << ArrayofInt[i] << " ";
    }
    cout << endl;
}

//////////////////////////////// 18. ///////////////////////////////

// int main()
// {
//     int a[50], n, i, j, temp;
//     cout << "Enter the size of array: ";
//     cin >> n;
//     cout << "Enter the array elements: ";
//     for (i = 0; i < n; i++)
//         cin >> a[i];
//     for (i = 1; i < n; i++)
//     {
//         for (j = 0; j < (n - i); j++)
//             if (a[j] > a[j + 1])
//             {
//                 temp = a[j];
//                 a[j] = a[j + 1];
//                 a[j + 1] = temp;
//             }
//     }
//     cout << "Array after bubble sort:";
//     for (i = 0; i < n; i++)
//         cout << " " << a[i];
//     return 0;
// }

////////////////////////////// 19./////////////////////////////

// int main()
// {
//     int arr[50], n, i, j, k, elem, index;
//     cout << "Enter the Size for Array: ";
//     cin >> n;
//     cout << "Enter " <<n << " Array Elements: ";
//     for (i = 0; i < n; i++)
//         cin >> arr[i];
//     for (i = 1; i < n; i++)
//     {
//         elem = arr[i];
//         if (elem < arr[i - 1])
//         {
//             for (j = 0; j <= i; j++)
//             {
//                 if (elem < arr[j])
//                 {
//                     index = j;
//                     for (k = i; k > j; k--)
//                         arr[k] = arr[k - 1];
//                     break;
//                 }
//             }
//         }
//         else
//             continue;
//         arr[index] = elem;
//     }
//     cout << "\nThe New Array (Sorted Array):\n";
//     for (i = 0; i < n; i++)
//         cout << arr[i] << "  ";
//     cout << endl;
//     return 0;
// }

/////////////////////////////////// 20. /////////////////////////////////

// void merge(int array[], int left, int middle, int right)
// {
//     // dividing the given array into two halves
//     int fh = middle - left + 1;
//     int sh = right - middle;
//     // creating two temporary arrays
//     int t1[fh], t2[sh];
//     // copying the data from the two halves into two temporary arrays
//     for (int m = 0; m < fh; m++)
//         t1[m] = array[left + m];
//     for (int n = 0; n < sh; n++)
//         t2[n] = array[middle + 1 + n];
//     // merging the temporary arrays into a single array
//     int a = 0;
//     int b = 0;
//     int c = left;
//     while (a < fh && b < sh)
//     {
//         if (t1[a] <= t2[b])
//         {
//             array[c] = t1[a];
//             a++;
//         }
//         else
//         {
//             array[c] = t2[b];
//             b++;
//         }
//         c++;
//     }
//     while (a < fh)
//     {
//         array[c] = t1[a];
//         a++;
//         c++;
//     }
//     while (b < sh)
//     {
//         array[c] = t2[b];
//         b++;
//         c++;
//     }
// }
// // sorting each of the divided arrays using mergeSort() function
// void mergeSort(int array[], int left, int right)
// {
//     if (left >= right)
//     {
//         return;
//     }
//     int middle = left + (right - left) / 2;
//     mergeSort(array, left, middle);
//     mergeSort(array, middle + 1, right);
//     merge(array, left, middle, right);
// }
// // function to print the resulting array
// void printArray(int Array[], int size)
// {
//     for (int d = 0; d < size; d++)
//         cout << Array[d] << " ";
// }
// // defining the main function
// int main()
// {
//     int array[] = {20, 50, 10, 5, 25, 45};
//     int array_size = sizeof(array) / sizeof(array[0]);
//     cout << "The elements of the input array before sorting are: \n";
//     printArray(array, array_size);
//     mergeSort(array, 0, array_size - 1);
//     cout << "\nThe elements of the input array after sorting are: \n";
//     printArray(array, array_size);
//     return 0;
// }

///////////////////////////////// 21. ///////////////////////////////

// int main()
// {
//     int c = 0;

//     // Empty stack
//     stack<int> mystack;
//     mystack.push(5);
//     mystack.push(13);
//     mystack.push(0);
//     mystack.push(9);
//     mystack.push(4);
//     // stack becomes 5, 13, 0, 9, 4

//     // Counting number of elements in queue
//     while (!mystack.empty())
//     {
//         mystack.pop();
//         c++;
//     }
//     cout << c;
// }

////////////////////////////////////  23. ////////////////////////////////////

// void insert();
// void delete();
// void display();
// int queue_array[MAX];
// int rear = - 1;
// int front = - 1;
// main()
// {
//     int choice;
//     while (1)
//     {
//         printf("1.Insert element to queue \n");
//         printf("2.Delete element from queue \n");
//         printf("3.Display all elements of queue \n");
//         printf("4.Quit \n");
//         printf("Enter your choice : ");
//         scanf("%d", &choice);
//         switch (choice)
//         {
//             case 1:
//             insert();
//             break;
//             case 2:
//             delete();
//             break;
//             case 3:
//             display();
//             break;
//             case 4:
//             exit(1);
//             default:
//             printf("Wrong choice \n");
//         } /* End of switch */
//     } /* End of while */
// } /* End of main() */

// void insert()
// {
//     int add_item;
//     if (rear == MAX - 1)
//     printf("Queue Overflow \n");
//     else
//     {
//         if (front == - 1)
//         /*If queue is initially empty */
//         front = 0;
//         printf("Inset the element in queue : ");
//         scanf("%d", &add_item);
//         rear = rear + 1;
//         queue_array[rear] = add_item;
//     }
// } /* End of insert() */

// void delete()
// {
//     if (front == - 1 || front > rear)
//     {
//         printf("Queue Underflow \n");
//         return ;
//     }
//     else
//     {
//         printf("Element deleted from queue is : %d\n", queue_array[front]);
//         front = front + 1;
//     }
// } /* End of delete() */

// void display()
// {
//     int i;
//     if (front == - 1)
//         printf("Queue is empty \n");
//     else
//     {
//         printf("Queue is : \n");
//         for (i = front; i <= rear; i++)
//             printf("%d ", queue_array[i]);
//         printf("\n");
//     }
// } /* End of display() */

//////////////////////////output ///////////////////////////////////

// 1.Insert element to queue
// 2.Delete element from queue
// 3.Display all elements of queue
// 4.Quit
// Enter your choice : 1
// Inset the element in queue : 10
// 1.Insert element to queue
// 2.Delete element from queue
// 3.Display all elements of queue
// 4.Quit
// Enter your choice : 1
// Inset the element in queue : 15
// 1.Insert element to queue
// 2.Delete element from queue
// 3.Display all elements of queue
// 4.Quit
// Enter your choice : 1
// Inset the element in queue : 20
// 1.Insert element to queue
// 2.Delete element from queue
// 3.Display all elements of queue
// 4.Quit
// Enter your choice : 1
// Inset the element in queue : 30
// 1.Insert element to queue
// 2.Delete element from queue
// 3.Display all elements of queue
// 4.Quit
// Enter your choice : 2
// Element deleted from queue is : 10
// 1.Insert element to queue
// 2.Delete element from queue
// 3.Display all elements of queue
// 4.Quit
// Enter your choice : 3
// Queue is :
// 15 20 30
// 1.Insert element to queue
// 2.Delete element from queue
// 3.Display all elements of queue
// 4.Quit
// Enter your choice : 4

/////////////////////////////////// 24. ///////////////////////////////

// int cqueue[5];
// int front = -1, rear = -1, n = 5;
// void insertCQ(int val)
// {
//     if ((front == 0 && rear == n - 1) || (front == rear + 1))
//     {
//         cout << "Queue Overflow \n";
//         return;
//     }
//     if (front == -1)
//     {
//         front = 0;
//         rear = 0;
//     }
//     else
//     {
//         if (rear == n - 1)
//             rear = 0;
//         else
//             rear = rear + 1;
//     }
//     cqueue[rear] = val;
// }
// void deleteCQ()
// {
//     if (front == -1)
//     {
//         cout << "Queue Underflow\n";
//         return;
//     }
//     cout << "Element deleted from queue is : " << cqueue[front] << endl;
//     if (front == rear)
//     {
//         front = -1;
//         rear = -1;
//     }
//     else
//     {
//         if (front == n - 1)
//             front = 0;
//         else
//             front = front + 1;
//     }
// }
// void displayCQ()
// {
//     int f = front, r = rear;
//     if (front == -1)
//     {
//         cout << "Queue is empty" << endl;
//         return;
//     }
//     cout << "Queue elements are :\n";
//     if (f <= r)
//     {
//         while (f <= r)
//         {
//             cout << cqueue[f] << " ";
//             f++;
//         }
//     }
//     else
//     {
//         while (f <= n - 1)
//         {
//             cout << cqueue[f] << " ";
//             f++;
//         }
//         f = 0;
//         while (f <= r)
//         {
//             cout << cqueue[f] << " ";
//             f++;
//         }
//     }
//     cout << endl;
// }
// int main()
// {
//     int ch, val;
//     cout << "1)Insert\n";
//     cout << "2)Delete\n";
//     cout << "3)Display\n";
//     cout << "4)Exit\n";
//     do
//     {
//         cout << "Enter choice : " << endl;
//         cin >> ch;
//         switch (ch)
//         {
//         case 1:
//             cout << "Input for insertion: " << endl;
//             cin >> val;
//             insertCQ(val);
//             break;
//         case 2:
//             deleteCQ();
//             break;
//         case 3:
//             displayCQ();
//             break;
//         case 4:
//             cout << "Exit\n";
//             break;
//         default:
//             cout << "Incorrect!\n";
//         }
//     } while (ch != 4);
//     return 0;
// }

///////////////////////////////////  25.  ////////////////////////////////

// int main()
// {
//     int arr[10]={2,4,9,6,7,8,3,5,12,1};
//     int i,num, index;

//     cout << "\nEnter a Number to Search: ";
//     cin >> num;
//     for (i = 0; i < 10; i++)
//     {
//         if (arr[i] == num)
//         {
//             index = i;
//             break;
//         }
//     }
//     cout << "\nFound at Index No." << index;
//     cout << endl;
//     return 0;
// }

//////////////////////////////////////  26. ////////////////////////////////////

// int binarySearch(int arr[], int size, int key)
// {
//     int start = 0;
//     int end = size - 1;
//     int mid = (start + end) / 2;
//     while (start <= end)
//     {
//         if (arr[mid] == key)

//         {
//             return mid;
//         }

//         if (key > arr[mid])
//         {
//             start = mid + 1;
//         }
//         else
//         {
//             end = mid - 1;
//         }
//         mid = (start + end) / 2;
//     }
//     return -1;
// }
// int main(int argc, char const *argv[])
// {
//     int array[7] = {3, 4, 1, 5, 6, 7, 8};
    

//     cout<<" Index of 5 is "<<binarySearch(array,7,5);
//     return 0;
// }


 