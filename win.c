/* Win Simulator © 2019 Eric S. Londres
   
   This file is part of Win Simulator.
   Win Simulator is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   Win Simulator is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   You should have received a copy of the GNU General Public License
   along with Win Simulator.  If not, see <https://www.gnu.org/licenses/>.
*/

#include <unistd.h>
#include <ncurses.h>

#define RIGHT_B 93
#define ATTRIB_LEN 19

const char splash_message[] = "\n$$\\      $$\\ $$\\                  $$$$$$\\  $$\\                         $$\\            $$\\                         \n$$ | $\\  $$ |\\__|                $$  __$$\\ \\__|                        $$ |           $$ |                       \n$$ |$$$\\ $$ |$$\\ $$$$$$$\\        $$ /  \\__|$$\\ $$$$$$\\$$$$\\  $$\\   $$\\ $$ | $$$$$$\\ $$$$$$\\    $$$$$$\\   $$$$$$\\  \n$$ $$ $$\\$$ |$$ |$$  __$$\\       \\$$$$$$\\  $$ |$$  _$$  _$$\\ $$ |  $$ |$$ | \\____$$\\\\_$$  _|  $$  __$$\\ $$  __$$\\ \n$$$$  _$$$$ |$$ |$$ |  $$ |       \\____$$\\ $$ |$$ / $$ / $$ |$$ |  $$ |$$ | $$$$$$$ | $$ |    $$ /  $$ |$$ |  \\__|\n$$$  / \\$$$ |$$ |$$ |  $$ |      $$\\   $$ |$$ |$$ | $$ | $$ |$$ |  $$ |$$ |$$  __$$ | $$ |$$\\ $$ |  $$ |$$ |      \n$$  /   \\$$ |$$ |$$ |  $$ |      \\$$$$$$  |$$ |$$ | $$ | $$ |\\$$$$$$  |$$ |\\$$$$$$$ | \\$$$$  |\\$$$$$$  |$$ |      \n\\__/     \\__|\\__|\\__|  \\__|       \\______/ \\__|\\__| \\__| \\__| \\______/ \\__| \\_______|  \\____/  \\______/ \\__|\n                                                    \n\n                 Press [Enter] to Begin";

void construct_game(void) {
  // builds the screen and displays the splash message & animatiion
  initscr();
  printw_ubuf(splash_message);
  short counter = 0;
  short right = 1;
  nodelay(stdscr, 1); // getch doesn't block
  while(getch() != 10) {
    counter += (right? 1 : -1);
    
    if(counter > RIGHT_B)
      right = 0;
    else if(counter < 1)
      right = 1;
    
    for(short index = 0; index < counter; ++index)
      mvprintw(0, index, " ");
    
    for(short index = ATTRIB_LEN; index < 500; ++index)
      mvprintw(0, index, " ");
    
    mvprintw(0, counter, "by Eric S. Londres");
    refresh();
    usleep(50000);
  }
  nodelay(stdscr, 0); // getch blocks again
}

void destroy_game(void) {
  endwin();
  printf("Thank you for playing!\nFor other high-quality content, visit my website at slondr.ml.\n");
}

void printw_ubuf(const char * message) {
  erase();
  printw(message);
  refresh();
}

void printw_buf(const char * message) {
  printw_ubuf(message);
  getch();
}
