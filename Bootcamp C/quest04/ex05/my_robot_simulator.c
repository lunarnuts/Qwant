/**
** QWASAR.IO -- my_robot_simulator
**
**
** @param {char*} param_1
**
** @return {char*}
**
*/

char *my_robot_simulator(char *ins) {
  int x = 0;
  int y = 0;
  const char *dir[4];
  dir[0] = "north";
  dir[1] = "east";
  dir[2] = "south";
  dir[3] = "west";
  int orient = 0; // 0 - N; 1 - E;2-S;3-w;
  for (int i = 0; i < strlen(ins)+1; i++) {
    char b = ins[i];
    if (b=='A') {
      if (orient == 0) {
        y--;
      }
      if (orient == 1) {
        x++;
      }
      if (orient == 2) {
        y++;
      }
      if (orient == 3){
        x--;
      }
    }
    if (b=='R') {
      if (orient == 3) {
        orient = 0;
      } else {
        orient++;
      }
    } else if (b=='L') {
      if (orient == 0) {
        orient = 3;
      } else {
        orient--;
      }
    }
  }

  // sprintf(ans,"{x: %d, y: %d, bearing: '%s'}", x, y, dir[orient]);
  char *ans = (char *)malloc(100 * sizeof(char));
  sprintf(ans, "{x: %d, y: %d, bearing: '%s'}", x, y, dir[orient]);
  return ans;
}