#include <iostream>

using namespace std;

int main()
{
    int total;
    cout << "Total student: ";
    cin >> total;
    int none;
    cout << "Number of student who don't know none of the Language: ";
    cin >> none;
    int total_with_none = total - none;

    int E;
    cout << "Number of student who know English: ";
    cin >> E;
    int F;
    cout << "Number of student who know French: ";
    cin >> F;
    int G;
    cout << "Number of student who know German: ";
    cin >> G;

    int E_and_F;
    cout << "Number of student who know English and French: ";
    cin >> E_and_F;
    int F_and_G;
    cout << "Number of student who know French and German: ";
    cin >> F_and_G;
    int E_and_G;
    cout << "Number of student who know English and German: ";
    cin >> E_and_G;

    int all_three_lang = 0;

    all_three_lang = total_with_none - (E + F + G - E_and_F - F_and_G - E_and_G);

    int exactly_two_lang = E_and_F + F_and_G + E_and_G - 3 * all_three_lang;

    /* For Finding only one Language*/
    int  Only_E_and_F = 37 - 12;
    int  Only_F_and_G = 28 - 12;
    int  Only_E_and_G = 25 - 12;

    int Only_E = 50 - 13 - 12 - 25; // Using Venn diagram
    int Only_F = 55 - 25 - 12 - 16; // Using Venn diagram
    int Only_G = 46 - 13 - 12 - 16; // Using Venn diagram

    int only_one_lang = Only_E + Only_F + Only_G;


    // int only_one_lang = E + F + G - 2 * exactly_two_lang - 3 * all_three_lang;

    cout << "Number of students who know all three languages: " << all_three_lang << endl;
    cout << "Number of students who know exactly two languages: " << exactly_two_lang << endl;
    cout << "Number of students who know only one language: " << only_one_lang << endl;

    return 0;
}
