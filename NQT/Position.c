//position of person
#include <stdio.h>
#include <conio.h>

int main()
{
        int n, x = 0, y = 0, d = 10;
        char c = 'R';
                printf("Enter n= ");
                scanf("%d", &n);
                while (n)
                {
                        switch (c)
                        {
                        case 'R':
                                x += d;
                                 c = 'U';
                                d += 10;
                                break;
                        case 'U':
                                y += d;
                                 c = 'L';
                                d += 10;
                                break;
                        case 'L':
                                x -= d; 
                                 c = 'D';
                                d += 10;
                                break;
                        case 'D':
                                y -= d;
                                 c = 'A';
                                d += 10;
                                break;
                        case 'A':
                                x += d;
                                c = 'R';
                                d += 10;
                                break;
                        }
                        n--;
                }
                printf("X = %d Y = %d", x, y);
        getch();
        return 0;
}