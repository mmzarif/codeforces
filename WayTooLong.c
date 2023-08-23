#include <stdio.h>
#include <string.h>

#define max_array_columns 101

int main() {
    int n;
    printf("enter number of words you wish to abbreviate: ");
    scanf("%d", &n);
    char array[n][max_array_columns];
    for (int row=0; row<n; row++)
        for (int col=0; col<max_array_columns; col++)
            array[row][col]='\0';
    for (int word=0; word<n; word++) {
        printf("enter word %d to abbreviate: ", word+1);
        scanf("%s", array[word]);
    }

    int str_length[n];
    for (int i=0; i<n; i++){
        str_length[i] = strlen(array[i]);
        if (str_length[i]>10) {
            int col=0;
            while (array[i][col] != '\0')
                col++;
            printf("%c", array[i][0]); printf("%d", str_length[i]-2); printf("%c", array[i][col-1]);
        }
        else printf("%s", array[i]);
    }
    
    return 0;
}