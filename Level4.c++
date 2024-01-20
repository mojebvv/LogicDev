//*------------------------------------//اللون الازرق للملاحظات هو ملاحظات شخصية //the yellow color is number of task and explain it-----

// //*first task>> print out hellow world // i will do all task by function (:)
// #include <iostream>
// using namespace std;

// void printOuthellowWorld()
// {
//     cout<< "\nhellow world ";
//     cout<<5+5;
// }
// int main ()
// {

// printOuthellowWorld();



//     return 0;
// }


//*second task>> read a neam from function and print out from another function (:)
// #include <iostream>
// #include<string>
// using namespace std;

// string readName ()
// {
//     string name;
//     cout<<"please enter the name\n";
//     cin>>name;
//     return name;
// }
// void printName(string name)
// {
//     cout<<"the name is>>"<<name;

// }
// int main ()
// {
    
// printName(readName());

//     return 0;
// }
//*third task that i check withen the number is even or not //first solution by me
// #include <iostream>
// using namespace std;

// //first that i create a function to read a number
// int readNumber ()
// {
//     int number;
//     cout<<"please enter the number you want to check out that is even or odd\n";
//     cin>>number;
//     return number;
// }
// void checkNUmber (int number)
// {
//     if (number % 2 ==0)
//     {
//         cout<<"the number are even";
//     }

//     else 
//     cout<<"the number is odd";

   
// }

// int main ()
// {
//     checkNUmber(readNumber()); //the implemntation goes first with read then return number that the function readnumber will equal to number i put in the check the number 

//     return 0;
// }
//*third task that i check withen the number is even or not //first solution by abo hdhod way
// #include <iostream>
// using namespace std;

// enum TypeOFNumber {odd=1 , even=2};
//?first that i create a function to read a number
// int readNumber ()
// {
//     int number;
//     cout<<"please enter the number you want to check out that is even or odd\n";
//     cin>>number;
//     return number;
// }
// TypeOFNumber checkNUmber (int number) //why these function from type enum??عشان النتيجه الي ابغاخ تطلع لي من القيم الخاصة  بالenumb
// {
//     int result = number % 2;
//     if (result % 2 ==0)
//     {
//     return TypeOFNumber::even;
//     }

//     else 
//     return TypeOFNumber::odd;
// }

// void printTyperNumber (TypeOFNumber numberType)
// {
//     if (numberType == TypeOFNumber::even)
//     {
//         cout<<"the number is even";
//     }
//     else
//     cout<<"the number is odd";
// }

// int main ()
// {
//     printTyperNumber(checkNUmber(readNumber())); //?الدالة راح تتنفذ من الداخل الى الخارج يعني القراءة ثم التشييك ثم

//?ترتيبك للدوال قبل المين فنكشن مايهم, الي يهم هو ترتيبك اذا جيت تسوي نداء للدالة

//     return 0;
// }

//*fourth task that ask for condition to hire a drive or not
// #include <iostream>
// #include <string>
// using namespace std;

// //first i create a structure to collect the information on one function
// struct drive
// {
//     int age;
//     bool licence;
// };

//?first that i create function to take an age of the drive

// drive readInfo () //why i do function struct type??لان المعلومات تم جمعها بستركتشر وعشان احصل عليها لازم تكون من هذا النوع
// {
//     drive information;
//     cout<<"please enter the age of the driver want to hire>>>\n";
//     cin>>information.age;

//     cout<<"please enter 1 if you licemnce . else you dont have>>>\n";
//      cin>>information.licence;

//     return information;
// }


// void saticCondition (drive info)//ليش المتغير من نوع ستركتشر؟؟؟ لان المعلومات الي بتجي للفنكشن ذا هو من هذا النوع 
// {
//     if (info.age >=21 && info.licence ==1)
//     cout<<"he statisfied the all conditon to hire it\n";
//     else
//     cout<<"the not statis all condition\n";


// }

// int main ()
// {

// saticCondition(readInfo());


//     return 0;
// }


//*fifth task same fourt task لكن هنا الشرط الزيادة هو اذا عندك واسطة ام لا
// #include <iostream>
// using namespace std;

//?first i create structure
// struct driver_information 
// {
//     int age;
//     bool have_licence;
//     bool have_was6h;
// };

 //?second i read from user the information of his drive want to hire //?the function from structure type

// driver_information ReadInfo ()
// {
//     driver_information info; //?you must to create a flag to arrive into the element in structure
    
//       cout<<"please enter the age of the driver want to hire>>>\n";
//      cin>>info.age;

//       cout<<"please enter if you licence or not>>\n";
//       cin>>info.have_licence;

//       cout<<"please enter if you was6h or not>>\n";
//       cin>>info.have_was6h;

//     return info;
// }


// void checkConditioon (driver_information information)
// {
//     if (information.age>=21 && information.have_licence==1 &&information.have_was6h==0)
//     {
//         cout<<"you statisfied all condion, congrats you hire this driver\n";
//     }

//     else
//     cout<<"sorry, this driver its not stais all the condtion";
// }

// int main ()
// {
//     checkConditioon(ReadInfo());

//     return 0;
// }

//*--------------------------------finish of the first five task---------------------




//*--------------------------------start with second gifth task0------------------

//*sixth task//print full name
// #include <iostream>
// #include <string>
// using namespace std;


// //first that i create structure
// struct human_info
// {
//     string first_name;
//     string last_name;
// };

// human_info read_name ()
// {
    
//     human_info student_information;

//     cout<<"please entert the first name of you\n>>>  ";
//     getline(cin,student_information.first_name);


//      cout<<"please entert the last name of you\n>>>  ";
//          getline(cin,student_information.last_name);

     


//          return student_information;

// }

// void printName (human_info student_information ) 
// {
//     bool reverse;
//      cout<<"please entert the way to print your name (1=reverse , 0=unreverse)>>>  ";
//      cin>>reverse;
// //?فائدة الريفيرس انه بعض الدول ممكن تكتب الاسم بشكل معكوس ف أنا صممته البرنام على هيئة انه يكتب بالشكل التقليدي والعكس
//     if (reverse)
//     cout<<"tyour full name is: " << student_information.last_name <<" " << student_information.first_name;
//     else
//         cout<<"tyour full name is: " << student_information.first_name <<" " << student_information.last_name;

// }


// int main ()
// {
    

// printName(read_name());


//     return 0;
// }



//*seventh task//print half number
// #include <iostream>
// using namespace std;

