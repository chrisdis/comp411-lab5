#include <stdio.h>
#include <string.h>

int  number;
char temp[11];

void binarystring(int current, char binary[]) {
//   char zero[0]  = '0';
  // char one[0] = '1';
    if (current == 1) {
        binary[number - current] = '0';
        binary[number - current + 1] = '\0' ;
        printf("%s\n",binary);
        binary[number - current] = '1';
        printf("%s\n", binary); 
    } else {
       // printf("%d",0); 
       binary[number - current] = '0';
       binary[number - current + 1] = '\0';
       binarystring(current - 1, binary);
       // printf("%d", 1);
       binary[number - current] = '1';
       binarystring(current- 1, binary); 
    }

}


int main() {

  scanf("%d", &number);
  
  binarystring(number, temp);
}
