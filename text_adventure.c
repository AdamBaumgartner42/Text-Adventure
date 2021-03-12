#include <stdio.h>
#include <stdlib.h>

size_t const MAX_LINE = 1024;

int display_message(char* filename)
{ 
    char *line = calloc(MAX_LINE, 1);
    FILE *file = fopen(filename, "r");
    while(fgets(line, MAX_LINE, file)){
        printf("%s",line);
    }
    free(line);
    fclose(file);
    return 0;
}

int main (void) {
    int difficulty;
    display_message("welcome.txt"); 
    scanf("%i", &difficulty);

    switch (difficulty) {
        case 1: system("clear");
        printf("YOU CHOSE EASY\n\n"); break;
        case 2: system("clear");
        printf("YOU CHOSE MEDIUM\n\n"); break;
        case 3: system("clear");
        printf("YOU CHOSE HARD\n\n"); break;
        default: printf("You chose an invalid option. Please run the program again.\n"); exit(0); break; 
    }
    
    int adventure_type;

    printf("CHOOSE YOUR ADVENTURE!\n");
    printf("1. Ocean    2. Land     3. Air\n");
    scanf("%i", &adventure_type);

    if (difficulty == 3) {
        int direction_3_1;
        int food_3_1;
        switch (adventure_type) {
            case 1: 
                system("clear"); 
                display_message("ocean_start.txt");
                scanf("%i", &direction_3_1);
            switch (direction_3_1) {
                case 1: 
                system("clear"); 
                display_message("swim_north.txt"); 
                break;

                case 2: 
                system("clear"); 
                display_message("swim_east.txt"); 
                break;

                case 3: 
                system("clear"); 
                display_message("swim_south.txt");  
                scanf("%i", &food_3_1);
                break;
            }
        }
    }           
} 
 
