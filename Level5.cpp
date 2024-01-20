// #include<iostream> //*task1
// using namespace std;


// void PrintTableHeader() {     cout << "\n\n\t\t\t Multipliaction Table From 1 to 10\n\n";     cout << "\t"; for (int i = 1; i <= 10; i++)     {         cout << i << "\t";     }     cout << "\n___________________________________________________________________________________\n"; } 

// string coulSeperator (int i)
// {
//     if (i<10)
//     return "  |";
//     else
//     return "  |";
// }
// void PrintTableOfnumber ()
// {
//     int number =1; 
//     PrintTableHeader();

//     for (int i=1 ; i<=10 ; i++)
//     {
//         cout<<" " <<i <<coulSeperator(i)  <<"\t"<<endl;
      
//         for (int j=1 ; j<=10 ; j++)
//         {
           
//             cout<<number * j<< "\t";
//         }
        
//           number++;

//     }
// }

// int main ()
// {
//     PrintTableOfnumber();


//     return 0;
// }


//*Task2 //print all primn=e number from 1 to N
// #include<iostream>
// using namespace std;

// enum CheckPrime {prime =1 , unprime=2};

// //?read number you to check until reach it

// int ReadNumber (int number)
// {
//     cout<<"please enter the number ?" ;
//     cin>>number;
//     return number;
// }

// bool CheckISprime (int number)
// {
//    for (int j=2 ; j<=number ; j++)
//    {
//     if (number % j !=0 )
//     {
//         return 1;
//     }
//     else
//     return 0;

//    }
// }

// void PrintPrime (int number)
// {
//      cout<<"the prime number is \n (";
//     for (int i=1 ; i<=number ; i++)
//     {
//         if (CheckISprime(i) == 1)
//         {
//            cout<<i<<endl;
//         }
//     }
// }
  

// int main ()
// {

//     int number;
//     PrintPrime(ReadNumber(number));

//     return 0;
// }


//*task3//check is it perfect or not
// #include <iostream>
// using namespace std;

// //?first >> you must to read the number from user
// int ReadNumber (int &number)
// {
//     cout<<"please enter the first number? ";
//     cin>>number;
//     return number;
// }

// bool CheckPerfect (int number)
// {
//     int sum =0;
//     for (int j=1 ; j<=number-1 ; j++)
//     {
//         if (number % j == 0)
//         sum+=j; //?ليش انا بجمع ؟ لاني بشيك الارقام الي تقبل القسمة على الرقمو لو قبلت؟ ف بجمع لحد مانتهي من اللوب ثم بشوف هل المجموع للارقام الي تقبل القسمة هي نفسها مجموعها يساوي الرقم ام لا
//     }

//     return number==sum; //?هذا الشرط كانه يقولي لو كان الجمع للارقام القابلة القسمة على هذا الرقم تكون نفس مجموعه فالحل صحيح
//or i can do this
//?  if (number ==sum) //?second solution (alternative for line 116)
//?return number
// }

// void PrintPerfect (int number)
// {


//     if (CheckPerfect(number))
//     cout<<"the number " <<number <<"are perfect";
//     else
//     cout<<"the number " <<number <<"are not perfect";

//     // int sum=0;
    
//     // for (int i=1 ; i<=number-1 ; i++)                  //*this my old solition
//     // {
//     //     sum+=i;
//     //     if (number % i == 0)
//     //     {
//     //         sum+=i;
//     //         if(sum % number ==0)
//     //         {
//     //             cout<<"the " <<number <<"it's not perfect"<<endl;

//     //         }
//     //         else 
//     //     cout<<"the number   :"<<i << "  are qualified the condition to be the number are perfect"<<endl;
//     //     }
//     // }
// }

// int main ()
// {
//     int number;
    
// PrintPerfect(ReadNumber(number));

//     return 0;
// }


//*task4//perfect number from 1 to N
// #include <iostream>
// using namespace std;

// //?first >> you must to read the number from user
// int ReadPositiveNumber (int &number)
// {
//     do{
//     cout<<"please enter the range of the  number? ";
//     cin>>number;
//     }while(number<0);
//        return number;
// }

// bool CheckPerfect (int number)
// {
//     int sum =0;
//     for (int j=1 ; j<=number ; j++)
//     {
//         if (number % j == 0)
//         {sum+=j;} //?ليش انا بجمع ؟ لاني بشيك الارقام الي تقبل القسمة على الرقمو لو قبلت؟ ف بجمع لحد مانتهي من اللوب ثم بشوف هل المجموع للارقام الي تقبل القسمة هي نفسها مجموعها يساوي الرقم ام لا
//     }

//                 if (number == sum) 
//                 {return number;}
// }

// void PrintPerfect (int number)
// {

// for (int i=1;i<=number;i++)
// {
//     if (CheckPerfect(i)) //?here we take number number from 1 to n and check if it perfect or not
//    { cout<<"the perfect number are : " <<i <<"\n";}
//     else
//     cout<<"there are no perfect number";
// }


// }

// int main ()
// {
//     int number;
    
// PrintPerfect(ReadPositiveNumber(number));

//     return 0;
// }



//*task5// input -1234- ,,, print 4321//حل مكتمل لكن فيه نقص منطقي
// #include <iostream>
// using namespace std;

// int ReadFromToNumber (int &from , int &to)
// {
//     cout<<"please enter number you read from ? "<<endl;
//     cin>>from;

//     cout<<"please enter number you read to ? "<<endl;
//     cin>>to;

// }

// void ReadNumberForwardlyThenprintReversly(int from , int to)
// {
    
//     int number[2];
//     for (int i=from ;i<to ; i++)
//     {
//         cout<<"please enter the value of the number (" << i <<")" <<endl;
//         cin>>number[i];
//     }

//      for (int i=to ;i>=from ; i--)
//     {
//         cout<<"the number "<<i <<"reversly \n";
//         cout<<number[i];
        
//     }


    
// }

// // void PrintNumberReversly(int from ,int to ,int numbers)
// // {
// //     cout<<"please enter the value of the number >> ";
// //     for (int i=to ;i>=from ; i++)
// //     {
// //         cout<<"the number "<<i <<"reversly \n";
// //         cout<<numbers;
        
