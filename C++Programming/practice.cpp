#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

// int substraction(int a, int b)
// {
//   int c = (a - b);
//   return c;
// }
// int a = 30;
// int main(){

// float expenditure, Discount;
// cout<<"Enter the total value of your purchasing "<<endl;
// cin>> expenditure;

// if ((expenditure >= 2000) & (expenditure<3000))
// {
//   Discount  = (expenditure *(0.10));
//   cout << "You are eligible for 10% Discount"<< endl;
//   cout << " Pay an amount of " << expenditure - Discount<< endl;
// }
// if ((expenditure>=3000) &(expenditure<=5000))
// {
//   Discount= (expenditure*0.15);
//   cout<<"You are eligible for 15% discount"<<endl;
//   cout<<"Pay an amount of "<<expenditure-Discount*0.15<<endl;

// }
// else if (expenditure>5000)
// {
//   Discount=(expenditure*.25);
//   cout<<"You are eligible for 25% discount"<<endl;
//   cout<<"Pay an amount of "<<expenditure-Discount<<endl;
// }

// else
// {
//   cout << "You are not eligible for any discount " << endl;
// }
// cout<<"Done successfully"<<endl;

// int length,breath;
// cout<<"Enter the value of length"<<endl;
// cin>>length;
// cout<<"Enter the value of breath"<<endl;
// cin>>breath;
//  if (length==breath)
//  {
//  cout<<"It is a square"<<endl;

//  }
//  else{
//   cout<<"It is a rectangle"<<endl;
//  }
//  cout<<"Done "<<endl;

// int a,b;
// cout<<"Enter the value of a "<<endl;
// cin>>a;
// cout<<"Enter the value of b "<<endl;
// cin>>b;
// if (a>b)
// {
//   cout<<a<<" is greater than "<<b<<endl;

// }
// else{
//   cout<<b<<" is greater than "<<a<<endl;
// }

// int Quantity, price;
// cout << "Enter the quantity number" << endl;
// cin >> Quantity;
// price = Quantity * 100;
// if (price >= 1000)
// {

//   cout << "You are eligible for 10% discount" << endl;
//   cout << "You pay " << price - (price * .10) << endl;
// }

// else
// {
//   cout << "Total cost is " << price << endl;
// }

// int Salary , Bonus,service;
// cout<<"Enter you salary "<<endl;
// cin>>Salary;
// cout<<"Enter year of service"<<endl;
// cin>>service;

// if ((service> 5) )
// {  Bonus=Salary*0.05;
//   cout<<"Your bonus is "<<Bonus<<endl;
// }
// else{
//   cout<<"Your salary is "<<Salary<<endl;
// }

// int mark;
// cout << "Enter your marks" << endl;
// cin >> mark;
// if (mark >= 80)
// {
//   cout << "Your mark is " << mark << " Your grade is A" << endl;
// }
// else if (mark >= 60 && mark < 80)
// {
//   cout << "Your marks is " << mark << " Your grade is B" << endl;
// }
// else if (mark >= 50 && mark < 60)
// {
//   cout << "Your marks is " << mark << " Your grade is c" << endl;
// }
// else if (mark >= 45 && mark < 50)
// {
//   cout << "Your marks is " << mark << " Your grade is D" << endl;
// }
// else if (mark >= 25 && mark < 45)
// {
//   cout << "Your marks is " << mark << " Your grade is E" << endl;
// }
// else
// {
//   cout << "Your marks is " << mark << " your garde is F" << endl;
// }

// int a, b, c;
// cout << "Enter your age " << endl;
// cin >> a >> b >> c;
// if (a >= b && a >= c)
// {
//   cout << "a is older  " << endl;
// }
// else if (b >= c && b >= a)
// {
//   cout << "b is older " << endl;
// }
// else
// {
//   cout << " c is older" << endl;
// }

// if (a <= b && a <= c)
// {
//   cout << "a is younger " << endl;
// }
// else if (b <= c && b <= a)
// {
//   cout << "b is younger " << endl;
// }
// else
// {
//   cout << " c is younger" << endl;
// }

