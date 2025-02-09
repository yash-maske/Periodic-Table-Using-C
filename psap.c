#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

struct Element
{
    char name[50];
    char symbol[4];
    int atomicNumber;
    float atomicWeight;
    char classification[20];
    char electronConfig[50];
};

int main()
{
    int choice, count = 0, no, i, q, score = 0, n, j;
    float weight;
    char s[50];

    struct Element elements[118], temp;
    FILE *fp = fopen("periodic.txt", "r");

    if (fp == NULL)
    {
        printf("File not available\n");
        return 1;
    }

    // Read the entire line, including classification and electron configuration
    while (fscanf(fp, "%s %s %d %f %s %[^\n]", elements[count].name, elements[count].symbol,
                  &elements[count].atomicNumber, &elements[count].atomicWeight,
                  elements[count].classification, elements[count].electronConfig) != EOF)
    {
        count++;
    }
    fclose(fp);

    while (1)
    {
        printf("\n\n\t\t\t\t\t----- Modern Periodic Table -----\n");
        printf("1. Display all Elements\n");
        printf("2. Search by Name\n");
        printf("3. Search by Symbol\n");
        printf("4. Search by Atomic Number\n");
        printf("5. Search by Atomic Weight\n");
        printf("6. Display Periodic Table\n");
        printf("7. Display elements in alphabetical order\n");
        printf("8. Take a Quiz\n");
        printf("9. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            for (i = 0; i < count; i++)
            {
                printf("\nName: %s\nSymbol: %s\nAtomic Number: %d\nAtomic Weight: %.3f\nClassification: %s\nElectron Configuration: %s\n",
                       elements[i].name, elements[i].symbol, elements[i].atomicNumber, elements[i].atomicWeight,
                       elements[i].classification, elements[i].electronConfig);
            }
            break;
        case 2:
            printf("Enter element name: ");
            scanf("%s", s);
            for (i = 0; i < count; i++)
            {
                if (strcasecmp(elements[i].name, s) == 0)
                {
                    printf("\nName: %s\nSymbol: %s\nAtomic Number: %d\nAtomic Weight: %.3f\nClassification: %s\nElectron Configuration: %s\n",
                           elements[i].name, elements[i].symbol, elements[i].atomicNumber, elements[i].atomicWeight,
                           elements[i].classification, elements[i].electronConfig);
                    break;
                }
                if (i == count - 1)
                    printf("Element not found.\n");
            }
            break;
        case 3:
            printf("Enter element symbol: ");
            scanf("%s", s);
            for (i = 0; i < count; i++)
            {
                if (strcasecmp(elements[i].symbol, s) == 0)
                {
                    printf("\nName: %s\nSymbol: %s\nAtomic Number: %d\nAtomic Weight: %.3f\nClassification: %s\nElectron Configuration: %s\n",
                           elements[i].name, elements[i].symbol, elements[i].atomicNumber, elements[i].atomicWeight,
                           elements[i].classification, elements[i].electronConfig);
                    break;
                }
                if (i == count - 1)
                    printf("Element not found.\n");
            }
            break;
        case 4:
            printf("Enter atomic number: ");
            scanf("%d", &no);
            for (i = 0; i < count; i++)
            {
                if (elements[i].atomicNumber == no)
                {
                    printf("\nName: %s\nSymbol: %s\nAtomic Number: %d\nAtomic Weight: %.3f\nClassification: %s\nElectron Configuration: %s\n",
                           elements[i].name, elements[i].symbol, elements[i].atomicNumber, elements[i].atomicWeight,
                           elements[i].classification, elements[i].electronConfig);
                    break;
                }
                if (i == count - 1)
                    printf("Element not found.\n");
            }
            break;
        case 5:
            printf("Enter atomic weight: ");
            scanf("%f", &weight);
            for (i = 0; i < count; i++)
            {
                if (elements[i].atomicWeight == weight)
                {
                    printf("\nName: %s\nSymbol: %s\nAtomic Number: %d\nAtomic Weight: %.3f\nClassification: %s\nElectron Configuration: %s\n",
                           elements[i].name, elements[i].symbol, elements[i].atomicNumber, elements[i].atomicWeight,
                           elements[i].classification, elements[i].electronConfig);
                    break;
                }
                if (i == count - 1)
                    printf("Element not found.\n");
            }
            break;
        case 6:

            printf("|---------------------------------------------------------------------------------------|");
            printf("\n| %s  |                                                                             | %s |", elements[0].symbol, elements[1].symbol);
            printf("\n|---------------------------------------------------------------------------------------|");
            printf("\n| %s | %s |                                                    | %s | %s | %s | %s | %s | %s |", elements[2].symbol, elements[3].symbol, elements[4].symbol, elements[5].symbol, elements[6].symbol, elements[7].symbol, elements[8].symbol, elements[9].symbol);
            printf("\n|---------------------------------------------------------------------------------------|");
            printf("\n| %s | %s |                                                 | %s | %s | %s | %s | %s | %s |", elements[10].symbol, elements[11].symbol, elements[12].symbol, elements[13].symbol, elements[14].symbol, elements[15].symbol, elements[16].symbol, elements[17].symbol);
            printf("\n|---------------------------------------------------------------------------------------|\n");
            for (i = 18; i < 36; i++)
            {
                printf("| %s ", elements[i].symbol);
            }
            printf("|");
            printf("\n|---------------------------------------------------------------------------------------|\n");
            for (i = 36; i < 54; i++)
            {
                printf("| %s ", elements[i].symbol);
            }
            printf("|");
            printf("\n|---------------------------------------------------------------------------------------|\n");
            printf("| %s | %s |   ", elements[54].symbol, elements[55].symbol);
            for (i = 71; i < 86; i++)
            {
                printf("| %s ", elements[i].symbol);
            }
            printf("|");
            printf("\n|---------------------------------------------------------------------------------------|\n");
            printf("| %s | %s |  ", elements[86].symbol, elements[87].symbol);
            for (i = 103; i < 118; i++)
            {
                printf("| %s ", elements[i].symbol);
            }
            printf("|");
            printf("\n|---------------------------------------------------------------------------------------|\n");

            printf("\n|--------------------------------------------------------------------------|\n");
            for (i = 56; i < 71; i++)
            {
                printf("| %s ", elements[i].symbol);
            }
            printf("|");
            printf("\n|--------------------------------------------------------------------------|\n");
            for (i = 88; i < 103; i++)
            {
                printf("| %s ", elements[i].symbol);
            }
            printf(" |");
            printf("\n|--------------------------------------------------------------------------|\n");
            break;

        case 7:
            // Sort elements by their symbol
            for (i = 0; i < count - 1; i++)
            {
                for (j = 0; j < count - i - 1; j++)
                {
                    if (strcmp(elements[j].symbol, elements[j + 1].symbol) > 0)
                    {
                        temp = elements[j];
                        elements[j] = elements[j + 1];
                        elements[j + 1] = temp;
                    }
                }
            }
            printf("Elements in alphabetical order by symbol:\n");
            for (i = 0; i < count; i++)
            {
                printf("\nSymbol: %s\nName: %s\nAtomic Number: %d\nAtomic Weight: %.3f\nClassification: %s\nElectron Configuration: %s\n",
                       elements[i].symbol, elements[i].name, elements[i].atomicNumber, elements[i].atomicWeight,
                       elements[i].classification, elements[i].electronConfig);
            }
            break;
        case 8:
            printf("Enter how many questions to be asked : ");
            scanf("%d", &n);
            srand(time(NULL));
            for (q = 0; q < n; q++)
            {
                int index = rand() % count;
                int question = rand() % 3;
                if (question == 0)
                {
                    printf("\nWhat is the atomic number of %s?\n", elements[index].name);
                    int ans;
                    scanf("%d", &ans);
                    if (ans == elements[index].atomicNumber)
                    {
                        printf("Correct answer\n");
                        score++;
                    }
                    else
                    {
                        printf("Incorrect answer\n");
                        printf("Correct answer is %d", elements[index].atomicNumber);
                    }
                }

                else if (question == 1)
                {
                    printf("\nWhat is the symbol of %s?\n", elements[index].name);
                    char ans[4];
                    scanf("%s", ans);
                    if (strcasecmp(ans, elements[index].symbol) == 0)
                    {
                        printf("Correct answer\n");
                        score++;
                    }
                    else
                    {
                        printf("Incorrect answer\n");
                        printf("Correct answer is %s", elements[index].symbol);
                    }
                }
                else
                {
                    printf("\nWhat is the name of element with symbol %s?\n", elements[index].symbol);
                    char ans[50];
                    scanf("%s", ans);
                    if (strcasecmp(ans, elements[index].name) == 0)
                    {
                        printf("Correct answer\n");
                        score++;
                    }
                    else
                    {
                        printf("Incorrect anwer\n");
                        printf("Correct answer is %s", elements[index].name);
                    }
                }
            }
            printf("\nYour score : %d/%d", score, n);
            break;
        case 9:
            return 0;
        default:
            printf("Invalid choice!\n");
        }
    }
}
