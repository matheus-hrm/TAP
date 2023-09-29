#include <stdio.h>
#include <string.h>
int main (void) {
  char str[100];

  scanf("%[^\n]", str);

  int sum = 0;
  for(int i = 0; i < strlen(str); i++){
    if(str[i] == 'v'){
      sum += 1;
    }
    else if(str[i] == 'w'){
      sum += 2;
    }
  }

  printf("%d", sum);

  return 0;
}