// int readNumber()
// {
//     int number;
//     cout<<"what is your number want to put in? enter the number ?\n ";
//     cin>>number;

//     return number;
// }


// float halfnumber (int number)
// {
//     float half_number= number /2;
//     return (float) half_number;
// }

// void printHalfnumber (int half_number )
// {
//     cout<<"the half of the number we put in  >>>""is:" <<half_number;
// }
// int main ()
// {
//     printHalfnumber(halfnumber(readNumber())); //1-read , 2-calc the half of number , 3-print out the calculation
//     return 0;
// }


// //*eight task // mark pass // these solution solve by my way
// #include <iostream>
// using namespace std;

// int readMark ()
// {
//     int mark;

//     cout<<"please enter the mark of you course to check wethen is pass or not\n";
//     cin>>mark;
//     return mark;
// }

// bool checkMark (int mark)
// {
//     if (mark>=60)
//     return 1;
//     else 
//       return 0;
// }

// void printThetest(int mark)
// {
// cout<<"depend on the mark you are: " <<mark;
// }

// int main ()
// {
//     printThetest(checkMark(readMark()));


//     return 0;
// }

//*eight task // mark pass // these solution solve by abo hahdhod wayy
// #include <iostream>
// using namespace std;

// enum checkmark {pass =1, unpass=2};
// int readMark ()
// {
//     int mark;

//     cout<<"please enter the mark of you course to check wethen is pass or not\n";
//     cin>>mark;
//     return mark;
// }

// checkmark marktest (int mark)
// {
//     //way to arrive into enum type
//     if (mark>60) //هنا راح يجي ويشيك الرقم وراح يرجع لي يا صفر او واحد , 
//     return checkmark::pass;
//     else 
//       return checkmark::unpass;
// }

// void printThetest(int mark)
// {
// if(marktest(mark) == checkmark::pass)
// cout<<"depend on mark you are pass\n";

// else
// cout<<"depend on mark you are unpass\n";

// }

// int main ()
// {
//     // printThetest(marktest(readMark()));  >>>>its not correct
//     printThetest(readMark()); //why i do function from enum type?? because to use the enum type and compare with it!



//     return 0;
// }


//*nineth task // sum mark  // these solution solve by 
// #include <iostream>
// using namespace std;

// void readNumber (int &num1 , int &num2 , int &num3) //its by refernce because i want to make an operation
// {
//     cout<<"please enter the first number : " ;
//     cin>>num1;

//       cout<<"please enter the second number : " ;
//     cin>>num2;

//       cout<<"please enter the third number : " ;
//     cin>>num3;
// }

// int sumNumber (int num1 , int num2 , int num3)
// {
//     int sum = num1 + num2 + num3;
//     return sum;
// }

// void printSum (int sum)
// {
//     cout<<"the sum of all number are >>" << sum;
// }



// int main ()
// {
//     int n1 , n2 , n3;
//     readNumber(n1 , n2 , n3);
//     printSum(sumNumber(n1,n2,n3));
//     return 0;

// }

//*tenth task//avg of 3 student//by first way
// #include <iostream>
// using namespace std;

// void readNumber (int &num1 , int &num2 , int &num3) //its by refernce because i want to make an operation
// {
//     cout<<"please enter the first number : " ;
//     cin>>num1;

//       cout<<"please enter the second number : " ;
//     cin>>num2;

//       cout<<"please enter the third number : " ;
//     cin>>num3;
// }

// int sumNumber (int num1 , int num2 , int num3)
// {
//     int sum = num1 + num2 + num3;
//     return sum;
// }

// void printavg (int sum)
// {
//     cout<<"the average of all number are >>" << sum/3;
// }



// int main ()
// {
//     int n1 , n2 , n3;
//     readNumber(n1 , n2 , n3);
//     printavg(sumNumber(n1,n2,n3));
//     return 0;

// }
//* task 10 but in another way to solve
// #include <iostream>
// using namespace std;

// void readNumber (int &num1 , int &num2 , int &num3) //its by refernce because i want to make an operation
// {
//     cout<<"please enter the first number : " ;
//     cin>>num1;

//       cout<<"please enter the second number : " ;
//     cin>>num2;

//       cout<<"please enter the third number : " ;
//     cin>>num3;
// }

// int sumNumber (int num1 , int num2 , int num3)
// {
//     int sum = num1 + num2 + num3;
//     return sum;
// }

// float calcAverage (int num1 , int num2 , int num3)
// {
//  return (float) sumNumber(num1 , num2 , num3)/3;
// }

// void printavg (float avg)
// {
//     cout<<"the average of all number are >>" << avg;
// }



// int main ()
// {
//     int n1 , n2 , n3;
//     readNumber(n1 , n2 , n3);
//     printavg(calcAverage(n1,n2,n3));
//     return 0;

// }



//* task 11 but // is avg passor fail
// #include <iostream>
// using namespace std;
// enum testAvg {pass=1 , fail=0};

// //? first you must to read from a user a number
// void readNumber (int &num1 , int &num2 , int &num3) //its by refernce because i want to make an operation
// {
//     cout<<"please enter the first number : " ;
//     cin>>num1;

//       cout<<"please enter the second number : " ;
//     cin>>num2;

//       cout<<"please enter the third number : " ;
//     cin>>num3;
// }


// //? then you must to add toegother to sum it
// int sumNumber (int num1 , int num2 , int num3)
// {
//     int sum = num1 + num2 + num3;
//     return sum;
// }

// //? you must to calc avg then you can test about the condition of pass or not//

// float calcAverage (int num1 , int num2 , int num3)
// {
  
//   return (float)sumNumber(num1,num2,num3)/3;
// }

// testAvg avgTest (float avg)
// {
  
//   if (avg >60) //أنا تسائلت قيمة الافرج من وين حت؟؟ الاجابة هي انها جت من بعد ماسويت نداء لهذي الدالة عند الطباعة وخزنت فيها قيمة حسبة الافرج
//   return testAvg::pass;
//   else
//   return testAvg::fail;
// }




// void printavg (float avg)
// {
//   cout<<"your avgerage is: "<<avg <<" and depend ont this we are"<<endl;
//     if (avgTest(avg) == testAvg::pass) //?كاني قلتلته بعد نداء دالة اختبار الافرج رح شيك على الافرج لو رحع هذي القيمة الي انا مقارنها هنا فهو ناجح غير ذلك فهو راسب
//     cout<<"congrats you pass the teset";
//     else
//     cout<<"sorry you fail to pass the test";

