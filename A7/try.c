#include <stdio.h>
#include <string.h>

int main()
{
char str[101];

printf("Enter the genome: ");
scanf("%s", str);

int Length = strlen(str);
int gCount = 0;

if(Length != 23) {
        printf("NEGATIVE: Length is not 23.\n");
}
else
{

if(str[0] != 'a') {
printf("Length is 23 \n");
printf("NEGATIVE: First letter is not 'a'.\n");
}
else
{

if(str[Length - 1] != 't')
{
printf("Length is 23 \n");
printf("First letter is 'a' \n");
printf("NEGATIVE: Last letter is not 't'.\n");
}
else
{

for (int i = 0; i < Length; ++i)
{
if (str[i] == 'g')
{
gCount++;
}
}


if (gCount != 7)
{
printf("First letter is 'a'\n");
printf("Last letter is 't'\n");
printf("NEGATIVE: Does not contain exactly 7 'g's.\n");
}
else
{

printf("First letter: 'a'\n");
printf("Last letter: 't'\n");
printf("Contains exactly 7 'g's: \n");
printf("POSITIVE: All conditions met");
for (int i = 0; i < Length; ++i)
{
if(str[i] == 'g')
{

}
}
printf("\n");
}
}
}
}

    return 0;
}

