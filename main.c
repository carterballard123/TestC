#include <stdio.h>
int main() {
printf("Hello, World!\n");

char nameFirst[20];
printf("Hello! What's your name?\n");
scanf("%s", &nameFirst);
printf("Hello! %s how are you?", nameFirst);

return 0;
}