// }



// int main ()
// {
//     int n1 , n2 , n3;
//     readNumber(n1 , n2 , n3);
//     printavg(calcAverage(n1,n2,n3));
//     return 0;

// }


//*task11//figure out the max two number
// #include <iostream>
// using namespace std;

 //first read the nmber frum user

// int readNumber (int &number1 , int &number2)
// {

//   cout<<"what the value of first number ? ";
//   cin>>number1;

//   cout<<"what the value of second number ? ";
//   cin>>number2;

// }


// int figureMax (int number1 , int number2)
// {
//   int max=0;

//   if (number1 > number2)
//   max=number1;

//   else
//   max=number2;

//   return max;
// }

// void printMax (int max)
// {
//   cout<<"the max value = " <<max;
// }

// int main ()
// {
//   int num1 , num2;
//   readNumber(num1,num2);
//   printMax(figureMax(num1,num2));

//   return 0;
// }

//*task13 // max of three number
// #include <iostream>
// using namespace std;

//  //?first read the nmber frum user

// int readNumber (int &number1 , int &number2,int &number3)
// {

//   cout<<"what the value of first number ? ";
//   cin>>number1;

//   cout<<"what the value of second number ? ";
//   cin>>number2;

//   cout<<"what the value of third number ? ";
//   cin>>number3;

// }


// int figureMax (int number1 , int number2,int number3)
// {
//   int max=0;

//   if (number1 > number2)
//   max=number1;

//   else if (number1 > number3)
//   max=number1;

//   else if (number2 >number3)
//   max=number2;

// else
// max=number3;
//   return max;
// }

// void printMax (int max)
// {
//   cout<<"the max value = " <<max;
// }

// int main ()
// {
//   int num1 , num2 , num3;
//   readNumber(num1,num2,num3);
//   printMax(figureMax(num1,num2,num3));

//   return 0;
// }





// //*task14//swap two number
// #include <iostream>
// using namespace std;


// //? first it must to read from user the two number we want to swap it
// int readNumber (int &num1 , int &num2)
// {
//   cout<<"value of num 1 ??" ;
//   cin >>num1;

//    cout<<"value of num 2 ??" ;
//   cin >>num2;

//   return num1 ,num2;

// }

// int swapNumber (int &num1 , int &num2) //? why here i put variable by reference??? لان ابغى احدث تغيير هنا ايضا وليس بدالة القراءة فقط !
// {
//   int bocket; //these a bocket to make the swapping function succsefuly
//   bocket =num1;
//   num1=num2;
//   num2=bocket;

//   return num1 , num2;

// }

// void printSwap (int num1 , int num2)
// {
//   cout<<"the number 1 after swap is =  " <<num1<<endl;
//   cout<<"the numner 2 after swap is =  " <<num2<<endl;
// }

// int main ()
// {
//   int num1 , num2;
//   readNumber(num1,num2);
//   cout<< "the numbers  before swap it , the number 1= " <<num1 << " \nand the number 2 = " <<num2 << endl;
//   cout<<"--------------------\n";
//   swapNumber(num1,num2);
//   printSwap(num1,num2);

//   return 0;
// }





// //*task15 //rectangle area
// #include <iostream>
// using namespace std;

// int readHandW (int &hieght , int &weight)
// {
//   cout<<"size of heigth??" ;
//   cin >>hieght;

//    cout<<"size of weight??" ;
//   cin >>weight;

//   return hieght ,weight;

// }

// int calcArea (int hieght , int weight )
// {
//   int area;

//   area= hieght * weight;
//   return area;
// }

// void printArea (int area)
// {
//   cout << " the area of rectangle is : " <<area;
// }



// int main ()
// {
// int h , w;
// readHandW(h,w);
// printArea(calcArea(h,w));

//   return 0;
// }



//*task16//rectangle arae by side
// #include <iostream>
// #include<cmath>
// using namespace std;

// int readHandW (int &hieght , int &weight)
// {
//   cout<<"size of heigth??" ;
//   cin >>hieght;

//    cout<<"size of weight??" ;
//   cin >>weight;

//   return hieght ,weight;

// }

// int calcArea (int hieght , int weight )
// {
//   int area;
//   area= hieght * sqrt(pow(weight,2) - pow(hieght,2));
//   return area;
// }

// void printArea (int area)
// {
//   cout << " the area of rectangle is : " <<area;
// }



// int main ()
// {
// int h , w;
// readHandW(h,w);
// printArea(calcArea(h,w));

//   return 0;
// }



//*task17//triangle area
// #include <iostream>
// using namespace std;

// int readHandW (int &hieght , int &weight)
// {
//   cout<<"size of heigth??" ;
//   cin >>hieght;

//    cout<<"size of weight??" ;
//   cin >>weight;

//   return hieght ,weight;

// }

// int calcRectangelArea (int hieght , int weight )
// {
//   int area;
//   area= 0.5 * (hieght * weight); //?>>>>>>> 1/2 * a * b
//   return area;
// }

// void printArea (int area)
// {
//   cout << " the area of rectangle is : " <<area;
// }



// int main ()
// {
// int h , w;
// readHandW(h,w);
// printArea(calcRectangelArea(h,w));

//   return 0;
// }


// //*task18//
// #include <iostream>
// #include<cmath>
// using namespace std;

// float readRadius (float &r )
// {
//   cout<<"size of radius??" ;
//   cin >>r;
//   return r;

// }

// float calcCirclengelArea (float r )
// {
//   float area;
//   area=  pow(r,2) * 3.14;
//   return area;
// }

// void printArea (float area)
// {
//   cout << " the area of circle is : " <<area;
// }



// int main ()
// {
// float r ;
//  readRadius (r);
// printArea(calcCirclengelArea(r));

//   return 0;
// }



// //*task19//circle area by diameter
// #include <iostream>
// #include<cmath>
// using namespace std;

// float readRadius (float &r )
// {
//   cout<<"size of radius??" ;
//   cin >>r;
//   return r;

// }

// float calcCirclengelArea (float r )
// {
//   float area;
//   area=  (3.14 *pow(r,2))/4;
//   return area;
// }

// void printArea (float area)
// {
//   cout << " the area of circle is : " <<area;
// }



// int main ()
// {
// float r ;
//  readRadius (r);
// printArea(calcCirclengelArea(r));

//   return 0;
// }








//*task20//circle area inscribe in square
// #include <iostream>
// #include<cmath>
// using namespace std;

