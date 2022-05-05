#include <stdio.h>
#include <string.h>

void zodiac(int T2, char *string)
{
    if(strcmp(string, "Jan") == 0)
    {
        if(T2 <= 20)
        {
            puts("Capricorn");
        }
        else if (T2 >= 21)
        {
            puts("Aquarius");
        }
    }
    else if(strcmp(string, "Feb") == 0)
    {
        if(T2 <= 19)
        {
            puts("Aquarius");
        }
        else if (T2 >= 20)
        {
            puts("Pisces");
        }
    }
    else if(strcmp(string, "Mar") == 0)
    {
        if(T2 >= 21)
        {
            puts("Aries");
        }
        else
        {
            puts("Pisces");
        }
    }
    else if(strcmp(string, "Apr") == 0)
    {
        if(T2 <= 20)
        {
            puts("Aries");
        }
        else if(T2 >= 21)
        {
            puts("Taurus");
        }
    }
    else if(strcmp(string, "May") == 0)
    {
        if(T2 <= 20)
        {
            puts("Taurus");
        }
        else if(T2 >= 21)
        {
            puts("Gemini");
        }
    }
    else if(strcmp(string, "Jun") == 0)
    {
        if(T2 <= 21)
        {
            puts("Gemini");
        }
        else if(T2 >= 22)
        {
            puts("Cancer");
        }
    }
    else if(strcmp(string, "Jul") == 0)
    {
        if(T2 <= 22)
        {
            puts("Cancer");
        }
        else if(T2 >= 23)
        {
            puts("Leo");
        }
    }
    else if(strcmp(string, "Aug") == 0)
    {
        if(T2 <= 22)
        {
            puts("Leo");
        }
        else if(T2 >= 23)
        {
            puts("Virgo");
        }
    }
    else if(strcmp(string, "Sep") == 0)
    {
        if(T2 <= 21)
        {
            puts("Virgo");
        }
        else if(T2 >= 22)
        {
            puts("Libra");
        }
    }
    else if(strcmp(string, "Oct") == 0)
    {
        if(T2 <= 22)
        {
            puts("Libra");
        }
        else if(T2 >= 23)
        {
            puts("Scorpio");
        }
    }
    else if(strcmp(string, "Nov") == 0)
    {
        if(T2 <= 22)
        {
            puts("Scorpio");
        }
        else if(T2 >= 23)
        {
            puts("Sagittarius");
        }
    }
    else if(strcmp(string, "Dec") == 0)
    {
        if(T2 <= 21)
        {
            puts("Sagittarius");
        }
        else if(T2 >= 22)
        {
            puts("Capricorn");
        }
    }
}

int main(void)
{
    int T, T2;
    scanf("%d", &T);
    char string[101];
    for(int i = 1; i <= T; i++)
    {
        scanf("%d %s", &T2 ,string);
        zodiac(T2, string);
    }    


    return 0;
}
