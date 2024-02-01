#include "ncurses.hpp"

bool Ncurses::input_handler()
{
    switch (getch()) {
        case 'q':
            return false;
        default:
            break;
    }
    return true;
}

void Ncurses::signal_handler(int signal)
{
    std::cout << "catched signal " << signal << std::endl; 
}
