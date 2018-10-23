#include "linkedList.h"
#include "linkedListFuncs.h"
#include "recLinkedListFuncs.h"
#include "tddFuncs.h"
#include "strFuncs.h"
#include <iostream>

using namespace std;

int main()
{
	string s1 = "Eleven plus two";
	string s2 = "Twelve plus one";
	string s3 = "Rats and Mice";
	string s4 = "in cat's dream";
	string s5 = "12345";
	string s6 = "12345";
	string s7 = "?@#%^*()-Eleven Plus TWO";
	string s8 = "racecar";
	string s9 = "RaCecAr";
	string s10= "bb";
	string s11= "detarTrated";
	string s12= "y";
	
	startTestGroup("isAnagram");
	assertTrue(isAnagram(s1, s2), "isAnagram(s1, s2)");
	assertTrue(isAnagram(s3, s4), "isAnagram(s3, s4)");
	assertTrue(!(isAnagram(s1, s3)), "isAnagram(s1, s3)");
	assertTrue(isAnagram(s5, s6), "isAnagram(s5, s6)");
	assertTrue(isAnagram(s1, s7), "isAnagram(s1, s7)");
	startTestGroup("isPalindrome");
	assertTrue(isPalindrome(s8), "isPalindrome(s8)");
	assertTrue(isPalindrome(s9), "isPalindrome(s9)");
	assertTrue(isPalindrome(s10), "isPalindrome(s10)");
	assertTrue(isPalindrome(s11), "isPalindrome(s11)");
	assertTrue(isPalindrome(s12), "isPalindrome(s12)");
	startTestGroup("recursiveSum");
	int arr[4] = {1,2,3,4};
	int zer[10] = {0};
	int ar2[6] = {1,0,6,7,2,4};
	int ar3[1] = {1};
	int ar4[5] = {-1, -2, 3, 4, -1};
	LinkedList* L1 = arrayToLinkedList(arr, 4);
	LinkedList* L2 = arrayToLinkedList(zer, 10);
	LinkedList* L3 = arrayToLinkedList(ar2, 6);
	LinkedList* L4 = arrayToLinkedList(ar3, 1);
	LinkedList* L5 = arrayToLinkedList(ar4, 5);
	Node* h = L1->head;
	Node* h1 = L2->head;
	Node* h2 = L3->head;
	Node* h3 = L4->head;
	Node* h4 = L5->head;
	assertEquals(10, recursiveSum(h), "recursiveSum(h)");
	assertEquals(0, recursiveSum(h1), "recursiveSum(h1)");
	assertEquals(20, recursiveSum(h2), "recursiveSum(h2)");
	assertEquals(1, recursiveSum(h3), "recursiveSum(h3)");
	assertEquals(3, recursiveSum(h4), "recursiveSum(h4)");
	startTestGroup("recursiveLargestValue");
assertEquals(4, recursiveLargestValue(h), "recursiveLargestValue(h)");
assertEquals(0, recursiveLargestValue(h1), "recursiveLargestValue(h1)");
assertEquals(7, recursiveLargestValue(h2), "recursiveLargestValue(h2)");
assertEquals(1, recursiveLargestValue(h3), "recursiveLargestValue(h3)");
assertEquals(4, recursiveLargestValue(h4), "recursiveLargestValue(h4)");
	return 0;
}
