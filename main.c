#include <stdio.h>

void Add_agent()
{
    printf( "####" );
}
void Interrogate_Handlers()
{
    printf( "####" );
}
void Validate_Agents()
{
    printf( "####" );
}
void Count_Agents()
{
    printf( "####" );
}
void Attack()
{
    printf( "####" );
}

int main()
{
    int input;
    printf( "1. Add Agent\t\t" );
    printf( "2. Interrogate_Handlers\n\n" );
    printf( "3. Validate_Agents\t" );
    printf( "4. Count_Agents\n\n" );
    printf( "5. Attack\t\n\n" );
    printf( "Selection: " );


do {
    scanf( "%d", &input );
    switch ( input )
 {
        case 1:            /* Note the colon, not a semicolon */
            Add_agent();
            printf( "\n" );
            break;
        case 2:
            Interrogate_Handlers();
            printf( "\n" );
            break;
        case 3:
            Validate_Agents();
            printf( "\n" );
            break;
        case 4:
            Count_Agents();
            printf( "\n" );
            break;
        case 5:
            Attack();
            printf( "\n" );
            break;
        case 6:
            return 0;
            printf( "\n" );
            break;
        default:
            printf( "Bad input, quitting!\n" );
            break;
    }
    getchar();
}
while (input != 6);
return 0;
}
