#include <iostream>
#include <string>
#include <cstring>
#include <cassert>
#include <algorithm>
#include "strFuncs.h"
using namespace std;


/* Precondition: Two valid strings s1 and s2, each containing a mix of alphabets, spaces and punctuations
 * Post condition: Return true if one string is an anagram of the other string. White spaces, punctuations and
 * the case for the letters (upper or lower) should not
 * affect your result. 
 */
bool isAnagram(string s1, string s2){
  int count1[256];
  int count2[256];

  for(int i = 0; i < 256; i++){
    count1[i] = 0;
    count2[i] = 0;
  }

  for(int i = 0; i < strlen(s1); i++){
    count1[tolower(string1[i])-0]++;
  }

  for(int i = 0; i < strlen(s2); i++){
    count2[tolower(string2[i])-0]++;
  }

  for(int i = 97; i < 123; i++){
    if(count1[i] != count2[i]){
      return false;
    }
  }

  return true;
}

/* Precondition: s1 is a valid string that may contain upper or lower case alphabets, no spaces or special characters
 * Postcondition: Returns true if s1 is a palindrome, false otherwise
 *You should provide a recursive solution*/
bool isPalindrome(const string s1){

  return true;
}


