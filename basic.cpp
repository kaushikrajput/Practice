#include <iostream>
using namespace std;

// int main(int argc, char const *argv[])

// {
//     cout<<"Hello World\n";

//     return 0;
// }

// //////////////////////////// two numbers add ///////////////////////////////////

// {
//     int amount1 ,amount2,sum;
//     cin>>amount1;
//     cin>>amount2;
//     sum=amount1+amount2;
//     cout<<"sum is "<<sum;
// }

// //////////////////////////// Size of datatypes ////////////////////////////////

// {
//     cout<< "the size of char:   "<<sizeof(int)<<" bytes\n ";
//     cout<< "the size of short:"<<sizeof(float)<<" bytes\n ";
//     cout<<"the size of int:"<<sizeof(double)<<"bytes \n";
//     cout<<"the size of int:"<<sizeof(char)<<"bytes \n";

// }

// ////////////////////////// area of triangle ////////////////////////////////////

// {
//     float area,h,b;
//     cout<<"Enter the height and base of triangle: ";
//     cin>>h>>b;
//     area=1.5*h*b;
//     cout<<"area of triangle is "<<area;
//     return 0;

// }

// //////////////////////// celcius to fahrenheit ///////////////////////////////////

// {
//     float fahrenheit,celcius;
//     cout<<"input the celcius";
//     cin>>celcius;
//     fahrenheit = celcius*9/5+32;
//     cout<<"celcius to fahrenheit :"<<fahrenheit;

// }

// /////////////////////// fahrenheit to celcius //////////////////////////////////

// {
//     float celcius,fahrenheit;
//     cout<<"input the fahrenheit ";
//     cin>>fahrenheit;
//     celcius = (fahrenheit-32)*5/9;
//     cout<<"fahrenheit to celcius : "<<celcius;

// }

// ////////////////////// swapping two numbers //////////////////////////////////

// {
//     int num1,num2,temp;
//     cout<<"Input 1st number :";
//     cin>>num1;
//     cout<<"Input 2nd number :";
//     cin>>num2;
//     temp=num2;
//     num2=num1;
//     num1=temp;
//     cout<<"\nafter swapping 1st number is "<<num1;
//     cout<<"\nafter swapping 2nd number is "<<num2;
// }

///////////////////////// total & averg of 4 no. //////////////////////////////////

// {
//     float n1,n2,n3,n4,total,averg;
//     cout<<"Input first two numbers :";
//     cin>>n1>>n2;
//     cout<<"input last two numbers :";
//     cin>>n3>>n4;
//     total = n1+n2+n3+n4;
//     averg = total/4;
//     cout<<"\nThe total of four numbers is :"<<total;
//     cout<<"\nThe averg of four numbers is :"<<averg;
//     cout<<"\n";
//     return 0;
// }

//////////////////////// check num is +ve,-ve or zero /////////////////////////////

// {
//     int num;
//     cout << "Input the number :";
//     cin >> num;

//     if (num < 0)
//     {
//         cout << "number is negative";
//     }
//     else
//     {
//         if (num == 0)
//         {
//             cout << "number is Zero";
//         }
//         else
//         {
//             cout << "number is positive";
//         }
//     }

//     return 0;
// }

/////////////////////// swapping 2 no. not using 3rd variable /////////////////////////

// {
//     int num1,num2;
//     cout<<"Input 1st number :";
//     cin>>num1;
//     cout<<"Input 2nd number :";
//     cin>>num2;

//     num2=num2+num1;
//     num1=num2-num1;
//     num2=num2-num1;

//     cout<<"\nafter swapping the first number is :"<<num1;
//     cout<<"\nafter swapping the second number is :"<<num2;
//     return 0;

// }

////////////////////////// swapping two number //////////////////

//  {

//     int n1, n2, temp;
//     cout << "Input 1s number : ";
//     cin >> n1;
//     cout << "Input 2nd number : ";
//     cin >> n2;
//     temp = n2;
//     n2 = n1;
//     n1 = temp;
//     cout << "After swapping the first number is : " << n1 << endl;
//     cout << "After swapping the 2nd number is : " << n2 << endl;

