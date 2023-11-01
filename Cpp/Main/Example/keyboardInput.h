// reference : https://eastskykang.wordpress.com/2015/01/28/c-c-kbhit-function-in-linux/
// reference : google bard
// reference : https://stackoverflow.com/questions/29335758/using-kbhit-and-getch-on-linux

#ifndef KIMKBOARD_H
#define KIMKBOARD_H
#include <termios.h>

class keyboardInput
{
public:
    keyboardInput(/* args */);
    ~keyboardInput();
    int kimkb();
    int getch();

private:
    /* data */
    struct termios initial_settings, new_settings;
    int peek_char;
};


#endif