// //     }
// // }

// int main ()
// {
// int f ,t;
// ReadFromToNumber(f,t);
// ReadNumberForwardlyThenprintReversly(f,t);


    
//     return 0;
// }

//*task5//second solution //حل مقتبس

// #include <iostream>
// #include<string>
// using namespace std;

// int ReadNumber(int &number)
// {
//     do
//     {
//         cout<<"please enter the number?"; cin>>number;
//     }while (number !=0);

//     return number;
// }

// void PrintNumberReversly (int number)
// {
//     string NumberRevers=to_string(number);

//     for(int i= NumberRevers.length() ; i>=1; i--)
//     {
//         cout<<NumberRevers[i]; 
//      }

// }

// int main ()
// {
//     int n;
//     ReadNumber(n);
//     PrintNumberReversly(n);


//     return 0;
// }




//*task5// tird way for solution//طريقة ابو هدهود
// #include <iostream>
// using namespace std;

// int ReadNumber (int &number)
// {
//     do //these function to read only positive number
//     {
//         cout<<"please enter the number you want to reverse it ? " ; cin>>number;

//     }while(number<=0);
//     return number;

// }

// void PrintReversly (int number)
// {
//     int reminder=0;
//     int sum

//     while(number>0)
//     {
//     reminder = number %10; //here we take last number
//     number = number /10;
//     cout<<reminder<<endl;
//     }

// }



// int main ()
// {

// int n;
//     PrintReversly(ReadNumber(n));




//     return 0;
// }

//*task6//sum of digit
// #include <iostream>
// using namespace std;

// int ReadNumber (int &number)
// {
//     do //these function to read only positive number
//     {
//         cout<<"please enter the numbers you want to sum of digit  ? " ; cin>>number;

//     }while(number<=0);
//     return number;

// }

// void PrintSumOfdigit (int number)
// {
//     int reminder=0;
//     int sum =0;

//     while(number>0)
//     {
//     reminder = number %10; //here we take last number
//     number = number /10;
//     sum+=reminder;
//     }
//     cout<<"the sum of all digit you put in is>>"<< sum ;

// }



// int main ()
// {



// int n;
//     PrintSumOfdigit(ReadNumber(n));




//     return 0;
// }



//*task7//reverse number
// #include <iostream>
// #include<string>
// using namespace std;

// int ReadNumber (int &number)
// {
//     do //these function to read only positive number
//     {
//         cout<<"please enter the numbers you want to reverse it  ? " ; cin>>number;

//     }while(number<=0);
//     return number;

// }

// void PrintSumOfdigit (int number)
// {
//     int reminder=0;
//     int sum =0;
//     string TakeReminderRversly="";

//     cout<< "The Revrse is : " ;

//     while(number>0)
//     {
//     reminder = number %10; //here we take last number
//     number = number /10; //here we refresh the our number after take it!
//      TakeReminderRversly = to_string(reminder);//?why i delclare varibale from string??لان الستريج عبارة عن ارراي اوف كاركتر ف افضل وسيلة عشان اطبع الرقم معكوس اني اخزن فيه الريمانيدر بعد كلية عملية ياخذ اخر رقم واحولة الى سترنج بحكم انها ارراي اوف كاركتر
//     cout<<TakeReminderRversly ;  
//       }
   

// }



// int main ()
// {



// int n;
//     PrintSumOfdigit(ReadNumber(n));
//     return 0;
// }


//*Task8//
// #include <iostream>
// #include <string>
// using namespace std;

// //ReadNumber from user that i want to input then i read number that i need how many digit in there
// int ReadNumber (int  &fullNumber , int &specificNumber)
// {
//     cout<<"please enter the full number that you want to check about ?" ; cin>>fullNumber;
//     cout<<"which number you looking for to count ?" ; cin>>specificNumber;
//     return fullNumber,specificNumber;

// }

// int CheckOfHowManyNumber (int fullNumber , int specificNumber )
// {
//     int counterForNumber =0 , Reminder=0;
//     // string ConvertTheFullNumber;
//     //  string ConvertTheSpecificNumber = to_string(specificNumber);
//     // ConvertTheNumber=to_string(specificNumber);


//     for (int i=0; i<5; i++)
//     {
//         Reminder=fullNumber % 10;
//         fullNumber= fullNumber /10;
//         // string ConvertTheFullNumber = to_string(Reminder);
//         if (specificNumber == Reminder)
//         {
//             counterForNumber++;
//         }

        

//     }

//     return counterForNumber;


// }

// int main ()
// {
//     int val1;
//     int val2;
//     ReadNumber(val1,val2);
//     cout<<"the frequency of digit you put int is >>>"<<CheckOfHowManyNumber(val1, val2);


//     return 0;
// }



//*task9//
//  #include <iostream>
// #include <string>
// using namespace std;

// //ReadNumber from user that i want to input then i read number that i need how many digit in there
// int ReadNumber (int  &fullNumber)
// {
//     cout<<"please enter the full number that you want to check about ?" ; cin>>fullNumber;
    
//     return fullNumber;

// }

// int CheckHowManyDigit (int specificNumber , int fullNumber )
// {
//     int counterForNumber =0 , Reminder=0;


//     for (int i=0 ; i<10 ; i++) 
//     {
//         Reminder=fullNumber % 10;
//         fullNumber= fullNumber /10;
//         if (specificNumber == Reminder)
//         {
//             counterForNumber++;
//         }
//     }
//    return counterForNumber;

// }

// void PrintTheDigitoccurnce (int fullNumber  )
// {
//     for (int specificNumber=1 ; specificNumber <10 ; specificNumber++)
//     {
//         int digit = CheckHowManyDigit(specificNumber,fullNumber); //?الرقم المحدد
//         if (digit > 0)
//         {
//             cout<< "the digit " <<specificNumber << "occurnce " <<digit <<" time \n";
//         }
//     }

    
// }




// int main ()
// {
//     int val1;
//     int val2;
//     ReadNumber(val1);
//     PrintTheDigitoccurnce(val1);


//     return 0;
// }


//*task10//?????????????????????????//
// #include<iostream>
// #include<string>
// using namespace std;