// ********Absolute value ******
//   int x;
//   cout<<"Enter a number "<<endl;
//   cin>>x;
//   if (x<0)
//   {
//     x= x*(-1);
//   }

// cout<<"Absolute value is "<<x<<endl;

// int classesHeld, classesAttended;
// cout<<"Enter the number of classes held "<<endl;
// cin>>classesHeld;
// cout<<"Enter the number of classes attained"<<endl;
// cin>>classesAttended;
//  double percentageAttended=(static_cast<double>(classesAttended)/classesHeld)*100;
//  cout<<"Percentage of class attained "<<percentageAttended <<"%"<<endl;
//  if(percentageAttended >=75 ){
//   cout<<"You are eligible to sit in exam "<<endl;
//  }
//  else{
//   cout<<"You are not eligible to sit in exam"<<endl;
//  }

// int age;
// char sex, Marital_status;
// cout << "Enter the value of age" << endl;
// cin >> age;
// cout << "Enter the value of sex " << endl;
// cin >> sex;
// cout << "Enter the value of Marital_status" << endl;
// cin >> Marital_status;
// if (sex == 'F')
// {
//   cout << "You will work only in urban areas" << endl;
// }
// else if (sex == 'M')
// {
//   if (age >= 20 and age <= 40)
//   {
//     cout << "You will work anywhere" << endl;
//   }
//   else if (age > 40 and age <= 60)
//   {
//     cout << "You will work only in urban areas" << endl;
//   }
//   else
//   {
//     cout << "ERROR" << endl;
//   }
// }
// else
// {
//   cout << "ERROR" << endl;
// }

// int num ,reversed =0;
// cout<<"Enter a 4 digit number: "<<endl;
// cin>>num;

// //Extracting individual digit and reversing the number

// reversed =(num%10)*1000;
// num /= 10;

// reversed +=(num%10)*100;
// num /= 10;

// reversed +=(num%10)*10;
// num /= 10;
// reversed += num;

// cout<<"The number with digtal reversed "<<reversed <<endl;

// *************Loops programming******

// for (int i = 1; i <= 10; i++)
// {
//   cout<<i*0.10<<endl;
// }

// int i=1;
// while ( i<=10)
// {
//   cout<<i<<endl;
//   i++;
// }

// int n;
// cout<< "Enter a number"<<endl;
// cin>>n;
// int i=1;
// while (  i <=10)
// {

//   cout<<n<<"*"<<i<<"="<<(n*i)<<endl;
//   i++;
// }

// for (int i = 0; i < 5; i++)
// {cout<<"will i get job "<<endl;
// }
// int num, sum;
// sum = 0;
// cout << "Enter a positive integer " << endl;
// cin >> num;
// for (int i = 1; i <= num; ++i)
// {
//   sum += i;
// }

// cout << "sum " << sum << endl;

// int n;
// cout << "Enter the max no" << endl;
// cin >> n;

// cout << "Even number up to " << n << "are" << endl;
// for (int i = 5; i <= n; i +=5)
// {
//   cout << i << " " << endl;
// }

// for (int i = 0; i <=10; i++)
// {
//   cout<<i*2<<endl;
// }

//  int a=78;
//  cout<<"the value of a is"<<a<<endl;
//  cout<<"the value of a is"<<::a<<endl;

//  int a=56;
//  int &b=a;
//  int &c=b;
//  int &g=c;
//  int &l=g;
//  cout<<b<<endl;
//  cout<<a<<endl;
//  cout<<c<<endl;
//  cout<<g<<endl;
//  cout<<l<<endl;

//  int a = 87;
//  cout<<"The value of old a is "<<a<<endl;
//  a=45;
//  cout<<"The value of new a is "<<a<<endl;

