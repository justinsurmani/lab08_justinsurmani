#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
#include "strFuncs.h"
#include <cctype>
using namespace std;


/* Precondition: Two valid strings s1 and s2, each containing a mix of alphabets, spaces and punctuations
 * Post condition: Return true if one string is an anagram of the other string. White spaces, punctuations and
 * the case for the letters (upper or lower) should not
 * affect your result. 
 */

int charVal(char c){
	if(isalpha(c)==0 && isdigit(c)==0)
	{return -1;}
	c = toupper(c);
	if(c == 'A')
	{return 0;}
	if(c == 'B')
	{return 1;}
	if(c == 'C')
	{return 2;}
	if(c == 'D')
	{return 3;}
	if(c == 'E')
	{return 4;}
	if(c == 'F')
	{return 5;}
	if(c == 'G')
	{return 6;}
	if(c == 'H')
	{return 7;}
	if(c == 'I')
	{return 8;}
	if(c == 'J')
	{return 9;}
	if(c == 'K')
	{return 10;}
	if(c == 'L')
	{return 11;}
	if(c == 'M')
	{return 12;}
	if(c == 'N')
	{return 13;}
	if(c == 'O')
	{return 14;}
	if(c == 'P')
	{return 15;}
	if(c == 'Q')
	{return 16;}
	if(c == 'R')
	{return 17;}
	if(c == 'S')
	{return 18;}
	if(c == 'T')
	{return 19;}
	if(c == 'U')
	{return 20;}
	if(c == 'V')
	{return 21;}
	if(c == 'W')
	{return 22;}
	if(c == 'X')
	{return 23;}
	if(c == 'Y')
	{return 24;}
	if(c == 'Z')
	{return 25;}
	if(c == '0')
	{return 26;}
	if(c == '1')
	{return 27;}
	if(c == '2')
	{return 28;}
	if(c == '3')
	{return 29;}
	if(c == '4')
	{return 30;}
	if(c == '5')
	{return 31;}
	if(c == '6')
	{return 32;}
	if(c == '7')
	{return 33;}
	if(c == '8')
	{return 34;}
	if(c == '9')
	{return 35;}
}

bool isAnagram(string s1, string s2){
	int arr[36] = {0};
	for(int i = 0; i < s1.length(); i++)
	{
		char s = s1[i];
//	cout << "Char: " << s << endl; 
		int val = charVal(s);
//		cout << "Val: " << val << endl << endl;
		if(val>=0)
		{arr[val]+=1;}
	}
	for(int j = 0; j < s2.length(); j++)
	{
		char p = s2[j];
		int value = charVal(p);
		if(value>=0)
		{
		arr[value]-=1;
		if(arr[value] < 0)
		{return false;}
		}
	}
	for(int k = 0; k<36; k++)
	{
		if(arr[k]!=0)
		{return false;}
	}
	return true;
}

/* Precondition: s1 is a valid string that may contain upper or lower case alphabets, no spaces or special characters
 * Postcondition: Returns true if s1 is a palindrome, false otherwise
 * You should provide a recursive solution
 */
bool isPalindrome(const string s1){
	 int length = s1.length();
	 if(length == 1)
	 {return true;}
	 char a = toupper(s1[0]);
	 char b = toupper(s1[length-1]);
	 if(length == 2)
	 {if(a==b)
	  {return true;}
	 }
	if(a!=b)
	{return false;}
	else
	isPalindrome(s1.substr(1, length-2));
  }


