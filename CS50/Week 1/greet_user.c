#include <stdio.h>
#include <cs50.h>

int main(void) {
    string answer = get_string("Hey there, what's your name ? ");
    printf("hello, %s", answer);
}