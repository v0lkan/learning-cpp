#include <iostream>

using namespace std;

enum Color {
    COLOR_BLACK,
    COLOR_YELLOW,
    COLOR_MAGENTA,
    COLOR_GREEN,
    COLOR_CYAN,
    COLOR_RED
};

enum ParseResult {
    PARSE_SUCCESS = 0,
    PARSE_ERROR_OPENING_FILE = -1,
    PARSE_ERROR_READING_FILE = -2,
    PARSE_ERROR_PARSING_FILE = -3
};

enum ItemType {
    ITEM_TYPE_SWORD,
    ITEM_TYPE_TORCH,
    ITEM_TYPE_POTION
};

enum SortType {
    SORT_TYPE_FORWARD,
    SORT_TYPE_BACKWARDS
};

enum class StrongColor {
    RED,
    GREEN,
    BLUE
};

enum class StrongFruit {
    APPLE,
    BANANA,
    ORANGE
};

int main() {
    cout << "Hello, World!" << endl;

    Color paint = COLOR_MAGENTA;

    Color color = static_cast<Color>(3); // ugly as hell!

    StrongColor sc = StrongColor::RED;
    StrongFruit sf = StrongFruit::BANANA;

    int casted = static_cast<int>(sf);

    return 0;
}