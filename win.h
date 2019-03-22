#ifndef WIN
#define WIN
#pragma once

const char splash_message[965];
void construct_game(void);
void destroy_game(void);
void printw_buf(const char * message);
void printw_ubuf(const char * message);

#endif // "WIN"
