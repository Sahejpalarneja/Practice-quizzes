/*
Lilah has a string, s, of lowercase English letters that she repeated infinitely many times.

Given an integer,n, find and print the number of letter a's in the first

letters of Lilah's infinite string.

For example, if the string s='abcac' and n= 10 , the substring we consider is abcacabcac, the first 10  characters of her infinite string. There are 4

occurrences of a in the substring.

Function Description

Complete the repeatedString function in the editor below. It should return an integer representing the number of occurrences of a in the prefix of length

in the infinitely repeating string.

repeated
String has the following parameter(s):

    s: a string to repeat
    n: the number of characters to consider



*/
#include <bits/stdc++.h>

using namespace std;


long repeatedString(string s, long n) {
    long count = 0;
    for(int i =0;i<=s.length();i++)
    {
        if(s[i] == 'a')
            count++;
    }
    count = count*(n/s.length());
    for(int i=0;i<(n%s.length());i++)
    {
        if(s[i] == 'a')
            count++;
    } 

return count;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    long n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    long result = repeatedString(s, n);

    fout << result << "\n";

    fout.close();

    return 0;
}

