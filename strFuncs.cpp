#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
#include "strFuncs.h"
using namespace std;


/* Precondition: Two valid strings s1 and s2, each containing a mix of alphabets, spaces and punctuations
 * Post condition: Return true if one string is an anagram of the other string. White spaces, punctuations and
 * the case for the letters (upper or lower) should not
 * affect your result. 
 */
bool isAnagram(string s1, string s2){
	if(s1.length() != s2.length())
	{
		return false;
	}
	for(int i = 0; i < s1.length(); i++)
	{
		string s = s1[i];
		if(isalpha(str[i]) != 0)
		{
		bool test = false;
		int j = 0;
		string a = toupper[s];
		string b = tolower[s];
		while(!test && j < s2.length())
		{
			if(a == s2[j] || b == s2[j])
			{
				test = true;
				s2[j] = NULL;
			}
			j++;
		}
		if(!test)
		{
			return false;
		}
		}
	}
	return true;
}

/* Precondition: s1 is a valid string that may contain upper or lower case alphabets, no spaces or special characters
 * Postcondition: Returns true if s1 is a palindrome, false otherwise
 * You should provide a recursive solution
 */
bool isPalindrome(const string s1){

  return true;
}


