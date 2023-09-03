#include <iostream>
using namespace std;

//*************Multilevel Inheritance***********
// A-B-C ie. from A ,B is created , From B ,C is created

// class Students
// {
// protected:
//   int roll_number;

// public:
//   void set_roll_number(int);
//   void get_roll_number(void);
// };

// void Students ::set_roll_number(int r)
// {
//   roll_number = r;
// }

// void Students ::get_roll_number()
// {
//   cout << "The roll number is " << roll_number << endl;
// }

// class Exam : public Students
// {
// protected:
//   float maths;
//   float physics;

// public:
//   void set_marks(float, float);
//   void get_marks(void);
// };
// void Exam ::set_marks(float m1, float m2)
// {
//   maths = m1;
//   physics = m2;
// }
// void Exam ::get_marks()
// {
//   cout << "The marks obtained in MATHS are: " << maths << endl;
//   cout << "The marks obtained in PHYSICS are: " << physics << endl;
// }
// class Result : public Exam
// {
//   float percentage;

// public:
//   void display_results()
//   {
//     get_roll_number();
//     get_marks();

//     cout << "Your result is " << (maths + physics) / 2 << endl;
//   }
// };
// int main()
// {
//   Result AKSHAY;
//   AKSHAY.set_roll_number(19131001);
//   AKSHAY.set_marks(94.0, 97.0);
//   AKSHAY.display_results();
//   return 0;
// }

/* Notes:
   If we are inheriting B from A and C from B: [ A---->B----->C ]
  1- A is the base class for B and B is the base class for c
  2- A--->B---->C is called Inheritance Path
  */