// float readRadius (float &r )
// {
//   cout<<"size of circle??" ;
//   cin >>r;
//   return r;

// }

// float calcCircleInscribel (float a )
// {
//   float area;
//   area=  (3.14 * pow(a,2))/4;
//   return area;
// }

// void printArea (float area)
// {
//   cout << " the area of circle is : " <<area;
// }



// int main ()
// {
// float a ;
//  readRadius (a);
// printArea(calcCircleInscribel(a));

//   return 0;
// }




//*task21//circle area along circumfrance
// #include <iostream>
// #include<cmath>
// using namespace std;

// float readRadius (float &l )
// {
//   cout<<"size of circle??" ;
//   cin >>l;
//   return l;

// }

// float calcCirclecircumfance (float l )
// {
//   float area;
//   area= (pow(l,2))/(4*3.14); //?مهم جدا انك تهتم للاقواس, حطيت اقواس عند المقام عشان ينفذ البسط اولا
//   return area;
// }

// void printArea (float area)
// {
//   cout << " the area of circle along circumfance is : " <<area;
// }



// int main ()
// {
// float a ;
//  readRadius (a);
// printArea(calcCirclecircumfance(a));

//   return 0;
// }







//*task22//
// #include <iostream>
// #include<cmath>
// using namespace std;

// float readRadius (float &a , float &b )
// {
//   cout<<"size of a ?? "<<endl;
//   cin>>a;

//    cout<<"size of b ?? "<<endl;
//   cin>>b;
//   return a , b;

// }

// float calcCirclecircumfance (float a , float b )
// {
//   float area1 , area2;
//   area1= (3.14*pow(b,2))/4 ; //?مهم جدا انك تهتم للاقواس, حطيت اقواس عند المقام عشان ينفذ البسط اولا
//   area2 = area1 * (2*a-b)/(2*a+b); //? dont foregot the precedence
//   return area2;
// }

// void printArea (float area2)
// {
//   cout << " the area of circle along circumfance is : " <<area2;
// }



// int main ()
// {
// float a , b ;
//  readRadius (a,b);
// printArea(calcCirclecircumfance(a,b));

//   return 0;
// }


//*task23//
// #include <iostream>
// #include<cmath>
// using namespace std;

// float readRadius (float &a , float &b , float & c )
// {
//   cout<<"size of a ?? "<<endl;
//   cin>>a;

//    cout<<"size of b ?? "<<endl;
//   cin>>b;

//   cout<<"size of c ?? "<<endl;
//   cin>>c;
//   return a , b , c;

// }

// float calcCirclecircumfance (float a , float b , float c )
// {
//   float p , area;
//   p= (a+b+c)/2; //?please be carefully for brackects and precedence
//   area= 3.14*pow((a*b*c)/(4*sqrt(p*(p-a)*(p-b)*(p-c))),2) ; //?مهم جدا انك تهتم للاقواس, حطيت اقواس عند المقام عشان ينفذ البسط اولا
//   return area;
// }

// void printArea (float area)
// {
//   cout << " the area of circle along circumfance is : " <<area;

// }



// int main ()
// {
// float a , b,c ;
//  readRadius (a,b,c);
// printArea(calcCirclecircumfance(a,b,c));

//   return 0;
// }



//*task25//read until the number between two number you put it
// #include <iostream>
// #include<cmath>
// using namespace std;

// //?1>>> it must to read the age
// int readAge ()
// {
//     int age;
//     cout<< "please enter your age\n";
//     cin>>age;
//     return age;
// }

// //?2>>>>it must to check out of the age is between ranger or not
// bool checkAGe (int age , int from , int to)
// {
//     return (age >= from && age<=to);
    
// }

// int checkRange (int a , int b)
// {
//     int age =0;

//     do
//     {
//         age=readAge(); // حطيت هنا انه يقرا طالما ان الشرط صحيح , ف في كل مره بيقرا من دالة قراءة العمل حتى نصل لمكان يكون العمر داخل الرينج
        
//     } while (!checkAGe(age , a , b));
//     return age;
    
// }

// void printResult (int age)
// {

//     if (checkAGe(age,18,45))
//     cout<<"the valid age is>>"<<age;

//     else
//     cout<<"this age is not valid"<<age;
// }



// int main ()
// {
//     int a , b;
//     cout<<"please enter the start number of range\n";
//     cin>>a;

//      cout<<"please enter the end number of range\n";
//     cin>>b;

   
//     printResult(checkRange(a,b));
//     //?1-بياخذ الاعداد الي انا مدخلهم للرينج
//     //?2-بعدين بيروح للدالة الي تشيك على الرينج ثم راح يطلب ادخال عمر لان سبق وسويت نداء للدالة هناك
//     //?3-الي راح يصير انه راح يقرا العمر على الاقل مره واحدة وراح يستمر طالما ان الشرط صحيح الي هو يوم سويت نداء لدالة انه يشيك هل العمر بالرينج ام لا
//     //?4- ف فائدة العداد هي عملية تصحيح لو كان العمر الكدخل مهو بالرينج


//   return 0;
// }

//*task26// print from 1 to n
// #include <iostream>
// using namespace std;

// //first it most to read the N to print out from 1-n

// int readN (int &N)
// {
//     cout<<"please enter the number you want to print out forwardly >>  ";
//     cin>>N;

// return N;
// }

// int printOutN (int N)
// {
//     for (int i =1 ; i<=N ; i++)
//     {
//         cout<<i <<endl;
//     }

// }

// int printOutN1 (int N) //by use while
// {
//     int i=1;
//     while (i<=N)
//     {
//         cout<< i <<endl;
//         i++;
//     }
// }

// int printOutN2 (int N) //by use do-while
// {
//     int i=1;
//    do
//    {
//     cout<<i<<endl;
//     i++;
//    } while (i<=N);
   
// }

// int main ()
// {
//     int numberRead;
//     cout<<"---------1-print out by use for loop----------"<<endl;
//     printOutN(readN(numberRead));

//     cout<<"---------2-print out by use while----------"<<endl;
//     printOutN1(readN(numberRead));

//     cout<<"---------3-print out by usedo while----------"<<endl;
//     printOutN2(readN(numberRead));
//     return 0;
// }

// //*task27// print from n to 1
// #include <iostream>
// using namespace std;

// //first it most to read the N to print out from 1-n

// int readN (int &N)
// {
//     cout<<"please enter the number you want to print out forwardly >>  ";
//     cin>>N;

// return N;
// }

