#include <iostream>

using namespace std;

/////////////////////////////////  1. ///////////////////////////////////////

// int main()
// {
//     {
//         cout << "the size of int:   " << sizeof(int) << " bytes\n ";
//         cout << "the size of float: " << sizeof(float) << " bytes\n ";
//         cout << "the size of double: " << sizeof(double) << " bytes \n";
//         cout << "the size of char: " << sizeof(char) << " bytes \n";
//     }
//     return 0;
// }

///////////////////////////////////// 2. /////////////////////////////////////

// int main()
// {
//     int temp;
//     int num1 = 5, num2 = 10;

//     temp = num1;
//     num1 = num2;
//     num2 = temp;

//     cout << "After Swapping num1 is " << num1 << endl;
//     cout << "And num2 is " << num2;

//     return 0;
// }

/////////////////////////////////// 3. //////////////////////////////////////////

// int main()
// {
//     int num;
//     cout<<"Input an integer: ";
//     cin>>num;

//     if (num%2==0)
//     {
//         cout<<"Even";
//     }
//     else{
//         cout<<"Odd";
//     }

//     return 0;
// }

///////////////////////////////////// 4. ///////////////////////////////////////

// int main(){
//     char c;
//     cout<<"Input a Character: ";
//     cin>>c;

//     if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u')

//     {
//         cout<<"The character is vowel";
//     }
//     else if (c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
//     {
//         cout<<"The character is vowel";
//     }
//     else
//     {
//         cout<<"The character is consonent";
//     }

// }

/////////////////////////////////////  5. //////////////////////////////////////

// int main()
// {

//     string s = "Iron Man";

//     int length = 0;

//     while (s[length] != 0)
//     {
//         length++;
//     }
//     cout << "the length of the string is "<<length;

//     return 0;

// }

/////////////////////////////////////// 6. ///////////////////////////////////////

// class Avenger
// {
//     public:
//     string Name = "";
//     int Age;
// };

// int main()
// {
//     Avenger ironMan;

//     ironMan.Name = "Tony Stark";
//     ironMan.Age = 30;

//     cout <<ironMan.Name << endl;
//     cout <<ironMan.Age;
//     return 0;
// }

/////////////////////////////////// 7. ////////////////////////////////////

// int sum(int x, int y, int z = 0, int w = 0)
// {
//     return (x + y + z + w);
// }

// // Driver Code
// int main()
// {
//     // Statement 1
//     cout << sum(10, 15) << endl;

//     // Statement 2
//     cout << sum(10, 15, 25) << endl;

//     // Statement 3
//     cout << sum(10, 15, 25, 30) << endl;
//     return 0;
// }

/////////////////////////////////  8. ////////////////////////////////////////

// class Bike
// {
// private:
//     int bike_number;
//     char bike_model[10];

// public:
//     void getdata()
//     {
//         cout << "Enter bike number: ";
//         cin >> bike_number;
//         cout << "\n Enter bike model: ";
//         cin >> bike_model;
//     }
//     void showdata()
//     {
//         cout << "bike number is " << bike_number;
//         cout << "\n bike model is " << bike_model;
//     }
// };
// int main()
// {
//     Bike c1;
//     c1.getdata();
//     c1.showdata();
//     return 0;
// }

/////////////////////////////////// 9. /////////////////////////////////

// class bike
// {
//   private:
//     int bike_number;
//     char bike_model[10];
//   public:
//     void getdata(); //function declaration
//     void showdata();
// };
// // function definition
// void bike::getdata()
//  {
//    cout<<"Enter bike number: "; cin>>bike_number;
//    cout<<"\n Enter bike model: "; cin>>bike_model;
//  }
// void bike::showdata()
//  {
//    cout<<"bike number is "<<bike_number;
//    cout<<"\n bike model is "<<bike_model;
//  }
// // main function starts
// int main()
//  {
//     bike b1;
//     b1.getdata();
//     b1.showdata();
//     return 0;
//  }

///////////////////////////////////// 10./ /////////////////////////////////

// void print(int i) {
//   cout << " Here is int " << i << endl;
// }
// void print(double  f) {
//   cout << " Here is float " << f << endl;
// }
// void print(char const *c) {
//   cout << " Here is char " << c << endl;
// }

// int main() {
//   print(10);
//   print(10.10);
//   print("Ten");
//   return 0;
// }

/////////////////////////////////////// 11. //////////////////////////////////

// int fun()
// {
//   static int count = 0;
//   count++;
//   return count;
// }

// int main()
// {
//   cout<<" "<< fun()<<endl;
//   cout<<" "<< fun();
//   return 0;
// }

/////////////////////////////////////// 12. ////////////////////////////////////////

// class Note
// {
//     // declare a static data member
//     static int num;

// public:
//     // create static member function
//     static int func()
//     {
//         cout << " The value of the num is: " << num << endl;
//     }
// };
// // initialize the static data member using the class name and the scope resolution operator
// int Note ::num = 15;

// int main()
// {
//     // create an object of the class Note
//     Note n;
//     // access static member function using the object
//     n.func();

//     return 0;
// }

////////////////////////////////////// 13. ////////////////////////////////

// int main()
// {

//     double n;
//     int arr[] = {55,66,55,55,66};
//     double sum = 0, avg;
    
//     n = sizeof(arr) / sizeof(arr[0]);

//     for (int  i = 0; i < n; i++)
//     {
//         sum += arr[i];
//         avg = sum / n;
//     }
//     cout << "average of numbers: " << avg;
//     return 0;
// }

/////////////////////////////////// 14. //////////////////////////////////////

// int largest(int arr[], int n)
// {
//     int i;
//     int max = arr[0];

//     for (i = 1; i < n; i++)
//         if (arr[i] > max)
//             max = arr[i];

//     return max;
// }

// int main()
// {
//     int arr[] = {10, 324, 45, 90, 9808};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     cout << "Largest in given array is "
//          << largest(arr, n);
//     return 0;
// }

//////////////////////////////////  15. ///////////////////////////////

// int main()
// {
//     int arr[5] = {5, 2, 9, 4, 1};
//     int *ptr = &arr[2];
//     cout << "The value in the second index of the array is: " << *ptr;
//     return 0;
// }

///////////////////////////////// 16. ///////////////////////////////////

int main()
{
    char str[100] = "I Am Iron Man";
    char c = 'I';
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == c)
            count++;
    }
    cout << "Frequency of alphabet " << c << " in the string is " << count;
    return 0;
}