//  int a=1, b=11, c=111,d=1111,e=11111, f=111111;
//   // cout<<"The value of a without setw is; "<<a<<endl;
//   // cout<<"The value of b without setw is; "<<b<<endl;
//   // cout<<"The value of c without setw is; "<<c<<endl;
//   //   // using iomanip make a right justified
//   cout<<"The value of a with setw is; "<<setw(6)<<a<<endl;
//   cout<<"The value of b with setw is; "<<setw(6)<<b<<endl;
//   cout<<"The value of c with setw is; "<<setw(6)<<c<<endl;
//   cout<<"The value of c with setw is; "<<setw(6)<<d<<endl;
//   cout<<"The value of c with setw is; "<<setw(6)<<e<<endl;
//   cout<<"The value of c with setw is; "<<setw(6)<<f<<endl;

// for (int i = 1; i <=12; i++)
// {
//   if (i==7)
//   {
//     break;
//   }
//   cout<<i<<endl;
// }

// int a=7;
// int* b=&a;
// int**c=&b;

// cout<<"The value of a is"<<&a<<endl;
// cout<<"The value of a is"<<b<<endl;
// cout<<"The value of a is"<<&b<<endl;
// cout<<"The value of a is"<<c<<endl;

// int f=35;
// int*d=&f;
// cout<<f<<endl;
// cout<<&f<<endl;
// // cout<<d<<endl;

// int mathematics[9]={87,98,87,65,59,94,92,49,76};
// cout<<"The marks of mathematics is "<<mathematics[0]<<endl;
// cout<<"The marks of mathematics is "<<mathematics[1]<<endl;
// mathematics[7]=100;
// cout<<"The marks of mathematics is "<<mathematics[2]<<endl;
// cout<<"The marks of mathematics is "<<mathematics[3]<<endl;
// cout<<"The marks of mathematics is "<<mathematics[4]<<endl;
// cout<<"The marks of mathematics is "<<mathematics[5]<<endl;
// cout<<"The marks of mathematics is "<<mathematics[6]<<endl;
// cout<<"The marks of mathematics is "<<mathematics[7]<<endl;
// cout<<"The marks of mathematics is "<<mathematics[8]<<endl;
// int mathematics[7]={65,76,78,78,98,83,99};
// for (int i = 1; i <=10; i++)
// { int mathematics[10]={65,76,78,78,98,83,99,66,87,90};
//   cout<<"Roll number "<<i<< " got "<<mathematics[i]<<" Marks in Mathematics"<<endl;
// }
// pointers is a data types which holds the data types of other data types.

// int marks[11]={12,14,15,18,19,30,29,28,25,27,23};
// for (int i = 1; i <=10; i++)
// {
//   cout<<" Roll no "<<i<<" got " <<marks[i]<<endl;
// }

// int marks[6]={63,50,80,79,72,45};
//  int i=0;
// while (marks[6]<6)
// {
//   cout<<" Roll no "<<i<<" got "<<marks[i]<<endl;
//   i++;
// }

// struct Hostel
// {
//   int Roomno;
//   char favchar;
//   float no;
// };
// struct Hostel Akshay;
// {
//   Akshay.Roomno = 204;
//   Akshay.favchar = 'P';
//   Akshay.no = 4;

//   cout << "Akshay Your room no is " << Akshay.Roomno << endl;
//   cout << "Akshay Your favchar  is " << Akshay.favchar << endl;
//   cout << "Akshay Your no is " << Akshay.no << endl;
//   cout << endl;
//   cout << endl;
// };

// struct Hostel Amit;
// {

//   Amit.Roomno = 205;
//   Amit.favchar = 'B';
//   Amit.no = 7;

//   cout << "Amit Your room no is " << Amit.Roomno << endl;
//   cout << "Amit Your favchar  is " << Amit.favchar << endl;
//   cout << "Amit Your no is " << Amit.no << endl;
//   cout << endl;
//   cout << endl;
// };

// struct Hostel Ram;
// {
//   Ram.Roomno = 207;
//   Ram.favchar = 'S';
//   Ram.no = 6;

//   cout << "Ram your room no is " << Ram.Roomno << endl;
//   cout << "Ram your favchar no is " << Ram.favchar << endl;
//   cout << "Ram your  no is " << Ram.no << endl;
//   cout << endl;
//   cout << endl;
// };