// int PrintTWoReverse (int Number)
// {
//    int   Reminder=0,Remineder1=0;
//     string conver ="";
//     cout<<"please enter the number >>> "; cin>>Number;
//     while (Number >0)
//     {
//         Reminder= Number %10;
//         Number=Number/10;
//         cout<<Reminder;
    
//     }
//     return Reminder;
   

// }
// int PrintTheRevrseiReverse(int Number)
// {
//     int ReverseOfReverse=0;
//     int Remainder;
//     int Number2=0;

//     while (Number >0)
//     {
//         Remainder=Number%10;
//         Number/=10;
//         ReverseOfReverse=ReverseOfReverse*10+Remainder;
//         cout<<ReverseOfReverse;
//     }
//     return ReverseOfReverse;
    


// }

// int main ()
// {
//     int value1;
    
   
//     PrintTheRevrseiReverse( PrintTWoReverse(value1));


//     return 0;
// }

//*task11//
// #include <iostream>
// #include<string>
// using namespace std;

// int ReadNumber (int &number)
// {
//     cout<<"please enter the number to check is it palindrom or not ? " ; cin>>number;
//     return number;
// }

// int ReverseNumber (int number)
// {
//     int Reminder=0,number2=0;
//     string ConverTheReminder=" ";
//     cout<<"the number of reverse is: ";
//     while (number >0)
//     {
//         Reminder=number%10;
//         number=number/10;
//         number2=number2*10+Reminder;
//     }
//     cout<<number2;
//      return number2;

// }

// void CheckISpolindrom (int number)
// {
//     int TheCecknumber=ReverseNumber(number);
    //هنا جتني فكرة اني اقارن الارقام بعد ماحولها الى سترنغ لكن ماعرفت كيف وانا متاكد انه حل ممكن , لكنس سويت الحل البديل باني خزنت الريفيرس بانتجر بالطريقة الي سويتها فوق
//     if(number ==TheCecknumber)
//     {
//     cout<<" ,and the number is polindrom "; }
//     else
//         cout<<" and its not polindrom";


// }

// int main ()
// {
//     int value;
//     ReadNumber(value);
//   CheckISpolindrom(value);
//   return 0;

// }

//*task12//inverted number
// #include <iostream>
// #include <string>
// using namespace std;

// void invertedNumber (int number)
// {
//     for (int i=number ; i>=1 ; i--)
//     {
//         for (int j=1 ; j<=i;j++) //1>هل الجي اصغر من الخمسة؟ يروح يطبع خمس خمسات ثم تصير ال i قيمتها اربعة ويطبع اربع اربعات
//         {
//             cout<<i<<" ";
//         }

//     }

// }

// int main ()
// {
//     int value;
//     invertedNumber(5);

//     return 0;
// }








//*task13//pattern number
// #include<iostream>
// using namespace std;
// int NumberOfpattern (int &number)
// {
//     cout<<"please enter the number of pattern >> " ; cin>>number;
//     return number;
// }

// void  printPattern (int number)
// {
//    for (int i=1 ; i<=number ; i++)
//     {
//         for (int j=i ; j>=1;j--) //1>هل الجي اصغر من الخمسة؟ يروح يطبع خمس خمسات ثم تصير ال i قيمتها اربعة ويطبع اربع اربعات
//         {
//             cout<<i<<" ";
//         }

//     }
// }

// int main ()
// {
//     int value;
//     NumberOfpattern(value);
//     printPattern(value);


//     return 0;
// }


//*task14//????????????????????///
// #include<iostream>
// using namespace std;
// int NumberOfpattern (int &number)
// {
//     cout<<"please enter the number of pattern >> " ; cin>>number;
//     return number;
// }

// void  printPattern (int number)
// {
//    for (int i=1 ; i<=number ; i++)
//     {
//         for (int j=i ; j>=1;j--) //1>هل الجي اصغر من الخمسة؟ يروح يطبع خمس خمسات ثم تصير ال i قيمتها اربعة ويطبع اربع اربعات
//         {
//             cout<<char(i+64)<<" "<<endl;
//         }

//     }
// }

// int main ()
// {
//     int value;
//     NumberOfpattern(value);
//     printPattern(value);


//     return 0;
// }


// *task15//?????????????????????????????
// #include<iostream>
// using namespace std;
// int NumberOfpattern (int &number)
// {
//     cout<<"please enter the number of pattern >> " ; cin>>number;
//     return number;
// }

// void  printPattern (int number)
// {
//    for (int i=1 ; i<=number ; i++)
//     {
//         for (int j=i ; j>=1;j--) //1>هل الجي اصغر من الخمسة؟ يروح يطبع خمس خمسات ثم تصير ال i قيمتها اربعة ويطبع اربع اربعات
//         {
//             cout<<char(i+64)<<" "<<endl;
//         }

//     }
// }

// int main ()
// {
//     int value;
//     NumberOfpattern(value);
//     printPattern(value);


//     return 0;
// }




// *task16/prin pattern of letter
// #include<iostream>
// using namespace std;
// int NumberOfpattern (int &number)
// {
//     cout<<"please enter the number of pattern >> " ; cin>>number;
//     return number;
// }

// void  printPattern ()
// {
//    for (int i=65; i<=90 ; i++)
//     {
        
//         for (int j=65 ; j<=90;j++) //1>هل الجي اصغر من الخمسة؟ يروح يطبع خمس خمسات ثم تصير ال i قيمتها اربعة ويطبع اربع اربعات
//         {
//            cout<<char(i)<<""<<char(i) <<""<<char(j)<<endl;
//         }

//     }
// }

// int main ()
// {
   
//     printPattern();


//     return 0;
// }


//*task17/gues is password //idea 1
// #include<iostream>
// #include<string>
// using namespace std;


// void  checkThepassword ()
// {
//     int counter =0;
//     string Password = "1234";
//     string Comparepassword;
//     cout<<"please enter you pass ";
//     do
//     {
//          cout<<"please enter you pass for trial number >> "<<counter<<endl;
//         getline(cin,Comparepassword);
//         counter++;

        
//     } while ( Comparepassword !=Password);
  
    
// }

// int main ()
// {
   
//     checkThepassword();


//     return 0;
// }


