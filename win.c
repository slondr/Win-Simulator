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
