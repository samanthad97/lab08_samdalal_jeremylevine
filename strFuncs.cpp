#include <iostream>
#include <string>
#include <cstring>
#include <cassert>
#include <algorithm>
#include <cctype>
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

  for(int i = 0; i < s1.length(); i++){
    count1[tolower(s1[i])-0]++;
  }

  for(int i = 0; i < s2.length(); i++){
    count2[tolower(s2[i])-0]++;
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

  string temp = s1;
  for(int i = 0; i < temp.length(); i++){
    temp[i] = tolower(temp[i]);
  }

  //base case empty string or 1 letter 
  int stringLength = temp.length();
  if(stringLength == 0 || stringLength == 1){
    return true;
  }
  //recursive case check if first and last letter are the same using .begin() and .end()
  if(temp[0] != temp[temp.length()-1]){
    return false;
  }
  else{
    const string s = temp.substr(1,temp.length()-2);
    return isPalindrome(s);
  }
}


