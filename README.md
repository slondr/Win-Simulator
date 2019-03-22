# Win Simulator

A new Dark Souls-based WoW killer based on Fortnite and Undertale's mechanics mixed with the worldbuilding of Final Fantasy VII and art style of Crysis 3.

Win Simulator is written in POSIX C, and should compile nicely on any system supported by ncurses (so, most sane Unix systems). It isn't ANSI C compliant due to the use of `unistd.h` and ncurses, but I don't use any other non-ANSI features so a pdcurses port that supports Windows theoretically shouldn't be too difficult.