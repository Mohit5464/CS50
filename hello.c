#include <stdio.h>
#include <cs50.h>
#include <string.h>

typedef struct
{
    string name;
    string number;
}
person;

int main(void)
{
    person people[2];

    string name = get_string("Name :");
    for (int i = 0 ; i < 2; i++)
    {
        if (strcmp(names[i],name) == 0)
        {
            printf("Found %s\n", numbers[i]);
            return 0;
        }
    }
    printf
}
