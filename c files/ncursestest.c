#include <ncurses.h>

int main() {
initscr();
printw("This is a test");
refresh();
}
