#include <iostream>
using namespace std;

//*************Virtual Base class***********
//            Class B
// Class A ---          --- Class D   in this case there is problem when class D is create
//            Class C                 becz it goes into Ambiguity ie . from where get Class A
//                                    or Class B thats why we used virtual base class for B and C
//                                     to protect fron cascading effect

//              Test
//   student----      ----- result
//              sport

// class Student
// {
// protected:
//     int roll_no;

// public:
//     void set_number(int a)
//     {
//         roll_no = a;
//     }
//     void print_number(void)
//     {
//         cout << "Your roll no is " << roll_no << endl;
//     }
// };

// class Test : virtual public Student // virtual we have used here
// {
// protected:
//     float maths, physics;

// public:
//     void set_marks(float m1, float m2)
//     {
//         maths = m1;
//         physics = m2;
//     }
//     void print_marks(void)
//     {
//         cout << "You have obtained" << endl;
//         cout << " Maths: " << maths << endl;
//         cout << " Physics: " << physics << endl;
//     }
// };
// class Sports : virtual public Student // virtual  we have used here
// {
// protected:
//     float score;

// public:
//     void set_score(float sc)
//     {
//         score = sc;
//     }

//     void print_score(void)
//     {
//         cout << "Your PT score is " << score << endl;
//     }
// };
// class Result : public Test, public Sports
// {
// private:
//     float total;

// public:
//     void display(void)
//     {
//         total = maths + physics + score;
//         print_number();
//         print_marks();
//         print_score();
//         cout << "Your tota score is " << total << endl;
//     }
// };

// int main()
// {
//     Result AKSHAY;
//     AKSHAY.set_number(19131001);
//     AKSHAY.set_marks(98, 95);
//     AKSHAY.set_score(9);
//     AKSHAY.display();

//     return 0;
// }


// Virtual used to flow data only one time or to avoide more time flow same data 