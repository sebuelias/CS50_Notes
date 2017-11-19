#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>

string getName();

int main(void) {

    string name = getName();
    printf("%s\n", name);

return 0;
}

string getName(void) {
    string name = get_string();
    return name;
}