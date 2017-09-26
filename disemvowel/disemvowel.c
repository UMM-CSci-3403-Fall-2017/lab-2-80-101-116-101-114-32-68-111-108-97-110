#include <stdlib.h>

#include "disemvowel.h"


//checks if the character given is a lowercase vowel
//Returns 1 if the character given is a lowercase vowel, and 0 if it is not.
int islowercasevowel (char str) {
        if ((str == 'a' || str == 'e' || str == 'i' || str == 'o' || str == 'u') == 1){
                return 1;
                }
        return 0;
}

//checks if the character given is a uppercase vowel
//Returns 1 if the character given is a uppercase vowel, and 0 if it is not.
int isuppercasevowel (char str) {
        if ((str == 'A' || str == 'E' || str == 'I' || str == 'O' || str == 'U') == 1){
                return 1;
                }
        return 0;
}

//Takes in a string, and outputs the string with the vowels removed
char* disemvowel(char* str) {
  if (str[0] == '\0'){
	  return str;
  }
  
  int vowelcounter = 0;
  int i = 0;
  //Runs until the i'th value of str gets to a string terminator
  //Counts how many vowels we have in our string
  while (str[i] != '\0')
  {
	if (isuppercasevowel(str[i]) == 1 || islowercasevowel(str[i]) == 1)
	{
		vowelcounter++;
	}
	i++;
  }
  //Allocates the minimum amount of memory needed, which is the size of the string minus the removed vowels + 1
  char* disemvoweled = (char*) calloc (i - vowelcounter + 1, sizeof(char));
  
  i = 0;
  int dvCounter = 0;
  //Runs until the i'th value of str gets to a string terminator
  //If the value at i is not a vowel, we add that character to our return string,
  //and increments our dvCounter which is used to hold our index spot.
  while (str[i] != '\0') {
	  if (isuppercasevowel(str[i]) == 0 && islowercasevowel(str[i]) == 0) {
		disemvoweled[dvCounter] = str[i];
		dvCounter++;
	  }
	  i++;
  }

  disemvoweled[dvCounter] = '\0';
  return disemvoweled;
}
