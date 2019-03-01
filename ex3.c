#include <stdio.h>
#include <string.h>

char animals[20][15];
char lyrics[20][60];
int  number;
char temp[20];

void nurseryrhyme(int current) {
//   printf("%d", current);               // print "current" number of spaces

                                                // print something before the recursive call
    if(current == 0) {
          printf("%*s", current, "");
          printf("There was an old lady who swallowed a %s;\n", animals[0]);       // you need to check if the current level is 0
    } else {
          printf("%*s", current, "");
          printf("She swallowed the %s to catch the %s;\n",animals[current - 1], animals[current]);        //   if so, print "There was an old lady..."
    }                                            //   or if it is > 0, print "She swallowed ..."

  if(current < number-1)  {                      // if we are not at the last animal, make the recursive call
    nurseryrhyme(current+1);
  }
      // print something after the recursive call
   printf("%*s", current, "");
   printf("I don't know why she swallowed a %s - %s", animals[current], lyrics[current]);
}


int main() {
  int i=0;

  while (1) {
    fgets(animals[i], 15, stdin);
    //animals[i] = temp;    // read the next animal name
    if (strcmp(animals[i], "END\n") == 0)  {     // if it is "END\n", we are done reading
      break;
    }
    number = strlen(animals[i]);               // determine the length of the string read
    animals[i][number - 1] = '\0';                                            // strip the newline at the end
    fgets(lyrics[i], 60, stdin);
//    lyrics[i] = temp;    // read the lyric corresponding to the animal
    i++;
  }

  number = i;

  nurseryrhyme(0);
}
