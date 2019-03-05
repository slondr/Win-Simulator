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

#include "win.h"

int main(void) {
  construct_game();
  printw_buf("Press any key to win.\n");
  printw_buf("You win!");
  destroy_game();
  return 0;
}
