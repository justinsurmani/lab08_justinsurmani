#include "linkedList.h"
#include "linkedListFuncs.h"
#include "recLinkedListFuncs.h"
#include "tddFuncs.h"
#include "strFuncs.h"

int main()
{
	string s1 = "Eleven plus two";
	string s2 = "Twelve plus one";
	string s3 = "Rats and Mice";
	string s4 = "in cat's dream";
	string s5 = "Yolo";
	assertTrue(isAnagram(s1, s2), "isAnagram(s1, s2)");
	return 0;
}
