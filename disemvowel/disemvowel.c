#include <stdlib.h>

#include "disemvowel.h"

bool islowercasevowel (char str) {
        if ((str == 'a' || str == 'e' || str == 'i' || str == 'o' || str == 'u') == 1){
                return true;
                }
        return false;
}

bool isuppercasevowel (char str) {
        if ((str == 'A' || str == 'E' || str == 'I' || str == 'O' || str == 'U') == 1){
                return true;
                }
        return false;
}

char* disemvowel(char* str) {
  if (str[0] == '\0'){
	  return NULL;
  }
  
  int vowelcounter;
  int i = 0;
  while (str[i] != '\0')
  {
	if (isuppercasevowel(str[i]) || islowercasevowel(str[i]))
	{
		vowelcounter++;
	}
	i++;
  }
  char* disemvoweled;
  disemvoweled = (char*) calloc (i - vowelcounter + 1, sizeof(char));
  
  i = 0;
  while (str[i] != '\0') {
	  if (!isuppercasevowel(str[i]) && !islowercasevowel(str[i])) {
		disemvoweled += str[i];
	  }
	  i++;
  }
  disemvoweled += '\0';
  return disemvoweled;
}
