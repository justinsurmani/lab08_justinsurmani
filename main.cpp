#include "strFuncs.h"
#include "linkedList.h"
#include "linkedListFuncs.h"
#include "tddFuncs.h"
#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>
#include <cstring>

using namespace std;

int main(){
	string a = "ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	string b = "AAA";
	bool x = isAnagram(a, b);
	return 0;
}
