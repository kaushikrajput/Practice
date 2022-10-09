#include<iostream>
using namespace std;

class book {
  char title[30];
  float price;
  public:
     void getdata(char [],float); II declaration
     void putdata()//definition inside the class {
     cout<<"\nTitle of Book: "<<title;
     cout<<"\nPrice of Book: "<<price;
} ;
inline void book ::getdata (char a [],float b) {
  body of the function
}