// int num1, num2;
// cout<<"Enter the num1 "<<endl;
// cin>>num1;
// cout<<"enter the num2 "<<endl;
// cin>>num2;
// cout<<"The substraction  of num1 and num2 is "<<substraction(num1, num2)<<endl;
// cout<<"Done"<<endl;

// int multiplication(int, int );
// int main(){
//   int num1, num2;
//   cout<<" Enter the num1 "<<endl;
//   cin>>num1;
//   cout<<" Enter the num2 "<<endl;
//   cin>>num2;

//   cout<<"the multilication of num1 and num2 is "<<multiplication(num1, num2)<<endl;

//   return 0;
// }
//   int multiplication(int a, int b){
//   int c = a*b;
//     return c;

//   }

// ***************Use of void g() in C++**************

// void g();
// int main(){

//  g();
//   return 0;
// }
//  void g(){
//  cout<<"This is the use of void ie. if we want to execute code outside the main() "<<endl;
//  }

// void swapPointer(int *a, int *b){

//   int temp=*a;
//   *a=*b;
//   *b=temp;
// }
// int main(){

//   int a, b;
//   cout<<"Enter the number a "<<endl;
//   cin>>a;
//   cout<<"Enter the number b "<<endl;
//   cin>>b;

//   cout<<"The value of a is "<<a<<" And the value of b is "<<b<<endl;
//   swapPointer(&a, &b);
//   cout<<"The value of a is "<<a<<" And the value of b is "<<b<<endl;

//   return 0;
// }

// void swapRefrencevarible( int &a,int &b){
// int temp=a;
// a=b;
// b=temp;

// }
// int main(){
//  int a,b;
//  cout<<"Enter the value of a "<<endl;
//  cin>>a;
//  cout<<"Enter the value of b "<<endl;
//  cin>>b;

//  cout<<"The value of a is "<<a<<" and the value of b is "<<b<<endl;
//    swapRefrencevarible(a ,b);
//    cout<<"The value of a is "<<a<<" and teh value of b is "<<b<<endl;

//   return 0;
// }

// Swapping of variable two ways
// 1 ways by using swapPointer

// int swapPointer(int *a, int *b)
// {
//   int temp = *a;
//   *a = *b;
//   *b = temp;
// }
// int main()
// {
//   int a, b;
//   cout << "Enter the value of a " << endl;
//   cin >> a;
//   cout << "Enter the value of b " << endl;
//   cin >> b;
//  cout<<"The value of a is "<<a<<" and the value of b is "<<b<<endl;
//       swapPointer(&a,&b);
//  cout<<"The value of a is "<<a<<" and the value of b is "<<b<<endl;
//   return 0;
// }

// second way by using refrence

// void sawpReferenceVariable(int &a,  int &b){
//     int temp= a;
//     a =b;
//     b=temp;

// }
//   int main(){
// int a, b;
//   cout << "Enter the value of a " << endl;
//   cin >> a;
//   cout << "Enter the value of b " << endl;
//   cin >> b;
//  cout<<"The value of a is "<<a<<" and the value of b is "<<b<<endl;
//      sawpReferenceVariable(a,b);
//  cout<<"The value of a is "<<a<<" and the value of b is "<<b<<endl;
//   return 0;
// }

// Factoril of a number

//  int main(){
//   int n ,f=1;
//   cin>>n;
//   for (int i = 1; i <=n; i++)
//   {
//    f=f*i;

//   }
//     cout<<"The factorial of no "<<n<<" is "<<f<<endl;
//   return 0;
// }
// int main(){
//   int n;
//   cin>>n;
// for (int i = 1; i <=n; i++)
// {
//   cout<<i<<" X "<<6<<" is "<< i*6<<endl;
// }

// void multi(int a, int b){
//   cout<<"Using with 2 arguments "<<endl;  // 2 is just given to understand.
//   //return a*b;
// }

//  void multi( float a, float  b){
//   cout<<"Using function with two arguments "<<endl;
//   //return a*b;