//     return 0;
// }

//////////////////////////// size of data types /////////////////////////

// {
//     cout<<"size of data types\n";

//     cout<<"the size of (char) is :          "<<sizeof(char)<<"bytes\n";
//     cout<<"the size of (int) is :           "<<sizeof(int)<<"bytes\n";
//     cout<<"the size of (float) is :         "<<sizeof(float)<<"bytes\n";
//     cout<<"the size of (long) is :          "<<sizeof(long)<<"bytes\n";
//     cout<<"the size of (long long) is :     "<<sizeof(long long)<<"bytes\n";
//     cout<<"the size of (long double) is :   "<<sizeof(long double)<<"bytes\n";
//     cout<<"the size of (bool) is :          "<<sizeof(bool)<<"bytes\n";
// }

// {
//     float volume,r,h;

//     cout<<"Input radius :";
//     cin>>r;
//     cout<<"Input  height :";
//     cin>>h;

//     volume=3.15*r*r*h;

//     cout<<"area of tria: "<<volume;
// }

////////////////////////////// find quotient & remainder ////////////////////////

// {
//    int divisor,dividend,quotient,remainder;

//    cout<<"Input dividend: ";
//    cin>>dividend;

//    cout<<"Input divisor: ";
//    cin>>divisor;

//    quotient=dividend/divisor;
//    remainder=dividend%divisor;

//    cout<<"\nThe quotient of the division: "<<quotient;
//    cout<<"\nThe remainder of the division: "<<remainder;

//    return 0;
// }

///////////////////////////// check +ve or -ve ///////////////////////////////////

// {
//    int n;

//    cout << "Input the number: ";
//    cin >> n;

//    if (n > 0)
//    {
//       cout << "positive\n";
//    }

//    else if (n<0)

//    {
//       cout << "negative\n";
//    }
//    else
//    {
//       cout<<"zero\n";
//    }

//    return 0;
// }

///////////////////////////////////grater, less nd equal //////////////////////////////////

// {
//    int n;

//    cout<<"Input the integer: ";
//    cin>>n;

//    if (n>5)
//    {
//          cout<<"Greater than 5";
//    }else if (n<5)
//    {
//          cout<<"less than 5";
//    }
//    else{
//       cout<<"equal to 5";
//    }

//    return 0;

// }

/////////////////////////////////  max and min //////////////////////////////////////

//        int max(int n1, int n2)
// {

//       {
//          if (n1 > n2)
//        {
//           max = n1;
//           min = n2;
//        }
//        else
//        {
//           max = n2;
//           min = n1;
//        }

//       int main(){ cout << "Input integer: ";
//        cin >> n1 >> n2;
//        return max

//        cout << "max=" << max <<endl;
//        cout << "min=" << min <<endl;

//        return 0;

//     }

//     int add(int a, int b)
// {
//     int c = a + b ;
//     return c;
// }

// int main()
// {
//     int num1, num2;
//     cout<<"enter 1st number"<<endl;
//     cin>>num1;
//     cout<<"enter 2nd number"<<endl;
//     cin>>num2;

//     cout<<"the sum is "<<add(num1, num2);

//     return 0;
// }

int a[30], n;
int main(int argc, char const *argv[])
{
    int i;

    cout << "Enter the size of array: ";
    cin >> n;

    cout << "Enter array index: ";
    for (int i = 0; i < n; i++)

        cin >> a[i];

    selection_Sort();

    cout << "after sleection sort\n";
    for (int i = 0; i < n; i++)
    {
        cout << " " << a[i] << " ";
    }

    return 0;
}
void selection_Sort()
{
    int i, j, min, temp;
    for (int i = 0; i < n; i++)
    {
        min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[min])
            {
                min = j;
            }
            temp = a[i];
            a[i] = a[min];
            a[min] = temp;
        }
    