// int printOutN (int N)
// {
//     for (int i =N ; i>=1 ; i--)
//     {
//         cout<<i <<endl;
//     }

// }

// int printOutN1 (int N) //by use while
// {
//     int i=N;
//     while (i>=1)
//     {
//         cout<< i <<endl;
//         i--;
//     }
// }

// int printOutN2 (int N) //by use do-while
// {
//     int i=N;
//    do
//    {
//     cout<<i<<endl;
//     i--;
//    } while (i>=1);
   
// }

// int main ()
// {
//     int numberRead;
//     cout<<"---------1-print out by use for loop----------"<<endl;
//     printOutN(readN(numberRead));

//     cout<<"---------2-print out by use while----------"<<endl;
//     printOutN1(readN(numberRead));

//     cout<<"---------3-print out by usedo while----------"<<endl;
//     printOutN2(readN(numberRead));
//     return 0;
// }

//*task28//sum odd number from 1 to N //we can do this task by enum that lead us to create an enum function to return one of option that value of enum have
// #include <iostream>
// using namespace std;

//?first it most to read the N to print out from 1-n

// int readN (int &N)
// {
//     cout<<"please enter the number you want to print out the sum of odd number have  >>  ";
//     cin>>N;

// return N;
// }

// int printSumOutN (int N)
// {
//     int sum=0;
//     for (int i =1 ; i<=N ; i++)
//     {
//         if (i % 2 !=0)
//         {
//             sum+=i;
//         }
//     }
//    cout<< "the summ of odd number is :"<<sum <<endl; return sum;

// }

// int prinSumtOutN1 (int N) //by use while
// {
//     int sum=0;
//     int i=1;
//     while (i<=N)
//     {
//         if (i% 2 != 0)
//         {
//             sum+=i;
//         }
//         i++;
//     }
//     cout<< "the summ of odd number is :"<<sum<<endl;  return sum;
// }

// int printSUmOutN2 (int N) //by use do-while
// {
//     int sum2=0;
//     int i=1;
//    do
//    {
   
//     if (i% 2 != 0)
//         {
//             sum2+=i;
//         }
//           i++;
//    } while (i<N);

//  cout<< "the summ of odd number is :"<<sum2<<endl;   return sum2;
   
// }

// int main ()
// {
//     int numberRead;
//     cout<<"---------1-print out the odd number by use for loop----------"<<endl;
//     printSumOutN(readN(numberRead));

//     cout<<"---------2-print out odd number by use while----------"<<endl;
//     prinSumtOutN1(readN(numberRead));

//     cout<<"---------3-print out odd number by usedo while----------"<<endl;
//     printSUmOutN2(readN(numberRead));
//     return 0;
// }

//*task29//same last task but ,sum even number
// #include <iostream>
// using namespace std;

// //first it most to read the N to print out from 1-n

// int readN (int &N)
// {
//     cout<<"please enter the number you want to print out the sum of odd number have  >>  ";
//     cin>>N;

// return N;
// }

// int printSumOutN (int N)
// {
//     int sum=0;
//     for (int i =1 ; i<=N ; i++)
//     {
//         if (i % 2 ==0)
//         {
//             sum+=i;
//         }
//     }
//    cout<< "the summ of even number is :"<<sum <<endl; return sum;

// }

// int prinSumtOutN1 (int N) //by use while
// {
//     int sum=0;
//     int i=1;
//     while (i<=N)
//     {
//         if ( i % 2 == 0)
//         {
//             sum+=i;
//         }
//         i++;
//     }
//     cout<< "the summ of even number is :"<<sum<<endl;  return sum;
// }

// int printSUmOutN2 (int N) //by use do-while
// {
//     int sum2=0;
//     int i=1;
//    do
//    {
   
//      if ( i % 2 == 0)
//         {
//             sum2+=i;
//         }
//           i++;
//    } while (i<=N);

//  cout<< "the summ of even number is :"<<sum2<<endl;   return sum2;
   
// }

// int main ()
// {
//     int numberRead;
//     cout<<"---------1-print out the odd number by use for loop----------"<<endl;
//     printSumOutN(readN(numberRead));

//     cout<<"---------2-print out odd number by use while----------"<<endl;
//     prinSumtOutN1(readN(numberRead));

//     cout<<"---------3-print out odd number by usedo while----------"<<endl;
//     printSUmOutN2(readN(numberRead));
//     return 0;
// }


//*task30//factorial number
// #include <iostream>
// using namespace std;

// //?first read number
// int readNumber () //the task he want is read only positive number
// {
//    int number; //?الدالة راح تفضل تقرا لحد ادخال رقم موجود
//     do{
//         cout<<"please enter the value you want it factorial :";
//         cin>>number;

//     }while (number<0);
//     return number;
// }

// //?the we calc the factorial by for loop
// int calcFactorial (int number)
// {
//     int factorial=1;
//     for (int i=number ; i>=1 ; i--)
//     {
//         factorial *=i;
//     }
//     return factorial;
  
// }

// void printFactorial (int factorial )
// {
   
// cout<<"the factorial is :"<<factorial ;
// }

// int main ()
// {
//     int number , factorial;
//     printFactorial(calcFactorial( readNumber()));
// }




//*task31 , task32//power of m
// #include <iostream>
// using namespace std;

// //?1- you must to read the base and the power
// int readbaseAndpower (  int &base , int &power)
// {
    
//     cout<<"please entert the base? "; cin>>base;
//     cout<<"please enter the power? "; cin>>power;
//     return base , power;

// }

// //?2-you must to do the for loop to make the calcultation of power
// int calcBaseAndpower (int base , int power)
// {
//     if (power == 0) //?its condition to stop exceute when the power is 0
//     {
//         return 1;
//     }
//     int calcBase=1;

//     for (int i=1 ; i<=power ;i++)
//     {
//         calcBase*=base;
//     }
//     return calcBase;
// }

// void printCalcBase (int calcBase )
// {
//     cout<<"the result is:" <<calcBase;
// }

// int main ()
// {
//     int n1 , n2;
//     readbaseAndpower(n1,n2);
//     printCalcBase(calcBaseAndpower(n1,n2));
    
//     return 0;
// }



// //*task33//print which grade has taken depend on grade
// #include <iostream>
// using namespace std;
// //?create an enum to facilitate the our solution
// enum Grades {A=1 ,B=2 , C=3 , D=4 , F=5  };