//*task17//الفكرة هي اني ادخل رمز من ثلاث احرف كابيتال ويدخل بنيستد للوب عشان يشيك على مطابة الرمز وكم عدد المحاولة الي حصل فيها تطابق
// #include<iostream>
// #include <string>
// using namespace std;

// string CheckWethencapital ()
// {
//     string pass;
//     cout<<"please enter the pass >> " ; getline(cin,pass);
//     return pass;
// }
 

// bool  PrintTheCheckOfpass ()
// {
//      int trial =0;
//      string passs=CheckWethencapital();
//     string valueOfpass="";

//    for (int i=65; i<=90 ; i++)
//     {
//         for (int j=65 ; j<=90;j++)
//         {
//              for (int k=65 ; k<=90;k++)
//              {
//                                     trial ++;

//                 valueOfpass=valueOfpass+char(i);
//                 valueOfpass=valueOfpass+char(j);
//                 valueOfpass=valueOfpass+char(k);
//                 cout<<"trial "<<"[ " << trial <<" ] : "<<valueOfpass <<endl;
//                 if (passs ==valueOfpass )
//                 {
//                      cout<<"pasword is "<<valueOfpass <<"and the our program achive our goal after "<<trial <<"trial ";
//                      return true;
//                 }
                


//              }
        
         
//         }

//     }
// }

// int main ()
// {
//    string pass;
//    PrintTheCheckOfpass();
//     return 0;
// }


//*task18//my our solution
// #include<iostream>
// #include <string>
// using namespace std;



// //first>>read the name
// string ReadTheNameYouwantToEncrypt(string name)
// {
    
//     cout<<"please enter the name you want to encrypt it >> " ; getline(cin,name);
//     return name;
// }
 
// //then encrypt the our name//how ???? >>> 
// string  Encryptname ( string  namebeforeEncypt)
// {
//     string newNAmeisEncrypt = " "; //why i do it??i do it becaue i want from it to assign garbage name then i take the name i want it the change from original status to encrypt status ny assign the origninal with garbage name

//     for (int j=0,i=99 ; j<=namebeforeEncypt.length()&&i<=115;j++ ,i++)
//     {
//      newNAmeisEncrypt=newNAmeisEncrypt+char(i);
//       namebeforeEncypt=newNAmeisEncrypt;
//     }
    

//     return namebeforeEncypt;
// }


// //then deencrypt the our name
// string  DeEncryptname ( string  nameAfterEncypt)
// {
//      string nameTOdecrypt = " ";

//      for (int j=0,i=99 ; j<=nameAfterEncypt.length()&&i<=115;j++ ,i++)
//     {
//      nameTOdecrypt=nameTOdecrypt-char(i);
//       nameAfterEncypt=nameTOdecrypt;
//     }

//     return nameAfterEncypt;
    
// }

// int main ()
// {
//     string name=" ";
//     string nameBeforeencypt =ReadTheNameYouwantToEncrypt(name);
    
//     cout<<"the name before encrypt is " <<nameBeforeencypt;

//     cout<<"\n------------------NOW WE WILL DO THE OUR OPERATION TO ENCRYPT OUR NAME (: -----------------\n\n";

//     cout << "the name after encrypt >> "<<Encryptname(nameBeforeencypt);
//     cout<<"the name after deencrypt " << DeEncryptname(Encryptname(nameBeforeencypt));

//     return 0;
// }


//TASK19
// #include<iostream>
// #include <string>
// using namespace std;



// //first>>read the name
// string ReadTheNameYouwantToEncrypt(string originalName)
// {
    
//     cout<<"please enter the name you want to encrypt it >> " ; getline(cin,originalName);
//     return originalName;
// }
 
// //then encrypt the our name//how ???? >>> اني اخذ الاسم الحقيقي وازيد عليه 2, ليش؟ لاني بزيادتي 2 كاني اقوله انتقل لحرفين زيادة  ثم يقوم يتغير  ويعين الحرف الي راحله بدل الحرف الاول الي بالاسم حتى يصل لنهاية لنهاية طول الاسم
// string  Encryptname ( string  originalName)
// {
//     for ( int i=0 ; i<originalName.length();i++)
//     {
//         originalName[i]=originalName[i]+50; //هدف الزيادة هو اني ابدل مكان الحرف الاول بالاسم خمسين حرف قدام وهكذا حتى يصل للنهاية
//     }
    

//     return originalName;
// }


// //then deencrypt the our name // كيف ؟؟ عكس التشفير تماما
// string  DeEncryptname ( string  originalName)
// {
//     for ( int i=0 ; i<originalName.length();i++)
//     {
//         originalName[i]=originalName[i]-50;
//     }
    

//     return originalName;
    
// }

// int main ()
// {
//     string name=" ";
//     string nameBeforeencypt =ReadTheNameYouwantToEncrypt(name);
    
//     cout<<"the name before encrypt is : " <<nameBeforeencypt;

//     cout<<"\n------------------NOW WE WILL DO THE OUR OPERATION TO ENCRYPT OUR NAME (: -----------------\n\n";

//     cout << "the name after encrypt >> "<<Encryptname(nameBeforeencypt)<<endl;
//     cout<<"the name after deencrypt " << DeEncryptname(Encryptname(nameBeforeencypt))<<endl;

//     return 0;
// }




//TASk20
// #include <iostream>
// #include <stdlib.h>
// #include <ctime>

// using namespace std;

// void mainFunctionTodoThetask(int range)
// {

// srand(time(NULL)); //why inside function time is null?? it can be zero and null , but why???
// //or you can write as >>>> srand(unsigned)time(NULL)
//     for (int i=1;i<=range;i++)
//     {
//         cout<<rand()%10+1<<endl; //الواحد ضمان انه ماياخذ الصفر ك رقم عشوائي والعشرة ضمان انه مايطلع لي رقم اكبر من عشرة
        // rand () & (to -from +1 )+from
//         //why generate random number mod (10+1)??مثل ماعرف باقي القسمة من عدد كبير , راح يطلع عندي على طول الرقم الاصغر وبلس ون تعني اني ابغى اراقم عشوائية من 1 الى 10 لو ماحطيت واحد راح يعطيني من 0 الى 9
//         //

