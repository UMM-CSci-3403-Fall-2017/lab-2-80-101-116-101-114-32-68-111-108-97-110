#include <stdlib.h>

#include "disemvowel.h"

int islowercasevowel (char str) {
        if ((str == 'a' || str == 'e' || str == 'i' || str == 'o' || str == 'u') == 1){
                return 1;
                }
        return 0;
}

int isuppercasevowel (char str) {
        if ((str == 'A' || str == 'E' || str == 'I' || str == 'O' || str == 'U') == 1){
                return 1;
                }
        return 0;
}

char* disemvowel(char* str) {
  if (str[0] == '\0'){
	  return str;
  }
  
  int vowelcounter = 0;
  int i = 0;
  while (str[i] != '\0')
  {
	if (isuppercasevowel(str[i]) == 1 || islowercasevowel(str[i]) == 1)
	{
		vowelcounter++;
	}
	i++;
  }
  char* disemvoweled = (char*) calloc (i - vowelcounter + 1, sizeof(char));
  
  i = 0;
  int dvCounter = 0;
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
