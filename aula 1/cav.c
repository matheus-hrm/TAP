#include <stdio.h>

int main (){

  int room, bonus_rooms, time;


  scanf("%d %d %d",&room, &bonus_rooms, &time);

  int timecon[room], bonustime[bonus_rooms], bonusindex[bonus_rooms];

  for(int i = 0; i < room; i++){
    scanf("%d", &timecon[i]);
  }
  if(bonus_rooms > 0){
    for(int i = 0; i < bonus_rooms -1; i++){
      scanf("%d %d", &bonusindex[i], &bonustime[i]);
    }
  }
  
  for(int i = 0; i <= room; i++){
    time -= timecon[i];
    if(i == bonusindex[i]){
      time += bonustime[i];
    }
    
    if(time == 0){
      printf("No");
      return 0;
    }
  }

  printf("Yes");

  return 0;
}