// int readGrade (int &grade) //?اقرا رقم من اليوزر ثم اروح اشيك للدالة الي بعدها
// {
//     cout<<"please enter the grade? " ; cin>>grade;
//     return grade;
// }
// Grades TestGrade (int grade) //?سويتها من نوع اينم عشان ابيه يرجع لي احد قيمها وبناء عليها راح يتم طباعة الرسالة المناسب للقريد
// {
//     if (grade >=90 && grade<=100)
//     return Grades::A;

//      else if (grade >=89 && grade<=80)
//     return Grades::B;

//      else if (grade >=79 && grade<=70)
//     return Grades::C;


//      else if (grade >=69 && grade<=60)
//     return Grades::D;
    
//     else 
//     return Grades ::F;

// }

// void PrintGrade (Grades readGrade , int grade) //?سويت متغير من نوع اينم عشان يستلم رسالة من نوعى اينم وانا اطبعها بعد المقارنة
// {
//     if (TestGrade(grade) == Grades::A) //?هنا كاني اقولى رح لدالة اختبار القريد ولو كانت النتيجه مشابهة لذا القريد بعد المقارنة اطبع التالي
//     cout<<"congrats the grade above 90 ";

//     else if(TestGrade(grade) == Grades::B)
//     cout<<"congrats the grade above 80 ";

//      else if(TestGrade(grade) == Grades::C)
//     cout<<"congrats the grade above 70 ";


//      else if(TestGrade(grade) == Grades::D)
//     cout<<"congrats the grade above 60 ";

//     else
//     cout<<"sorry good luck next time (: ";

// }
// int main ()
// {
//     int grade ;
//     Grades resulOfgrade;
//     readGrade(grade); //?قريت القريد  
//     TestGrade(grade); //? ثم خذيت القريد من اليوزر وخليته يقارن مع الحالات الي عندي عشان يرجع لي قيمة من نوع اينم
//     PrintGrade(resulOfgrade,grade); //?ثم بعدا خذيت القيمة المرجعه وانشأت متغيرين واحد من نوع اينم عشان يترجم القيمة المرجعه وواحد القريد عشان اذا جيت اسوي المقارنة بستعدي دالة اختبار القريد عشان بعد المقارنة يطبع القيمة المناسبة

//     return 0;
// }














// //*task34//
// #include <iostream>
// using namespace std;


// int readSalary (float &salary)
// {
//     cout<<"please enter your salary?";
//     cin>>salary;
//     return salary;
// }


// float calcCommision (float salary)
// {
//     float comRate;
//     float total=1;

//     if(salary>=1000000)
//     {
//     comRate=0.01;
//     total=(comRate*salary);
//     }

//     else if(salary>=500000)
//     {
//     comRate=0.02;
//    total =comRate*salary;
 
//     }
//      else if(salary>100000)
//     {
//     comRate=0.03;
//    total=(comRate*salary);
//     }
//     return total;
 
// }



// int main ()
// {
//     float salary ;
     
//     cout<< "the CR is :"<<calcCommision(readSalary(salary));



//     return 0;
// }
















// //*task35//
// #include <iostream>
// using namespace std;

// int main ()
// {



//     return 0;
// }








// //*task36//simple calculator
// #include <iostream>
// using namespace std;

// int ReadNumber (int &number1 , int &number2)
// {
//     cout<<"please enter number 1 ?"; cin>>number1;
//         cout<<"please enter number 2 ?"; cin>>number2;
//         return number1 , number2;
// }

// // char readoperator (char operator1)
// // {
// //     cout<<"please enter the operator you want ?"; cin>> operator1;
// //     return operator1;
// // }

// void simPleCalc ( int number1 , int number2)
// {
//     char operatorr;
//     cout<<"please enter the operator you want to do? "; cin>>operatorr;
//     if(operatorr== '+')
//     cout<<"the procces is " << number1 + number2<<endl;

//     else if(operatorr== '-')
//     cout<<"the procces is " << number1 - number2<<endl;


//     else if(operatorr == '*')
//     cout<<"the procces is " << number1 *number2<<endl;


//     else if(operatorr == '/')
//     cout<<"the procces is " << number1 / number2<<endl;
// }
// int main ()
// {
//     int n1 , n2;
//     char operatorr;
//     ReadNumber(n1,n2);
//     simPleCalc(n1,n2);




//     return 0;
// }

//*task37//sum until user input -99
// #include <iostream>
// using namespace std;

// int readNumber()
// {
//     int number;
//     cout<<"what is the number? "; cin>>number;
//     return number;
// }

// bool checkNumber(int number)
// {
//     if (number != -99)
//     // return 0; //?هذا الكلام خطا لان هذا شرط الاكمال, ف اي رقم راح يجيه راح يوقفه لانه ريتيرن زيرو
// return 1;
//     else 
//     // return 1; //?wrong
//     return 0;
// }

// int sumFUnction ()
// {
//     int sum=0;
//     int counter =0;
//     int number =0;
//     do
//     {
//         int number = readNumber(); //?راح يبدا يقرا الارقام من هنا
//         if(number == -99) //?بعد كل مرة راح يقرا راح يقارن الرقم بال-99 عشان يقرر هل يكمل ام لا, بناء على ايش راح يكمل او يوقف
//         {
//             break;
//         }
//         sum+=number;
//         counter++;

//     }
//     while (checkNumber(number)); //?راح يكملبشرط ان الرقم لايساوي -99 غير ذلك راح يطلع من المقارىنة الي فوق
//     return sum;
// }

// int main ()
// {


// cout << "the sum of all number you put in is >> \n";
// cout<< sumFUnction(); 


//     return 0;
// }



//*task38//prime number or not//i will do by enum way
// #include <iostream>
// using namespace std;

// //?1- create a enum
// enum primeORnot {prime =1 , unprime =0};

// int readNumber (int &number)
// {
//     cout<<"please enter the number ? " ; cin>>number;
//     return number;
// }

// primeORnot checkPRIME(int number)
// {
//     //?ابغاه يشيك قابيلة قسمة العدد  الي دخلته من واحد الى عشره هل هو برايم ام لا
//     int check ;//?سويت هذا المتغير عشان احدد الرينج اغلي اشبك فيه على هذا الرقم بانه برايم ام لا
//     for (int i=2 ; i <=10; i++)
//     {
//         if (number % i ==0)
//         {
//         // cout<<"the number able to divide by two is " <<number<<endl;
//         return primeORnot::unprime;
//         }

//         return primeORnot::prime;
//     }
// }

