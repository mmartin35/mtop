#pragma once
#include <ncurses.h>
#include <csignal>

class Ncurses
{
    public:
        void init();
        void update();
        void destroy();

        bool input_handler();
        void signal_handler();
    private:
        WINDOW *win;
};
