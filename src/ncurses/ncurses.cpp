#include "ncurses.hpp"

void Ncurses::init()
{
    win = newwin(20, 20, 0, 0);
    initscr();
    cbreak();
    keypad(stdscr, TRUE);
    wrefresh(win);
    std::signal(SIGINT, signal_handler);
    while (1) {
        if (input_handler() == false)
            break;
        update();
    }
    destroy();
}

void Ncurses::destroy()
{
    delwin(win);
    refresh();
    endwin();
}

void Ncurses::update(std::string, int startx, int starty)
{
    refresh();
}