// void printPrime (primeORnot checkPrime , int number)
// {
//     if (checkPRIME(number) == primeORnot::prime)
//     {
//         cout<<"the our number is prime (: ";
//     }
//     else
//     {
//     cout<<"the our number is unprime ):";
//     }
// }

// int main ()
// {

//     int number ;
//     primeORnot value;
//     readNumber(number); //? first is read a number ,then
//     printPrime(value,checkPRIME(number));


//     return 0;
// }






// //*task39//reminder of pay
// #include <iostream>
// using namespace std;

// int readTC(int &Totatlbill , int &cashPaid)
// {
//     cout<<"please enter the totalbill? "; cin>>Totatlbill;
//     cout<<"please enter the cashpaid?  "; cin>>cashPaid;

//     return Totatlbill,cashPaid;
// }

// int calcReminder (int Totalbill , int cashpaid)
// {
//     int reminder;

//     reminder =cashpaid-Totalbill;
//     return reminder;
// }

// void printReminder (int reminder)
// {
//     cout<<"the reminder you must to take  is: " <<reminder;
// }

// int main ()
// {
//     int n1 , n2;
//     readTC(n1,n2);
//     cout<<"\n--------------\n";
//     cout<<"Total bill = "<<n1<<endl;
//     cout<<"Cash paid = " <<n2<<endl;
//     printReminder(calcReminder(n1,n2));





//     return 0;
// }












// //*task40//calc tax and charge fee
// #include <iostream>
// using namespace std;

// int readbill(int &Totatlbill )
// {
//     cout<<"please enter the totalbill? "; cin>>Totatlbill;
    

//     return Totatlbill;
// }

// int calcReminder (int Totalbill )
// {
    
//     // int servicefee =1.1;
//     // int tax=1.16; 
//*ليش لما يكون اضرب الفاتوره بمتغير قيمتة ثابته مايرجع لي القيمة بعد الحساب؟؟؟ ليششششش؟

//     Totalbill= Totalbill*1.1;
//     Totalbill=Totalbill*1.16;
//     return Totalbill;
// }

// // void printReminder (int thetotal)
// // {
// //     cout<<"the total bill after add the taxex and service fee is >>>: " <<thetotal;
// // }

// int main ()
// {
//     int n1;
//     readbill(n1);
//     cout<<"\n--------------\n";
//     cout<<"Total bill before add charge = "<<n1<<endl;
//    cout<<"the bill after add charge = "<< calcReminder(n1);





//     return 0;
// }














// //*task41//read hours and transfare to no of week and day
// #include <iostream>
// using namespace std;

// float ReadHour (float &hour)
// {
//     cout<<"please enter the number of hous :" ; cin>>hour;
//     return hour;
// }

// float HourToDay (float  hour)
// {
//     // float hourCalc;
//     // hourCalc=hour/24;
//     return (float)hour/24;
// }

// float HourToweek (float hour )
// {
//     return (float)hour / 168;
// }
// int main ()
// {
//     float Hours;
//     ReadHour(Hours);
//     cout<<"the total day is : " <<HourToDay(Hours)<<endl;
//     cout<<"the total week is : "<<HourToweek(Hours);

//     return 0;
// }










 //*task42//
// #include <iostream>
// using namespace std;

// float Readinfo (float &day , float &hour , float &minute , float & second) //?متغير السيكند مهو باي ريفرنس لاني ماراح اجري عليه اي عمليات
// {
//     cout<<"please enter the number of day :\n" ; cin>>day;
//     cout<<"please enter the number of hours :\n" ; cin>>hour;
//     cout<<"please enter the number of day :\n" ; cin>>minute;
//     cout<<"please enter the number of day :\n" ; cin>>second;

//     return day , hour , minute, second;
// }

// float dayTosecond (float  day)
// {
    
//     return (float)day*24*60*60;
// }

// float HourTosecond (float hour )
// {
//     return (float)hour*60*60;
// }

// float minuteTosecond (float minute )
// {
//     return (float)minute * 60;
// }

// float secondTosecond (float second)
// {
//     return second;
// }

// int main ()
// {
//     float day , hour , minute ,second;
    
//     Readinfo(day,hour,minute,second);
//     cout<<"the total day is : " << day <<endl;
//     cout<<"the total hour is : "<<hour <<endl;
//     cout<<"the total minute is : "<<minute <<endl;
//     cout<<"the total second is : "<<second <<endl;

//     cout<<"the tota amount duration in second is \n"<< dayTosecond(day) + HourTosecond(hour) + minuteTosecond(minute) + secondTosecond(second);



//     return 0;
// }
























// //*task43// عكس الي قبل
// #include <iostream>
// using namespace std;

// int main ()
// {



//     return 0;
// }



//*task44//day of week
// #include <iostream>
// #include<string>
// using namespace std;
// enum dayOFweek {s=1 , m=2 , t=3 ,w=4, th=5,f=6,sat=7}; //?انشات متغير اينم يوجد به قيم ايام الاسبوع 

// int ReadNumberOfday (int &number)
// {
   
//     cout<<"please enter the number of day ? ";
//     cin>>number;
//     return number;
// }

// dayOFweek checkNumberOfweek (int number)
// {
//     if (number == 1)
//     return dayOFweek::s;

//     else if (number ==2)
//     return dayOFweek::m;

//      else if (number ==3)
//     return dayOFweek::t;

//      else if (number ==4)
//     return dayOFweek::w;


//      else if (number ==5)
//     return dayOFweek::th;

//      else if (number ==6)
//     return dayOFweek::f;

//      else if(number == 7)
//     return dayOFweek::sat;
// }

// void printDay (dayOFweek ReadNumberOfweekk , int number)
// {
//     switch (checkNumberOfweek(number))
//     {
//         case dayOFweek::s:
//         cout<<"it is sunday \n";
//         break;

//         case dayOFweek::m:
//         cout<<"it is monday \n";
//         break;

//         case dayOFweek::t:
//         cout<<"it is tuesday \n";
//         break;

//         case dayOFweek::w:
//         cout<<"it is wedensday \n";
//         break;

//         case dayOFweek::th:
//         cout<<"it is thursday \n";
//         break;

//         case dayOFweek::f:
//         cout<<"it is friday \n";
//         break;

//         case dayOFweek::sat:
//         cout<<"it is saturday \n";
//         break;

//         default :
//         cout<<"this number doent exist (: ";
//     }
// }

// int main ()
// {
//     int number;
//     dayOFweek Check;

