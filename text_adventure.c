#include <stdio.h>
#include <stdlib.h>

int main (void) {
    int difficulty;

    printf("WELCOME TO TEXT ADVENTURE!\n\n");
    printf("CHOOSE YOUR DIFFICULTY:\n");
    printf("1. EASY    2. MEDIUM  3. HARD\n");
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
        case 1: system("clear"); printf("Welcome, your adventure takes place in the ocean.\n"); //put some ascii art here
        printf("-------------------------------------------------\n");
        printf("You wake up, you're stranded in the middle of the ocean floating on a piece of driftwood.\n");
        printf("When you look around, you see a burning boat with ash and snow falling.\n");
        printf("You have no memory of any previous events whatsoever. Right now you know... your first objective is to find land.\n");
        printf("As you try to remember what happened and how you got stranded, you see a bird fly by.\n");
        printf("-------------------------------------------------------------------------------------\n");
        printf("In which direction do you swim?\n");
        printf("1. North,   2. East\n"); printf("3. South,   4. West\n"); scanf("%i", &direction_3_1);

        switch (direction_3_1) {
            case 1: system("clear"); printf("You swim north.\n");
            printf("---------------\n");
            printf("As you swim north, you find that birds keep flying in the opposite direction.\n");
            printf("Eventually, you find a small island with nothing more than just sand.\n");
            printf("Did you misinterpret something?\n");
            printf("-------------------------------\n");
            printf("YOU FAILED\n"); break;

            case 2: system("clear"); printf("You swim east");
            printf("-------------");
            printf("You swim east, but unfortunately your muscles have tired out for naught.\n");
            printf("Although, you do see that the sun moves to the right in the sky.\n");
            printf("Does that mean something?\n");
            printf("YOU FAILED");

            case 3: system("clear"); printf("You swim south\n");
            printf("SUCCESS\n");
            printf("-------\n");
            printf("Because snow was falling, it must mean it's winter. Also, birds fly south for the winter.\n");
            printf("-----------------------------------------------------------------------------------------\n");
            printf("It takes a while... or maybe more than a while, but you finally reach a lush island filled with animals and fruits such as:\n");
            printf("monkeys, bananas, apples, capybaras, and small bright frogs.\n");
            printf("...Triangles... "); printf("Triangles... "); printf("Why do you keep thinking of triangles? "); printf("Is some of your memory coming back?\n");
            printf("-------------------------------------------------------------------------------------------------------\n");
            printf("As you trudge through the jungle you try to remember any details of anything that had previously happened.\n");
            printf("For some reason, you remember hearing, 'All aboard! To... Triangle!'\n");
            printf("--------------------------------------------------------------------\n");
            printf("As you draw your attention back to the present, you're faced with two choices for dinner:\n");
            printf("1. Aggregated berries   2. Nuts that smell like almonds\n");
            scanf("%i", &food_3_1);
        }
    }
    }           


} 