//         //for example ,, the function rand give for example at first iteration >>938736 >> when i said &10 >> its like i am trying to say take the last number and her the last number is 6 , the he print the fist iteration by take an random number
//        // والى اخرة
//     }


// }

// int main ()
// {
//     int range=0;
//     //here we sign the value of range
//     cout<<"please enter the range you want to make the loop with range ";
//     cin>>range;
//     mainFunctionTodoThetask(range);





// }


//task21//this my our solution and thier another solution by use enumaration type
// #include <iostream>
// #include <stdlib.h>
// #include <ctime>
// using namespace std;

// //first>> we shall to take an order from user to print same of it
// void correspongOrder(int range ,int numberCorresponf , char charCorrespondSmall , char charCorrespondCapital , char CorrespondSpecialchar)
// {

        // srand ((unsigned)time(NULL));
//     for (int i=1;i<=range;i++)
//     {
//         cout<<"the correspond number for " << numberCorresponf<<" is: "<< rand() % (57-48+1)+48<<endl; //for number
    
//         cout<<"the correspond small leter for " << charCorrespondSmall<<" is: "<<char(rand () & (122 -97 +1 )+97)<<endl; //for small letter

//          cout<<"the correspond capital number for " << charCorrespondCapital<<" is: "<<char(rand () & (90 -65 +1 )+65)<<endl; //for capital letter

//         cout<<"the correspond spcial char  for " << CorrespondSpecialchar<<" is: "<<char(rand() % (47-33+1)+33)<<endl; //for special letter

//     }



// }




// int main ()
// {
//     int range =0;
//     cout<<"enter the range ? " ; cin>>range;

//     int numberCorresponf=0;
//     cout<<"enter the numberCorresponf ? " ; cin>>numberCorresponf;

//     char charCorrespondSmall;
//      cout<<"enter the charCorrespond to small ? " ; cin>>charCorrespondSmall;

//     char charCorrespondCapital;
//    cout<<"enter the charCorrespond to capital ? " ; cin>>charCorrespondCapital;
 
//     char CorrespondSpecialchar;
//      cout<<"enter the charCorrespond to special ? " ; cin>>CorrespondSpecialchar;

//      cout<<"----------------------------------"<<endl;

    


//     correspongOrder(range,numberCorresponf,charCorrespondSmall,charCorrespondCapital,CorrespondSpecialchar);



//     return 0;
// }

//task21//by use enumration type
// #include <iostream>
// #include <stdlib.h>
// #include <ctime>
// using namespace std;

// enum diffPrintChar {number=1 , SmallChar=2 , CapitalChar=3, SpecialChar=4};

// int RandoNumber(int from , int to)
// {
//     int Random=rand() % (from-to+1)+to;
//     return Random;
// }

// char print_different_case(diffPrintChar different_Case)
// {
//     switch (different_Case)
//     {
//         case diffPrintChar::number:
//         return RandoNumber(48,58);
//         break;

//          case diffPrintChar::SmallChar:
//         return RandoNumber(97,122);
//         break;

//          case diffPrintChar::CapitalChar:
//         return RandoNumber(65,90);
//         break;

//          case diffPrintChar::SpecialChar:
//         return RandoNumber(33,47);
//         break;
//     }

// }

// int main ()
// {
//     srand ((unsigned)time(NULL));
//     cout<<print_different_case(diffPrintChar::number)<<endl;
//     cout<<print_different_case(diffPrintChar::SmallChar)<<endl;
//     cout<<print_different_case(diffPrintChar::CapitalChar)<<endl;
//     cout<<print_different_case(diffPrintChar::SpecialChar)<<endl;
//     return 0;
// }






//task22//generate a key//i dont solve it like he want but i did it to generate an number
// #include <iostream>
// #include <stdlib.h>
// #include <ctime>
// using namespace std;

// int RandoNumber(int from , int to)
// {
//     int Random=rand() % (from-to+1)+to;
//     return Random;
// }

// //first>> we shall to take an order from user to print same of it
// void correspongOrder(int NumberOfkey)
// {
//     int numnerOfkey=1;

        
//     for (int i=1;i<=NumberOfkey;i++)
//     {
    
//         cout<<"key number ( " << numnerOfkey<<" ) is: "<<rand () % (char) RandoNumber(90,65)<<"-"; //for capital letter
//         cout<<rand () %(char) RandoNumber(90,65) <<"-"; //for capital letter
//          cout<<rand () % (char) RandoNumber(90,65)<<"-"; //for capital letter
//          cout<<rand() %(char) RandoNumber(90,65) <<"-"; //for capital letter
//          cout<<endl;

//         numnerOfkey++;


//     }



// }




// int main ()
// {
//     srand ((unsigned)time(NULL));
//     int NumberOfkey =0;
//     cout<<"enter how many key you want to generate ? " ; cin>>NumberOfkey;


    


//     correspongOrder(NumberOfkey);



//     return 0;
// }
 

//task22
// #include <iostream>
// using namespace std;


// int readNumber ()
// {
//     int number;
//     cout<<"enter the cecker number ?\n";
//      cin>>number;
//     return number;

// }

// int readlingth (int &length)
// {
//     cout<<" enter the length of array? " ; cin>>length;
//     return length;

// }


// void ReadArray(int arr1[100],int &length)
// {
//     cout<<"enter the element of array :\n";
//     for (int i=0 ; i<=length ; i++)
//     {
//         cout<<"element [ "<<i<<" ]";
//         cin>>arr1[i];
//     }
// }

// void PrintArray(int arr1[100],int &length)
// {
    
   
//     for (int i=0; i<=length ;i++)
//     {
//     cout<<arr1[i];
//     }


// }

// int checkTherepeaterNumber(int arr1[100],int& length)
// {
//     int counter=0;
//     int number =readNumber();
   
//     for (int i=0; i<=length ;i++)
//     {
//     if(number ==arr1[i])
//     counter ++;
//     }
// return counter;

// }

// int main ()
// {
//     int length,arr1[100];
//     readlingth(length);
//     ReadArray(arr1,length);
//     cout<<"---------we finished from reading now we will start to make the operation-------\n";

