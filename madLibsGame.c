#include <stdio.h>
#include <string.h>

int main() {

    char noun[15] = "";
    char verb[15] = "";
    char adjective0[15] = "";
    char adjective1[15] = "";
    char adjective2[15] = "";

    printf("Enter an adjective (description): ");
    fgets(adjective0, sizeof(adjective0), stdin);
    adjective0[strlen(adjective0) - 1] = '\0';

    printf("Enter a noun (someone or asimal): ");
    fgets(noun, sizeof(noun), stdin);
    noun[strlen(noun) - 1] = '\0';

    printf("Enter an adjective (description): ");
    fgets(adjective1, sizeof(adjective1), stdin);
    adjective1[strlen(adjective1) - 1] = '\0';

    printf("Enter a verb (-ing): ");
    fgets(verb, sizeof(verb), stdin);
    verb[strlen(verb) - 1] = '\0';

    printf("Enter an adjective (description): ");
    fgets(adjective2, sizeof(adjective2), stdin);
    adjective2[strlen(adjective2) - 1] = '\0';

    printf("\n I am under da water %s \n", adjective0);
    printf("idk what is this %s", noun);
    printf("vro just finish this alredy");
    
    /*
    printf("%s \n", noun);
    printf("%s \n", verb);
    printf("%s \n", adjective0);
    printf("%s \n", adjective1);
    printf("%s \n", adjective2);
    */

    return 0;
}