// }

// int main(){

//  cout<<"The multi of 2 and 3 and is "<<multi(2 , 3 )<<endl;
//  cout<<"The sum of 2 and 9 is "<<multi(2.0 ,9)<<endl;

//   return 0; }

//  void add(int a,int b){
//   cout<<"Sum "<<a+b<<endl;

// }

// void add(double a, double b){
//   cout<<"Sum "<<a+b<<endl;

// }

// int main(){
//   add(10,6);
//   add(4,6);

//    return 0;
//  }

// Function overloading

// void multiplication(int a, int b){
//   cout<<"multiplication "<<a*b<<endl;
// }

// int multiplication(double a, double b){
//   cout<<"multiplication is "<<a+b<<endl;

// }

// int main(){
//  multiplication(20,20);
//  multiplication(20,10);

//   return 0;
// }

//  int multi(int a, int b){
//   return a*b;
// }

// int main(){

//   cout<<"The multiplication is "<<multi(12,12);
// }

// Swapping using pointers

//  int swapPointer(int &a,int &b){
//  int temp=a;
//    a=b;
//     b=temp;

// }
// int main(){
//   int a,b;
//   cout<<"Enter the value of a "<<endl;
//   cin>>a;
//   cout<<"Enter the value of b"<<endl;
//   cin>>b;

//   cout<<"The value of a is "<<a<<" and b is "<<b<<endl;
//     swapPointer(a,b);
//   cout<<"The value of a is "<<a<<" and b is "<<b<<endl;
// }

// int main()
// {
//   char button;
//   cout << "Enteer the button char " << endl;
//   cin >> button;

//   switch (button)
//   {
//   case 'a':
//     cout << "Hellow" << endl;
//     break;
//   case 'b':
//     cout << "how" << endl;
//     break;
//   case 'c':
//     cout << "are" << endl;
//     break;
//   case 'd':
//     cout << "you" << endl;
//     break;
//   case 'e':
//     cout << "i am good" << endl;
//     break;

//   default:
//   cout<<"Not in course"<<endl;
//     break;
//   }