//     cout<<"the original array is [";
//     PrintArray(arr1,length);
//     cout<<"]\n";

//     cout<<"its repeated by>> "<<checkTherepeaterNumber(arr1,length)<<" time";

//     return 0 ;
// }


// //*task23//first solution
// #include<iostream>
// #include <stdlib.h>
// #include <ctime>
// using namespace std;

// void fillRandomNumberWitharray()
// {
//         int fillRandomArray[100];
//         int TheRandomElement[100];
//         for (int i=rand()% (1-100+1)+100;i<100;i++)
//         {
//              TheRandomElement[100]=fillRandomArray[i];
//              cout<<TheRandomElement[i];
               
//         }
// }


// int main ()
// {
//  srand ((unsigned)time(NULL));
// fillRandomNumberWitharray();


//         return 0;
// }


//*task23//second solution
// #include<iostream>
// #include <stdlib.h>
// #include <ctime>
// using namespace std;

// int generateRandomNumber (int from , int to)
// {
//         int randomm;

//         randomm = rand() % (to-from+1)+from;
//         return randomm;

// }

// void fillRandomNumberWitharrayANDprint it()
// {
//         int fillRandomArray[100];
        
//         for (int i=0;i<100;i++)
//         {
//              fillRandomArray[i]=generateRandomNumber(1,100);
  
          
               
//         }

//           for (int i=0;i<100;i++)
//         {
             
//              cout<<fillRandomArray[i]<<endl;
               
//         }



// }


// int main ()
// {
//  srand ((unsigned)time(NULL));
// fillRandomNumberWitharray();


//         return 0;
// }


//*task24//max of random array
// #include<iostream>
// #include <stdlib.h>
// #include <ctime>
// using namespace std;

// int generateRandomNumber (int from , int to)
// {
//         int randomm;

//         randomm = rand() % (to-from+1)+from;
//         return randomm;

// }

// void fillRandomNumberWitharrayANDprintThemaxone ()
// {
//         int fillRandomArray[100];
//         int range;
        
        
//         for (int i=0;i<5;i++)
//         {
//              fillRandomArray[i]=generateRandomNumber(1,10);
  
          
               
//         }
//         int max=0;

//           for (int i=0;i<10;i++)
//         {
             
//              cout<<fillRandomArray[i]<<endl;

//              if(fillRandomArray[i]>max)
//              {
//              max=fillRandomArray[i];
             
//              }

             
               
//         }
//         cout<<"and the max number is " <<max;



// }


// int main ()
// {
//  srand ((unsigned)time(NULL));
// fillRandomNumberWitharrayANDprintThemaxone();


//         return 0;
// }

//*task25//find the min number at random array
// #include<iostream>
// #include <stdlib.h>
// #include <ctime>
// using namespace std;

// int generateRandomNumber (int from , int to)
// {
//         int randomm;

//         randomm = rand() % (to-from+1)+from;
//         return randomm;

// }


// int setlength (int &length)
// {
//         cout<<"please enter the length of array ? " ; cin>>length;
//         return length;
// }

// int fillRandomNumberWitharrayANDprintTheMIN(int fillRandomArray[100] ,int &length )
// {
      
        
//         //first we must to fill the aor array with random number
//         for (int i=0;i<length;i++)
//         {
//              fillRandomArray[i]=generateRandomNumber(1,100);
  
          
               
//         }

//         int min=fillRandomArray[0];

//           for (int i=0;i<length;i++)
//         {
             
//              cout<<fillRandomArray[i]<<endl;

//              if(min>fillRandomArray[i])
//              {
//              min=fillRandomArray[i];
             
//              }

             
               
//         }
        
//        return min;



// }


// int main ()
// {
//  srand ((unsigned)time(NULL));

//  int array[100];
//  int length;

//  setlength(length);

// cout<<"the min number is " << fillRandomNumberWitharrayANDprintTheMIN(array,length);


//         return 0;
// }


// //*task26//sum of random array
// #include<iostream>
// #include <stdlib.h>
// #include <ctime>
// using namespace std;

// int generateRandomNumber (int from , int to)
// {
//         int randomm;

//         randomm = rand() % (to-from+1)+from;
//         return randomm;

// }


// int setlength (int &length)
// {
//         cout<<"please enter the length of array ? " ; cin>>length;
//         return length;
// }

// int fillRandomNumberWitharrayANDprintTheMIN(int fillRandomArray[100] ,int &length )
// {
      
        
//         //first we must to fill the aor array with random number
//         for (int i=0;i<length;i++)
//         {
//              fillRandomArray[i]=generateRandomNumber(1,100);
  
          
               
//         }

//         int sum =0;

//           for (int i=0;i<length;i++)
//         {
//              cout<<"the number "<< i <<fillRandomArray[i]<<endl;;
//             sum+=fillRandomArray[i];
             
//              }

             
               
        
        
//        return sum;



// }



// int main ()
// {
//  srand ((unsigned)time(NULL));

//  int array[100];
//  int length;

//  setlength(length);

// cout<<"the sum of number number is " << fillRandomNumberWitharrayANDprintTheMIN(array,length);


//         return 0;
// }



//*task27//sum of random array
// #include<iostream>
// #include <stdlib.h>
// #include <ctime>
// using namespace std;

// int generateRandomNumber (int from , int to)
// {
//         int randomm;

//         randomm = rand() % (to-from+1)+from;
//         return randomm;

// }


// int setlength (int &length)
// {
//         cout<<"please enter the length of array ? " ; cin>>length;
//         return length;
// }

// double fillRandomNumberWitharrayANDprintTheAVG(int fillRandomArray[100] ,int &length )
// {
      
        
//         //first we must to fill the aor array with random number
//         for (int i=0;i<length;i++)
//         {
//              fillRandomArray[i]=generateRandomNumber(1,100);
  
          
               
//         }


//         //after we assign a random variable then we must go to make an operation
//         int sum =0;
//         double avg;
        
//           for (int i=0;i<length;i++)
//         {
//              cout<<"the number "<< i <<fillRandomArray[i]<<endl;;
//             sum+=fillRandomArray[i];
             
//              }
//              avg=sum/length;
             

             
               
        
        
//        return avg;



