#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Library
{
    char name[50];
    char author[50];
    int code;
} L[50];
int login()
{
    char username[15];
    char password[12];
    printf("\n\n\t\t\t*-------------\n\t\t\t*WELCOME TO LIBRARY\n\t\t\t*-------------*\n\n");
    printf("-> Login\n\n");
    printf("Enter username:\n");
    scanf("\n");
    scanf("%[^\n]%*c", username);
    printf("\n");
    printf("Enter password:\n");
    scanf("%s", password);

    if (strcmp(username, "library access") == 0)
    {
        if (strcmp(password, "library222") == 0)
        {

            printf("\nLogged in successfully!\n\n");
        }
        else
        {
            printf("\nOops!Wrong Password\n");
            exit(0);
        }
    }
    else
    {
        printf("\nUser doesn't exist\n");
        exit(0);
    }
}
int main()
{
    login();
    int i = 26, found = 0, bc, num;
    char s1[50], s2[50];

    strcpy(L[0].name, "Politics of Opportunism");
    strcpy(L[0].author, "R P N Singh");
    L[0].code = 1;
    strcpy(L[1].name, "Celestial Bodies");
    strcpy(L[1].author, "Jokha Alharthi");
    L[1].code = 2;
    strcpy(L[2].name, "Darkness to light");
    strcpy(L[2].author, "Lamar Odom");
    L[2].code = 3;
    strcpy(L[3].name, "To Kill a Mockingbird");
    strcpy(L[3].author, "steve");
    L[3].code = 4;
    strcpy(L[4].name, "Pride and Prejudice");
    strcpy(L[4].author, "Jane");
    L[4].code = 5;
    strcpy(L[5].name, "The Great Gatsby");
    strcpy(L[5].author, "Charlotte");
    L[5].code = 6;
    strcpy(L[6].name, "Lord of the Flies");
    strcpy(L[6].author, "George");
    L[6].code = 7;
    strcpy(L[7].name, "Brave New World");
    strcpy(L[7].author, "William");
    L[7].code = 8;
    strcpy(L[8].name, "The Grapes of Wrath");
    strcpy(L[8].author, "Aldous");
    L[8].code = 9;
    strcpy(L[9].name, "Laws of heaven");
    strcpy(L[9].author, "Golding");
    L[9].code = 10;
    strcpy(L[10].name, "Road to Infinity");
    strcpy(L[10].author, " Austen");
    L[10].code = 11;
    strcpy(L[11].name, "Prince in excile");
    strcpy(L[11].author, "Jackie Chan");
    L[11].code = 12;
    strcpy(L[12].name, "Malayalam poetry");
    strcpy(L[12].author, "Akkitham Achuthan Namboodri");
    L[12].code = 13;
    strcpy(L[13].name, "The Testaments");
    strcpy(L[13].author, "Margaret Atwood");
    L[13].code = 14;
    strcpy(L[14].name, "Cheque book");
    strcpy(L[14].author, "Vasdev Mohi");
    L[14].code = 15;
    strcpy(L[15].name, "The Overstory");
    strcpy(L[15].author, "Richard Powers");
    L[15].code = 16;
    strcpy(L[16].name, "Mind-Master");
    strcpy(L[16].author, "Viswanathan Anand and Susan Ninan");
    L[16].code = 17;
    strcpy(L[17].name, "Bridgital Nation");
    strcpy(L[17].author, "Shri N Chandrasekaran");
    L[17].code = 18;
    strcpy(L[18].name, "Vivekadeepini");
    strcpy(L[18].author, "Adi Shankaracharya");
    L[18].code = 19;
    strcpy(L[19].name, "My Journey");
    strcpy(L[19].author, "Dr. A.P.J. Abdul Kalam");
    L[19].code = 20;
    strcpy(L[20].name, "Making of New India");
    strcpy(L[20].author, "Dr. Bibek Debroy");
    L[20].code = 21;
    strcpy(L[21].name, "We are Displaced");
    strcpy(L[21].author, "Malala Yousafzai");
    L[21].code = 22;
    strcpy(L[22].name, "The Third Pillar");
    strcpy(L[22].author, "Raghuram Rajan");
    L[22].code = 23;
    strcpy(L[23].name, "Game Changer");
    strcpy(L[23].author, "Shahid Afridi");
    L[23].code = 24;
    strcpy(L[24].name, "Diabetes with Delight");
    strcpy(L[24].author, "Anoop Misra");
    L[24].code = 25;
    strcpy(L[25].name, "Matoshree");
    strcpy(L[25].author, "Sumitra Mahajan");
    L[25].code = 26;

    do
    {
        printf("\n\nEnter 1 to search by Book Name\nEnter 2 to search by Author Name\nEnter 3 to search by Book Id\nEnter 4 to display books available in Library\nEnter 5 to Exit\n\nEnter your option:  ");

        scanf("%d", &num);
        switch (num)
        {
        case 1:
            printf("\nEnter Book Name to search: \n");
            // donot remove scanf("\n") and printf("\n"); if removed, scanf("%[^\n]%*c", s1) will not function
            scanf("\n");
            scanf("%[^\n]%*c", s1);
            printf("\n");
            for (i = 0; i < 26; i++)
            {
                if (strcmp(s1, L[i].name) == 0)
                {
                    found = 1;
                    printf("\n\t\t\t\t*---------\n\t\t\t\t*Hurray!BOOK FOUND\n\t\t\t\t*---------*\n");
                    printf("Book Code : %d\n", L[i].code);
                    printf("Book Name : %s\n", L[i].name);
                    printf("Author    : %s\n", L[i].author);
                    printf("---------------------------------------------------------");
                }
            }
            if (found == 0)
                printf("\nBook Not Found\nEnter a valid Book Name");
            break;

        case 2:
            printf("\nEnter Author Name to search: \n");
            // donot remove scanf("\n") and printf("\n"); if removed, scanf("%[^\n]%*c", s2) will not function
            scanf("\n");
            scanf("%[^\n]%*c", s2);
            printf("\n");
            for (i = 0; i < 26; i++)
            {
                if (strcmp(s2, L[i].author) == 0)
                {
                    found = 1;
                    printf("\n\t\t\t\t*---------\n\t\t\t\t*Hurray!BOOK FOUND\n\t\t\t\t*---------*\n");
                    printf("Book Code : %d\n", L[i].code);
                    printf("Book Name : %s\n", L[i].name);
                    printf("Author    : %s\n", L[i].author);
                    printf("---------------------------------------------------------");
                }
            }
            if (found == 0)
                printf("\nBook Not Found\nEnter a valid Author Name");
            break;

        case 3:
            printf("\nEnter Book Id to search: \n");
            scanf("%d", &bc);
            for (i = 0; i < 26; i++)
            {

                if (bc == L[i].code)
                {
                    found = 1;
                    printf("\n\t\t\t\t*---------\n\t\t\t\t*Hurray!BOOK FOUND\n\t\t\t\t*---------*\n");
                    printf("Book Code : %d\n", L[i].code);
                    printf("Book Name : %s\n", L[i].name);
                    printf("Author    : %s\n", L[i].author);
                    printf("---------------------------------------------------------");
                }
            }
            if (found == 0)
                printf("\nBook Not Found\nEnter a valid Book Id");
            break;

        case 4:
            printf("\n-> Available books in library are listed below:\n\n");
            for (int k = 0; k < i; k++)
            {
                printf("Book name   : %s\n", L[k].name);
                printf("Author name : %s\n", L[k].author);
                printf("Book code   : %d\n", L[k].code);
                printf("----------------------------------------\n");
            }
            break;

        case 5:
            printf("\n\t\t\t\t*-----\n\t\t\t\t*Thank you\n\t\t\t\t*-----*");
            printf("\n--------------------------------------------------------------------------------------------------");
            exit(0);

        default:
            printf("Oh! Not found,Enter a valid option from 1 to 5");
            break;
        }
    } while (num != 0);
    return 0;
}