//   return 0;
// }
int main()
{
  // int a,b;
  // cout<<"Enter the numbers "<<endl;
  // cin>>a>>b;

  // char op;
  // cout<<"Enter the operater "<<endl;
  // cin>>op;

  // switch (op)
  // {
  // case '+':
  //   cout<<a+b<<endl;
  //   break;
  // case '-':
  //   cout<<a-b<<endl;
  //   break;
  // case '*':
  //   cout<<a*b<<endl;
  //   break;
  // case '/':
  //   cout<<a/b<<endl;
  //   break;
  // case '%':
  //   cout<<a%b<<endl;
  //   break;

  // default:
  //   break;
  // }

  // char shop;
  // cout<<"Enter the no "<<endl;
  // cin>>shop;

  // switch (shop)
  // {
  // case 'a':
  //    cout<<"product is footware "<<endl;
  //   break;
  // case 'b':
  //    cout<<"product is sweets "<<endl;
  //   break;
  // case 'c':
  //    cout<<"product is books "<<endl;
  //   break;
  // case 'd':
  //    cout<<"product is cloths "<<endl;
  //   break;
  // case 'e':
  //    cout<<"product is utensiles "<<endl;
  //   break;

  // default:
  //   cout<<"not avaible in shop "<<endl;
  //   break;
  // }
  // int a=10;
  // int b;

  // // b=++a;
  // // cout<<a<<" and "<<b<<endl;
  // b=a++;
  // cout<<a<<"and "<<b<<endl;

  // return 0;

  // int i=1;
  // int j=2;
  // int k;
  // //  1   2   1     2     4     3     5     5     4
  //   k=i + j + i++ + j++ + ++j + ++i + ++j + j++ + ++i;
  // cout<<i<<" "<<j<<" "<<k<<endl; //

  //*******Print rectangular shapr stars ********
  //  int row ,col;
  //  cin>>row>>col;
  //   for (int i = 1; i<=row; i++){
  //     for (int j = 1; j <=col; j++)
  //     {
  //       cout<<"* ";
  //     }
  //     cout<<endl;

  //   }

  // Hollow rectangular pattern using loops

  // int row, col;
  // cout<<"Enter the no of row "<<endl;
  // cin>>row>>col;
  // // cout<<"Enter the no of col "<<endl;
  // // cin>> col;
  // for (int i = 1; i <= row; i++)
  // {
  //   for (int j = 1; j <= col; j++)
  //   {
  //     if (i == 1 || i == row || j == 1 || j == col)
  //     {
  //       cout << "* ";
  //     }
  //     else{
  //       cout<<"  ";
  //     }
  //   }
  //   cout<<endl;
  // }

  // print A pattern for rows and coloum

  // int rows,col;
  // cout<<"Enter the no of row "<<endl;
  // cin>>rows;
  // cout<<"Enter the no of col "<<endl;
  // cin>>col;

  // for (int i = 1; i <=rows; i++)
  // {
  //   for (int j = 1; j <=col; j++)
  //   {
  //     cout<<"A ";
  //   }
  //   cout<<endl;
  // }

  // //void rectangular;

  // int rows, col;
  // cout << "Enter the no of row " << endl;
  // cin >> rows;
  // cout << "Enter the no of col " << endl;
  // cin >> col;
  // for (int i = 1; i <= rows; i++)
  // {
  //   for (int j = 1; j <= col; j++)
  //   {
  //     if (i == 1 || i == rows || j == 1 || j == col)
  //     {
  //       cout << "*  ";
  //     }
  //     else if (i == rows / 2 || j == col / 2)
  //     {
  //       cout << "*  ";
  //     }

  //     else
  //     {
  //       cout << "   ";
  //     }
  //   }
  //   cout << endl;
  // }

  //  int n;
  //  cout<<"Enter the no "<<endl;
  //  cin>>n;
  //  for (int i =n; i>=1; i--)
  //  {
  //   for (int j =1; j <=i; j++)
  //   {
  //     cout<<"*  ";
  //   }
  //   cout<<endl;
  //  }

  // int n;
  // cout << "Enter the no " << endl;
  // cin >> n;
  // for (int i = 1; i <= n; i++)
  // {
  //   for (int j = 1; j <= n; j++)
  //   {
  //     if (j <= n - i)
  //     {
  //       cout << "   ";
  //     }
  //     else
  //     {
  //       cout << "*  ";
  //     }
  //   }
  //   cout << endl;
  // }

  // int product_code;
  // int order_amount;

  // cout << "Enter the product_code " << endl;
  // cin >> product_code;

  // cout << "Enter the order_amount " << endl;
  // cin >> order_amount;

  // double discount = 0.0;

  // if (product_code == 1 && order_amount > 1000)
  // {
  //   discount = 0.1;
  // }

  // else if (product_code == 2 && order_amount > 100)
  // {
  //   discount = 0.5;
  // }

  // if (product_code == 3 && order_amount > 500)
  // {
  //   discount = 0.1;
  // }

  // double discountAmoubt = order_amount - (order_amount * discount);
  // cout << "Net Amount need to pay is: Rs. " << discountAmoubt << endl;

  // int unit;
  // int bill;
  // float a, b, c, d;
  // cout << "Enter the units " << endl;
  // cin >> unit;

  // if (unit <= 50)
  // {
  //   a = unit * 0.50;
  //   cout << "Netamount bill is " <<a<< endl;
  // }

  // else if (unit > 50 && unit <= 150)
  // {
  //   b = unit * 0.75;
  //   cout << "Netamount bill is " <<b/100<< endl;
  // }

  // else if (unit > 150 && unit <= 250)
  // {
  //   c = unit * 1.25;
  //   cout << "Netamount bill is " <<c<< endl;
  // }

  // else if (unit > 250)
  // {
  //   d = unit * 1.50;
  //   cout << "Netamount bill is " <<d<< endl;
  // }

  //  int rows, columns;
  //  cout<<"Enter the value of rows and columbns "<<endl;
  //  cin>>rows>>columns;
  //  ;
  //  for (int i = 1;  i<=rows; i++)
  //  {
  //   for (int j = 1; j <=columns; j++)
  //   {
  //     cout<<"* ";
  //   }
  //   cout<<endl;
  //  }

  // int rows, column;
  // cin>>rows,column;
  // for (int i>=; i <=rows; i++)
  // {
  //   /* code */
  // }

  // int row, col;
  // cin >> row;
  //  cin>>col;
  // for (int i = 1; i <= row; i++)
  // {
  //   for (int j = 1; j <= col; j++)
  //   {
  //     if (i == 1 || i == row || j == 1 || j == col)
  //     {
  //       cout << "* ";
  //     }
  //     else if (i == row/2  || j == col/2)
  //     {
  //       cout << "* ";
  //     }
  //     else
  //     {
  //       cout <<"  ";
  //     }
  //   }
  //   cout << endl;
  // }

  // int row, colum;
  // cout << "Enter the no of row " << endl;
  // cin >> row;
  // cout << "Enter the no of colunm " << endl;
  // cin >> colum;

  // for (int i = 1; i <= row; i++)
  // {
  //   for (int j = 1; j <= colum; j++)
  //   {
  //     if (i == 1 || i == row || j == 1 || j == colum)
  //     {
  //       cout << "* ";
  //     }
  //     else
  //     {
  //       cout << "  ";
  //     }
  //   }
  //   cout << endl;
  // }

  // int n;
  // cout << "Enter the no " << endl;
  // cin >> n;
  // for (int i = n; i >= 1; i--)
  // {
  //   for (int j = 1; j <= i; j++)
  //   {
  //     cout<<"* ";
  //   }
  //   cout<<endl;
  // }
  // cout << endl;
  // half pyramid with numbers

  //  int n;
  //  cin>>n;
  //  for (int i = 1; i <=n; i++)
  //  {
  //   for (int j=1; j <=i; j++)
  //   {
  //     cout<<i<<" ";
  //   }cout<<endl;

  //  }
  //  int n;
  //  cin>>n;
  //  for (int i = 1; i <=n; i++)
  //  {
  //   for (int j=1; j <=n; j++)
  //   {
  //     cout<<i<<" ";
  //   }cout<<endl;
  //  }
  // int n;
  // cin>>n;
  // int count=1;
  // for (int i =1; i <=n; i++)
  // {
  //   for (int j= 1; j <=i; j++)
  //   {
  //     cout<<count<<" ";
  //     count++;
  //   }
  //   cout<<endl;
  // }

  // Butterfly using code

  // int n;
  // cin >> n;

  // for (int i = 1; i <= n; i++)
  // {
  //   for (int j = 1; j <= i; j++)
  //   {
  //     cout << "* ";
  //   }
  //   int space = 2 * n - 2 * i;
  //   for (int j = 1; j <= space; j++)
  //   {
  //     cout << "  ";
  //   }
  //   for (int j = 1; j <= i; j++)
  //   {
  //     cout << "* ";
  //   }
  //   cout << endl;
  // }
  // for (int i = n; i >= 1; i--)
  // {
  //   for (int j = i; j >= 1; j--)
  //   {
  //     cout << "* ";
  //   }
  //   int space = 2 * n - 2 * i;
  //   for (int j = space; j >= 1; j--)
  //   {
  //     cout << "  ";
  //   }
  //   for (int j = i; j >= 1; j--)
  //   {
  //     cout << "* ";
  //   }
  //   cout << endl;
  // }
  // int n;
  // cin >> n;
  // bool flag = 0;
  // for (int i = 2; i <= sqrt(n); i++)
  // {
  //   if (n % i == 0)
  //   {
  //     cout << "Non prime " << endl;
  //     flag = 1;
  //     break;
  //   }
  // }
  // if (flag == 0)
  // {
  //   cout << "Prime " << endl;
  // }

  return 0;
}