// }



// int main ()
// {
//  srand ((unsigned)time(NULL));

//  int array[100];
//  int length;

//  setlength(length);

// cout<<"the average of the number is " << fillRandomNumberWitharrayANDprintTheAVG(array,length);


//         return 0;
// }




//*task28//coppy an  array
// #include<iostream>
// #include <stdlib.h>
// #include <ctime>
// using namespace std;

// int generateRandomNumber (int from , int to)
// {
//         int randomm;

//         randomm = rand() % (to-from+1)+from;
//         return randomm;

// }


// int setlength (int &length)
// {
//         cout<<"please enter the length of array ? " ; cin>>length;
//         return length;
// }

// double fillRandomNumberWitharrayANDprintTheAVG(int fillRandomArray[100] ,int &length )
// {
      
        
//         //first we must to fill the aor array with random number
//         for (int i=0;i<length;i++)
//         {
//              fillRandomArray[i]=generateRandomNumber(1,100);
  
          
               
//         }


//         //after we assign a random variable then we must go to make an operation
//         int sum =0;
//         double avg;
        
//           for (int i=0;i<length;i++)
//         {
//              cout<<"the number "<< i <<fillRandomArray[i]<<endl;;
//             sum+=fillRandomArray[i];
             
//              }
//              avg=sum/length;
             

             
               
        
        
//        return avg;



// }



// int main ()
// {
//  srand ((unsigned)time(NULL));

//  int array[100];
//  int length;

//  setlength(length);

// cout<<"the average of the number is " << fillRandomNumberWitharrayANDprintTheAVG(array,length);


//         return 0;
// }

//31>>copy 2 array

// #include<iostream>
// #include <stdlib.h>
// #include <ctime>
// using namespace std;

// int generateRandom (int from , int to )
// {
//         int rrand;

//         rrand= rand() %(to-from+1)+from;

//         return rrand;
// }

// int fillArr(int arr[100], int arr2 [100] ,  int arr3[100], int &length)
// {
//         for (int i=0; i<length ;i++)
//         {
//                 cin>>arr[i];
                
//         }
//                 cout<<"for array 1"<<endl;
//          for (int i=0; i<length ;i++)
//         {
//                 cout<<arr[i] <<" ";
                
//         }

//         for (int i=0; i<length ;i++)
//         {
//                 cin>>arr2[i];
                
//         }

//                  cout<<"for array 2"<<endl;
//          for (int i=0; i<length ;i++)
//         {
//                 cout<<arr2[i]<<endl<<" ";
                
//         }




       
        
        
//           for (int i=0; i<length ;i++)
//         {
//                 arr3[i]= arr[i]+arr2[i];
//         }
//         cout<<"the sum of all the array is ";

//          for (int i=0; i<length ;i++)
//         {
//                 cout<< arr3[i]<<endl;
//         }

//         return 0 ;
        




// }

// int main ()
// {
//         int array[100];
//         int array1[100];
//          int arr3[100];
//         int length;
//         cin >> length;

//         cout<<fillArr(array,array1,arr3,length);

// }


//
// #include <iostream>
// #include <stdlib.h>
// #include <ctime>
// using namespace std;

// int generateRandomNumber (int from , int to)
// {
//         int randomm;

//         randomm = rand() % (to-from+1)+from;
//         return randomm;

// }

// int fillarray(int arr[100] ,int arr2[100], int &length)
// {
        
//         for (int i=0 ; i<length ; i++)
//         {
//                 arr[i]=i+1;

//         }
//         cout<<" element before shuffle ";
//         for (int i=0 ; i<length ; i++)
//         {
//                 cout<<arr[i]<<" ";
//         }

//         for (int i=length ; i>0 ; i--)
//         {
//               arr2[i]=arr[i+1];
//         }

//          cout<<"\n element after shuffle "<<endl;
//         for (int i=0 ; i<length ; i++)
//         {
//                 cout<<arr2[i]<<" ";
//         }


        
        


//         return 0;


// }







// int main ()
// {
//  srand ((unsigned)time(NULL));

//         int arr[100];
//         int arr1[100];
//         int length;
//         cout<<"enter the length \n";
//         cin>>length;
//         cout<<"\n"<<fillarray(arr,arr1,length);




// }

//32>>>print array in reverse 
// #include <iostream>
// #include <stdlib.h>
// #include <ctime>
// using namespace std;

// int generateRandomNumber (int from , int to)
// {
//         int randomm;

//         randomm = rand() % (to-from+1)+from;
//         return randomm;

// }


// void fillarray (int array1[100], int &length)
// {
//         for (int i=0; i<length ; i++)
//         {
//                 array1[i]=generateRandomNumber(1,100);

//         }

//          cout<<"the array before reverse it !\n";
//         for (int i=0 ; i<length;i++)
//         {
//                  cout<<array1[i]<<" ";


//         }

//         return;

// }

// void reversearray(int array1[100], int &length)
// {
//         int arraycopy[100];
//           int number =1;   
//         int Reminder=0,number2=0;


//         for (int i=length-1 ; i>=0;i--)
//         {
//                 //  Reminder=array1[i]%10;
//                 // number=number/10;
//                 // number2=number2*10+Reminder;
//                 // arraycopy[i]=number2;
//                 // arraycopy[i]=array1[length-1-i];
//                arraycopy[i] = array1[length - 1 - i];




//         }
//         cout<<"\nthe array after reverse it !\n";
//         for (int i=0 ; i<length;i++)
//         {
//                  cout<<arraycopy[i]<<" ";


//         }
        
        
        
// }


// int main ()
// {
//  srand ((unsigned)time(NULL));

//         int arr[100];
//         int arr1[100];
//         int length;
//         cout<<"enter the length \n";
//         cin>>length;
//         //1>> fill the array with random number
//         fillarray(arr,length);
//          reversearray(arr,length);


        


// }












//34 generate key word
// #include <iostream>
// #include <stdlib.h>
// #include <ctime>
// using namespace std;

// char generateRandomNumber (int from , int to)
// {
//         char randomm;

//         randomm = rand() % (to-from+1)+from;
//         return randomm;

// }


