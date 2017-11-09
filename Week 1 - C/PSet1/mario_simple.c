#include <stdio.h>
#include <cs50.h>

int main(void) {
    string hashtag = "#";
    int hashNum;
    printf("Pyramid: ");
    hashNum = get_int();
    for (int i = 0; i < hashNum; i++) {
        printf("%i %s \n", i, hashtag);
    }
}