#include <iostream>
#include "clsString.h"
#include "clsDate.h"
#include "clsPeriod.h"
#include "clsUtil.h"
#include "clsInputValidate.h"
using namespace std;

int main()

{
    clsString String1;


    clsString String2("Yousssef");

    String1.Value = "Ali Ahmed";

    cout << "String1 = " << String1.Value << endl;
    cout << "String2 = " << String2.Value << endl;

    cout << "Number of words: " << String1.CountWords() << endl;

    cout << "Number of words: " << String1.CountWords("Fadi ahmed rateb omer") << endl;

    cout << "Number of words: " <<
        clsString::CountWords("Youssef Mohammed") << endl;

    //----------------
    clsString String3("hi how are you?");

    cout << "String 3 = " << String3.Value << endl;

    cout << "String Length = " << String3.Length() << endl;

    String3.UpperFirstLetterOfEachWord();
    cout << String3.Value << endl;

    //----------------

    String3.LowerFirstLetterOfEachWord();
    cout << String3.Value << endl;

    //----------------

    String3.UpperAllString();
    cout << String3.Value << endl;

    //----------------

    String3.LowerAllString();
    cout << String3.Value << endl;

    //----------------

    cout << "After inverting a : "
        << clsString::InvertLetterCase('a') << endl;

    //----------------

    String3.Value = "AbCdEfg";

    String3.InvertAllLettersCase();
    cout << String3.Value << endl;

    String3.InvertAllLettersCase();
    cout << String3.Value << endl;

    //----------------

    cout << "Capital Letters count : "
        << clsString::CountLetters("Youssef Mohammed", clsString::CapitalLetters)
        << endl << endl;

    //----------------

    String3.Value = "Welcome to Jordan";
    cout << String3.Value << endl;

    cout << "Capital Letters count :" << String3.CountCapitalLetters() << endl;

    //----------------

    cout << "Small Letters count :" << String3.CountSmallLetters() << endl;

    //----------------

    cout << "vowels count :" << String3.CountVowels() << endl;

    //----------------

    cout << "letter E count :" << String3.CountSpecificLetter('E', false) << endl;

    //----------------

    cout << "is letter u vowel? " << clsString::IsVowel('a')
        << endl;

    //----------------

    cout << "Words Count" << String3.CountWords()
        << endl;

    //----------------


    vector<string> vString;

    vString = String3.Split(" ");

    cout << "\nTokens = " << vString.size() << endl;

    for (string& s : vString)
    {
        cout << s << endl;
    }

    //----------------

    //Tirms
    String3.Value = "    Youssef Mohammed     ";
    cout << "\nString     = " << String3.Value;

    String3.Value = "    Youssef Mohammed     ";
    String3.TrimLeft();
    cout << "\n\nTrim Left  = " << String3.Value;

    //----------------

    String3.Value = "    Youssef Mohammed     ";
    String3.TrimRight();
    cout << "\nTrim Right = " << String3.Value;

    //----------------

    String3.Value = "    Youssef Mohammed    ";
    String3.Trim();
    cout << "\nTrim       = " << String3.Value;

    //----------------

    //Joins
    vector<string> vString1 = { "Mohammed","Faid","Ali","Maher" };

    cout << "\n\nJoin String From Vector: \n";
    cout << clsString::JoinString(vString1, " ");


    string arrString[] = { "Mohammed","Faid","Ali","Maher" };

    cout << "\n\nJoin String From array: \n";
    cout << clsString::JoinString(arrString, 4, " ");

    //----------------

    String3.Value = "Youssef Mohammed";
    cout << "\n\nString     = " << String3.Value;

    String3.ReverseWordsInString();
    cout << "\nReverse Words : " << String3.Value
        << endl;

    //---------------

    String3.Value = "Youssef Mohammed";
    cout << "\nReplace : " << String3.ReplaceWord("Mohammed", "Sari")
        << endl;

    //---------------

    String3.Value = "This is: a sample text, with punctuations.";
    cout << "\n\nString     = " << String3.Value;

    String3.RemovePunctuations();
    cout << "\nRemove Punctuations : " << String3.Value
        << endl;

    //---------------

    clsDate Date1;
    Date1.Print();

    clsDate Date2("31/1/2022");
    Date2.Print();

    clsDate Date3(20, 12, 2022);
    Date3.Print();

     clsDate Date4(250, 2022);
     Date4.Print();

     Date1.IncreaseDateByOneMonth();
     Date1.Print();

        //Date3.PrintYearCalendar();
        //cout << Date2.IsValid() << endl;

        /*cout << "My Age InDays:" <<
            clsDate::CalculateMyAgeInDays(  clsDate(6, 11, 1977) );*/
            //You can try any method at your own..

     clsPeriod Period1(clsDate(1, 1, 2022), clsDate(10, 1, 2022));
     Period1.Print();

     cout << "\n";

     clsPeriod Period2(clsDate(3, 1, 2022), clsDate(5, 1, 2022));
     Period2.Print();


     //You can check like this
     cout << Period1.IsOverLapWith(Period2) << endl;


     //Also you can call the static method and send period 1 and period 2
     cout << clsPeriod::IsOverlapPeriods(Period1, Period2) << endl;


     clsUtil::Srand();
     cout << clsUtil::RandomNumber(1, 10) << endl;
     cout << clsUtil::GetRandomCharacter(clsUtil::CapitalLetter) << endl;
     cout << clsUtil::GenerateWord(clsUtil::MixChars, 8) << endl;
     cout << clsUtil::GenerateKey(clsUtil::MixChars) << endl;
     clsUtil::GenerateKeys(10, clsUtil::MixChars);

     cout << "\n";

     //Swap Int
     int x = 10, y = 20;
     cout << x << " " << y << endl;
     clsUtil::Swap(x, y);
     cout << x << " " << y << endl << endl;

     //Swap double
     double a = 10.5, b = 20.5;
     cout << a << " " << b << endl;
     clsUtil::Swap(a, b);
     cout << a << " " << b << endl << endl;

     //Swap String
     string s1 = "Ali", s2 = "Ahmed";
     cout << s1 << " " << s2 << endl;
     clsUtil::Swap(s1, s2);
     cout << s1 << " " << s2 << endl << endl;

     //Swap Dates
     clsDate d1(1, 10, 2022), d2(1, 1, 2022);
     cout << d1.DateToString() << " " << d2.DateToString() << endl;
     clsUtil::Swap(d1, d2);
     cout << d1.DateToString() << " " << d2.DateToString() << endl;

     //Shuffl Array

     //int array
     int Arr1[5] = { 1,2,3,4,5 };
     clsUtil::ShuffleArray(Arr1, 5);
     cout << "\nArray after shuffle:\n";
     for (int i = 0; i < 5; i++)
     {
         cout << Arr1[i] << endl;
     }

     //string array
     string Arr2[5] = { "Ali","Fadi","Ahmed","Qasem","Khalid" };
     clsUtil::ShuffleArray(Arr2, 5);
     cout << "\nArray after shuffle:\n";
     for (int i = 0; i < 5; i++)
     {
         cout << Arr2[i] << endl;
     }

     int Arr3[5];
     clsUtil::FillArrayWithRandomNumbers(Arr3, 5, 20, 50);
     cout << "\nArray after fill:\n";
     for (int i = 0; i < 5; i++)
     {
         cout << Arr3[i] << endl;
     }


     string Arr4[5];
     clsUtil::FillArrayWithRandomWords(Arr4, 5, clsUtil::MixChars, 8);
     cout << "\nArray after fill:\n";
     for (int i = 0; i < 5; i++)
     {
         cout << Arr4[i] << endl;
     }


     string Arr5[5];
     clsUtil::FillArrayWithRandomKeys(Arr5, 5, clsUtil::MixChars);
     cout << "\nArray after filling keys:\n";
     for (int i = 0; i < 5; i++)
     {
         cout << Arr5[i] << endl;
     }

     cout << "\nText1 " << clsUtil::Tabs(5) << "Text2\n";

     const short EncryptionKey = 2; //this is the key.

     string TextAfterEncryption, TextAfterDecryption;
     string Text = "Youssef Mohammed";
     TextAfterEncryption = clsUtil::EncryptText(Text, EncryptionKey);
     TextAfterDecryption = clsUtil::DecryptText(TextAfterEncryption, EncryptionKey);

     cout << "\nText Before Encryption : ";
     cout << Text << endl;
     cout << "Text After Encryption  : ";
     cout << TextAfterEncryption << endl;
     cout << "Text After Decryption  : ";
     cout << TextAfterDecryption << endl;


     cout << clsInputValidate::IsNumberBetween(5, 1, 10) << endl;
     cout << clsInputValidate::IsNumberBetween(5.5, 1.3, 10.8) << endl;

     cout << clsInputValidate::IsDateBetween(clsDate(),
         clsDate(8, 12, 2022),
         clsDate(31, 12, 2022)) << endl;

     cout << clsInputValidate::IsDateBetween(clsDate(),
         clsDate(31, 12, 2022),
         clsDate(8, 12, 2022)) << endl;

     cout << "\nPlease Enter a Number:\n";
     int X = clsInputValidate::ReadIntNumber("Invalid Number, Enter again:\n");
     cout << "X=" << X;

     cout << "\nPlease Enter a Number between 1 and 5:\n";
     int Y = clsInputValidate::ReadIntNumberBetween(1, 5, "Number is not within range, enter again:\n");
     cout << "Y=" << Y;

     cout << "\nPlease Enter a Double Number:\n";
     double A = clsInputValidate::ReadDblNumber("Invalid Number, Enter again:\n");
     cout << "a=" << A;

     cout << "\nPlease Enter a Double Number between 1 and 5:\n";
     double B = clsInputValidate::ReadDblNumberBetween(1, 5, "Number is not within range, enter again:\n");
     cout << "B=" << B;

     cout << endl << clsInputValidate::IsValideDate(clsDate(35, 12, 2022)) << endl;

    system("pause>0");
    return 0;
};

