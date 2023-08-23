//this does not work. tried using pointers. while ptr[0,1,2,3] point to different words, 
//idk how to access the characters within the words themselves. like ptr[0.0, 0.1, 0.2, etc.]

/*#include <stdio.h>
#include <string.h>

int main() {
    int n;
    int i;
    printf("enter number of words you wish to abbreviate\n");
    scanf("%d", &n);
    char* words;
    for (i=0; i<n; i++) {
        printf("input word %d\n", i+1);
        scanf("%s", words++);
    }
    //words=words[0];
    for (i=0; i<n; i++) {
        char *current_string = words;
        printf("%s", current_string);
        int str_length = sizeof(current_string)/sizeof(current_string[0]);
        if (str_length>11) {
            int inbetween = str_length - 3;
            printf("%c", current_string[0]);
            printf("%d", inbetween);
            printf("%c", current_string[str_length - 2]);
            printf("\n");
        }
        else printf("%s\n", current_string);
        words++;
        printf("%s", words);
    }
    return 0;
}*/