//     ReadNumberOfday(number);
//     checkNumberOfweek(number);
//     printDay(Check,number);

//     return 0;
// }











//*task45//month of year
// #include <iostream>
// #include<string>
// using namespace std;
// enum dayOFweek {j=1 , f=2 , m=3 ,a=4, may=5,june=6,july=7,aug=8,sep=9,octo=10,nov=11,dec=12}; //?انشات متغير اينم يوجد به قيم ايام الاسبوع 

// int ReadNumberOfmonth (int &number)
// {
   
//     cout<<"please enter the number of month ? ";
//     cin>>number;
//     return number;
// }

// dayOFweek checkNumberOfmonth(int number)
// {
//     if (number == 1)
//     return dayOFweek::j;

//     else if (number ==2)
//     return dayOFweek::f;

//      else if (number ==3)
//     return dayOFweek::m;

//      else if (number ==4)
//     return dayOFweek::a;


//      else if (number ==5)
//     return dayOFweek::may;

//      else if (number ==6)
//     return dayOFweek::june;

//      else if(number == 7)
//     return dayOFweek::july;

//      else if(number == 8)
//     return dayOFweek::aug;


//      else if(number == 9)
//     return dayOFweek::sep;



//      else if(number == 10)
//     return dayOFweek::octo;



//      else if(number == 11)
//     return dayOFweek::nov;


//      else if(number == 12)
//     return dayOFweek::dec;

//*or only put >>>> (dayofweek)ReadNumberOfmonth(number) >>> راح يرجع لي قيمة من نوع اينم بعد مايروح ويقرا الرقم ثم تعود لتصبح قيمة قابلة للتحويل من نوع اينم
// }

// void printMonth (dayOFweek ReadNumberOfweekk , int number)
// {
//     switch (checkNumberOfmonth(number))
//     {
//         case dayOFweek::j :
//         cout<<"it is january \n";
//         break;

//         case dayOFweek::f :
//         cout<<"it is february \n";
//         break;

//         case dayOFweek::m :
//         cout<<"it is march \n";
//         break;

//         case dayOFweek::a:
//         cout<<"it is abril \n";
//         break;

//         case dayOFweek::may:
//         cout<<"it is may \n";
//         break;

//         case dayOFweek::june :
//         cout<<"it is june \n";
//         break;

//         case dayOFweek::july:
//         cout<<"it is july \n";
//         break;

//          case dayOFweek::aug:
//         cout<<"it is august \n";
//         break;


//          case dayOFweek::sep:
//         cout<<"it is septemper \n";
//         break;


//          case dayOFweek::octo:
//         cout<<"it is october \n";
//         break;

//          case dayOFweek::nov :
//         cout<<"it is november \n";
//         break;

//         default :
//         cout<<"it is december (: ";
//     }
// }

// int main ()
// {
//     int number;
//     dayOFweek Check;

//     ReadNumberOfmonth(number);
//     checkNumberOfmonth(number);
//     printMonth(Check,number);

//     return 0;
// }


















//*task46//print from a to z
// #include <iostream>
// using namespace std;

// void printLetter ()
// {
//     int counterFORletter=1;
//     for (int i=65 ; i<=90 ; i++)
//     {
//         cout<< "the letter number "<< counterFORletter <<" : " <<(char)i<<endl;
//         counterFORletter++;
//     }

    
// }

// int main ()
// {

// printLetter();

//     return 0;
// }




//*task47//monthly installement
// #include <iostream>
// using namespace std;

// int ReadINFOloan (int &LoanAmount , int &MonthlyPayment)
// {
//     cout<<"please entet the loan you take it ?" ; cin>>LoanAmount ;
//     cout<<"how much month you will take it to finish the amount ? " ; cin>>MonthlyPayment;
//     return LoanAmount , MonthlyPayment;
// }

// int TimeTfinishLoan (int LoanAmount , int MonthlyPayment)
// {
//     int timeTopay;
//     timeTopay=LoanAmount/MonthlyPayment;
//     return timeTopay;
// }
// int main ()
// {

// int n1 , n2;

// ReadINFOloan(n1,n2);
// cout<<"the time to pay all amount of loan is >> " << TimeTfinishLoan(n1,n2) <<" month ";




//     return 0;
// }

//*task48//monthly installement
// #include <iostream>
// using namespace std;

// int ReadINFOloan (int &LoanAmount , int &LongMonth)
// {
//     cout<<"please entet the loan you take it ?" ; cin>>LoanAmount ;
//     cout<<"how much month you will take it to finish the amount ? " ; cin>>LongMonth;
//     return LoanAmount , LongMonth;
// }

// int TimeTfinishLoan (int LoanAmount , int LongMonth)
// {
//     int timeTopay;
//     timeTopay=LoanAmount/LongMonth;
//     return timeTopay;
// }
// int main ()
// {

// int n1 , n2;

// ReadINFOloan(n1,n2);
// cout<<"the monthly payment each month is >> " << TimeTfinishLoan(n1,n2);




//     return 0;
// }
























//*task49//
// #include <iostream>
// using namespace std;

// int ReadPIN (int & pinCOde )
// {

//     cout<<"please enter the pin  of you account bank ? " ; cin>>pinCOde;
//     return pinCOde;

// }

// int CheckOFpin (int pin)
// {
//     int pinCode=1234;
//     if (pin == pinCode)
//     {
//         cout<<"the balance you have is  (anny balance)" <<endl;

//     }
//     else
//     cout<<"sorry its wrong number (: ";
// }


// int main ()
// {
//     int n1;

//     CheckOFpin(ReadPIN(n1));





//     return 0;
// }




















//*task50//
// #include <iostream>
// #include<string>
// using namespace std;
// string readPIN ()
// {
//     string pin;
//     cout<<"  enter pin :";
//     getline (cin,pin);
//     return pin;
// }

// bool LOG ()
// {
//     string Correctpin = "1234";
//     string Readpin;
   
//     int counter=3;
    
//     do
//     {
//          Readpin=readPIN();
//           counter--;
//         if(Readpin ==Correctpin)
//         {
//             return 1;
//         }
//         else
//         {
//          cout<<"sorry wrong pin you have "<<counter << " more tries\n";
         
//         }

//     }while (Readpin !="1234" && counter >=1);
//     return 0;

//     }
// int main ()
// {
  
//   if(LOG())
//   {
//     cout<<"your balance is 7500";
//   }
//   else
//   cout<<"your card is blocked";




//     return 0;
// }

















