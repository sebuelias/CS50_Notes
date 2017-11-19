#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>

string getName();

int main(void) {

    string name = getName();
    printf("%c\n", toupper(name[0]));

return 0;
}

string getName(void) {
    string name = get_string();
    return name;
}