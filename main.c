#include "win.h"

int main(void) {
  construct_game();
  printw_buf(splash_message);
  printw_buf("Press any key to win.\n");
  printw_buf("You win!");
  destroy_game();
  return 0;
}
