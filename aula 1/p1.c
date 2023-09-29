#include <stdio.h>
#include <string.h>

const char* hard = "HARD";
const char* easy = "EASY";

int main(void) {

  int ent;

  scanf("%d",&ent);

  int i = 0;

  for ( i = 0; i < ent;i++){
    int n;
    scanf("%d",&n);
  
    if(n == 1) {
      printf("%s", hard);
      return 0;
    }
  }

  printf("%s", easy);

  return 0;
}