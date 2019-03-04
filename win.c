#include <ncurses.h>

const char splash_message[] = "$$\\      $$\\ $$\\                  $$$$$$\\  $$\\                         $$\\            $$\\                         \n$$ | $\\  $$ |\\__|                $$  __$$\\ \\__|                        $$ |           $$ |                       \n$$ |$$$\\ $$ |$$\\ $$$$$$$\\        $$ /  \\__|$$\\ $$$$$$\\$$$$\\  $$\\   $$\\ $$ | $$$$$$\\ $$$$$$\\    $$$$$$\\   $$$$$$\\  \n$$ $$ $$\\$$ |$$ |$$  __$$\\       \\$$$$$$\\  $$ |$$  _$$  _$$\\ $$ |  $$ |$$ | \\____$$\\\\_$$  _|  $$  __$$\\ $$  __$$\\ \n$$$$  _$$$$ |$$ |$$ |  $$ |       \\____$$\\ $$ |$$ / $$ / $$ |$$ |  $$ |$$ | $$$$$$$ | $$ |    $$ /  $$ |$$ |  \\__|\n$$$  / \\$$$ |$$ |$$ |  $$ |      $$\\   $$ |$$ |$$ | $$ | $$ |$$ |  $$ |$$ |$$  __$$ | $$ |$$\\ $$ |  $$ |$$ |      \n$$  /   \\$$ |$$ |$$ |  $$ |      \\$$$$$$  |$$ |$$ | $$ | $$ |\\$$$$$$  |$$ |\\$$$$$$$ | \\$$$$  |\\$$$$$$  |$$ |      \n\\__/     \\__|\\__|\\__|  \\__|       \\______/ \\__|\\__| \\__| \\__| \\______/ \\__| \\_______|  \\____/  \\______/ \\__|                                                    ";

void construct_game() {
  initscr();
}

void destroy_game() {
  endwin();
  printf("Thank you for playing!\nFor other high-quality content, visit my website at slondr.ml.\n");
}

void printw_buf(const char * message) {
  erase();
  printw(message);
  refresh();
  getch();
}

int main(void) {
  construct_game();
  printw_buf(splash_message);
  printw_buf("Press any key to win.\n");
  printw_buf("You win!");
  destroy_game();
  return 0;
}