// string generateWord (int lengthOfWord)
// {
//         string word;
//         for (int i=0; i<lengthOfWord ; i++)
//         {
//                 word=generateRandomNumber(1,100);

//         }

        
//         return word;

// }

// void gernerateWordinarray(string array1[100], int &length)
// {
//         for (int i=0;i<length ; i++)
//         {
//                 array1[i]=generateWord(5);
//         }

//           for (int i=0;i<length ; i++)
//         {
//                 cout << "the KW no " << i << " is : " << array1[i]<<endl;
//         }





// }



// int main ()
// {
//  srand ((unsigned)time(NULL));

//         string arr[100];
//         int length;
//         cout<<"enter the length \n";
//         cin>>length;
//         //1>> fill the array with random number
//         gernerateWordinarray(arr,length);


        


// }


//34&35>>all same 
// #include <iostream>
// #include <stdlib.h>
// #include <ctime>
// using namespace std;

// int generateRandomNumber (int from , int to)
// {
//         int randomm;

//         randomm = rand() % (to-from+1)+from;
//         return randomm;

// }




// void generarerandomnumber(int array1[100], int &length)
// {
//         for (int i=0;i<length ; i++)
//         {
//                 array1[i]=generateRandomNumber(1,50);
//         }



// }

// int readNumber()
// {
//          int numberThatweWantToSearch;
//         cout<<"\nplease enter the number you looking for \n";
//         cin>>numberThatweWantToSearch;

//         return numberThatweWantToSearch;

// }


// bool searchAlgorithm(int array1[100], int &length)
// {
//         cout<<"the element of array is\n";
//         for (int i=0;i<length ; i++)
//         {
//                 cout<<array1[i]<<" ";
//         }

//         //search algorithm
//         int number=readNumber();
//         // int numberThatweWantToSearch;
//         // cout<<"\nplease enter the number you looking for \n";
//         // cin>>numberThatweWantToSearch;
      

//         for (int i=0;i<length ; i++)
//         {
                
//                 if(number == array1[i])
//                 {
//                         return true;
//                         // cout<<"the index of number you looking for is >>> "<<i<<endl;
//                         // cout<<"and , the number found in order>>>  "<<i+1;
//                 }

                        
                
                
                
//         }

//         return false;

// }

// int checkFLag(int flag)
// {
//         if (flag==true)
//         cout<<"we found the number we search it !";

//         else
//         cout<<"we dont found the number we search about it";
// }



// int main ()
// {
//  srand ((unsigned)time(NULL));

//         int arr[100];
//         int length;
//         cout<<"enter the length \n";
//         cin>>length;
//         //1>> fill the array with random number
//         generarerandomnumber(arr,length);
//         int flags1 = searchAlgorithm(arr,length);
//         checkFLag(flags1);


        


// }

//37
// #include <iostream>
// #include <stdlib.h>
// #include <ctime>
// using namespace std;



// int AddElement(int array1[100], int & length)
// {
//         int answer;
//         int number;
//         length=0;
//                 do
//                 {
                        

//                          cout<<" add the number :"<<endl;
//                         cin>>number;
//                         array1[length]=number;

//                         length++;
//                         cout<<"do you want to add  more elemnt? :"<<endl;
//                         cin>>answer;
                        

                       
//                 } while (answer !=0); //sentinal value 

//                 return length;
                
                
//         }


        







// int printElement(int array1[100], int &length)
// {
//    int lengthOfarray;
//         cout<<"the array element:\n";
//         for (int i=0;i<length ; i++)
//         {
//                 cout<<array1[i]<<" ";
//                 lengthOfarray=i+1; 
                
//         }
//         cout<< "\nlength of array is : "<<lengthOfarray;


   

// }



// int main ()
// {
//  srand ((unsigned)time(NULL));

//         int arr[100];
//         int length;
//         length=0;
//         AddElement(arr,length);
//         printElement(arr,length);
   
     

// }









//copy odd number
// #include <iostream>
// #include <stdlib.h>
// #include <ctime>
// using namespace std;

// int generateRandomNumber (int from , int to)
// {
//         int randomm;

//         randomm = rand() % (to-from+1)+from;
//         return randomm;

// }




// void fillArray(int array1[100], int &length)
// {
//         for (int i=0;i<length ; i++)
//         {
//                 array1[i]=generateRandomNumber(1,50);
//         }



// }




// void coppyOddNumber (int array1[100], int &length)
// {
//         int array2[100];


//         for (int i=0;i<length ; i++)
//         {
//                 cout <<array1[i]<<" ";
         
        
//         }

//         cout<<"\ncopy the odd number\n";

//         for (int i=0;i<length ; i++)
//         {
                
//                 if(array1[i] % 2 !=0)
//                 {
//                 array2[i]=array1[i];
//                 cout << array2[i]<<" "; 

//                 }
                
               
                
//         }
                
        



// }



// int main ()
// {
//  srand ((unsigned)time(NULL));

//         int arr[100];
//         int length;
//         cout<<"enter the length \n";
//         cin>>length;
//         //////////
//         fillArray(arr,length);
//         coppyOddNumber(arr,length);


       


        


// }




#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;

int generateRandomNumber (int from , int to)
{
        int randomm;

        randomm = rand() % (to-from+1)+from;
        return randomm;

}




void fillArray(int array1[100], int &length)
{
        for (int i=0;i<length ; i++)
        {
                array1[i]=generateRandomNumber(1,50);
        }



}




void coppyOddNumber (int array1[100], int &length)
{
        int array2[100];


        for (int i=0;i<length ; i++)
        {
                cout <<array1[i]<<" ";
         
        
        }

        cout<<"\ncopy the odd number\n";

        for (int i=0;i<length ; i++)
        {
                
                if(array1[i] % 2 !=0)
                {
                array2[i]=array1[i];
                cout << array2[i]<<" "; 

                }
                
               
                
        }
                
        



}



int main ()
{
 srand ((unsigned)time(NULL));

        int arr[100];
        int lengthhhh;
        cout<<"enter the length \n";
        cin>>lengthhhh;
        //////////
        fillArray(arr,lengthhhh);
        coppyOddNumber(arr,lengthhhh);


       
/////////////hiiiiiiiiiiiiiiiiiii

        


}




