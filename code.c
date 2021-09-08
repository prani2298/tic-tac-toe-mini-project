#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

char A[9]={'1','2','3','4','5','6','7','8','9'};
int count=0;
void check(char,char);

void gameName()
{
    printf("************************************************************************************************************************");
    printf("\t\t\t\t\t\tTic Tac Toe Game\n\n\n");
}
void show()
{
    printf("\t\t\t\t\t\t      %c | %c | %c \n",A[0],A[1],A[2]);
    printf("\t\t\t\t\t\t     ---|---|---\n");
    printf("\t\t\t\t\t\t      %c | %c | %c \n",A[3],A[4],A[5]);
    printf("\t\t\t\t\t\t     ---|---|---\n");
    printf("\t\t\t\t\t\t      %c | %c | %c \n\n\n",A[6],A[7],A[8]);
}
void Symbols()
{
    printf("x is the symbol for player 1.\n0 is the symbol for player 2.");
}
void InputSymbol()
{
    char position,symbol;
    printf("\n\n\nEnter the position and symbol:-\n");
    fflush(stdin);
    scanf(" %c",&position);
    fflush(stdin);
    scanf(" %c",&symbol);
    if(position=='1' && (symbol=='x' || symbol=='0'))
    {
     check(position,symbol);
     count++;
    }
    else if(position=='2' && (symbol=='x' || symbol=='0'))
    {
        check(position,symbol);
        count++;
    }
    else if(position=='3' && (symbol=='x' || symbol=='0'))
    {
        check(position,symbol);
        count++;
    }
    else if(position=='4' && (symbol=='x' || symbol=='0'))
    {
        check(position,symbol);
        count++;
    }
    else if(position=='5' && (symbol=='x' || symbol=='0'))
    {
        check(position,symbol);
        count++;
    }
    else if(position=='6' && (symbol=='x' || symbol=='0'))
    {
        check(position,symbol);
        count++;
    }
    else if(position=='7' && (symbol=='x' || symbol=='0'))
    {
        check(position,symbol);
        count++;
    }
    else if(position=='8' && (symbol=='x' || symbol=='0'))
    {
        check(position,symbol);
        count++;
    }
    else if(position=='9' && (symbol=='x' || symbol=='0'))
    {
        check(position,symbol);
        count++;
    }
    else
    {
        printf("Error!!!!!!!");
        exit(0);
    }
}
void check(char P,char S)
{
    int i;
    for(i=0;i<=9;i++)
    {
        if(A[i]==P)
        {
            A[i]=S;
        }
    }
}
int play()
{
    if(A[0]=='x' && A[1]=='x' && A[2]=='x')
        return (1);
    else if(A[0]=='0' && A[1]=='0' && A[2]=='0')
        return (2);
    else if(A[3]=='x' && A[4]=='x' && A[5]=='x')
        return (1);
    else if(A[3]=='0' && A[4]=='0' && A[5]=='0')
        return (2);
    else if(A[6]=='x' && A[7]=='x' && A[8]=='x')
        return (1);
    else if(A[6]=='0' && A[7]=='0' && A[8]=='0')
        return 2;
    else if(A[0]=='x' && A[3]=='x' && A[6]=='x')
        return 1;
    else if(A[0]=='0' && A[3]=='0' && A[6]=='0')
        return 2;
    else if(A[1]=='x' && A[4]=='x' && A[7]=='x')
        return 1;
    else if(A[1]=='0' && A[4]=='0' && A[7]=='0')
        return 2;
    else if(A[2]=='x' && A[5]=='x' && A[8]=='x')
        return 1;
    else if(A[2]=='0' && A[5]=='0' && A[8]=='0')
        return 2;
    else if(A[0]=='x' && A[4]=='x' && A[8]=='x')
        return 1;
    else if(A[0]=='0' && A[4]=='0' && A[8]=='0')
        return 2;
    else if(A[2]=='x' && A[4]=='x' && A[6]=='x')
        return 1;
    else if(A[2]=='0' && A[4]=='0' && A[6]=='0')
        return 2;
    else
        return 3;
}
int main()
{
    char ch;
    again:
    /*clrscr();*/
    gameName();
    show();
    Symbols();
    InputSymbol();
    label:
    /*clrscr();*/
    show();
    InputSymbol();
    if(count<9)
    {
        char k=play();
        if(k==1)
        {
            printf("\n\n\n\nPlayer 1 won the game.\n");
            count=0;
        }
        else if(k==2)
        {
            printf("\n\n\n\nPlayer 2 won the game.\n");
            count=0;
        }
        else
            goto label;
    }
    else
    {
        printf("\n\n\n\nDraw!!!!!\n");
        count=0;
    }
    show();
    getch();
    printf("\nDo you want play the game again:\nIf yes press y.\nIf no press n.");
    printf("\nEnter your choice: ");
    fflush(stdin);
    scanf("%c",&ch);
    if(ch=='y' || ch=='Y')
    {
        A[0]='1';
        A[1]='2';
        A[2]='3';
        A[3]='4';
        A[4]='5';
        A[5]='6';
        A[6]='7';
        A[7]='8';
        A[8]='9';
        goto again;
    }
    else
    {
        printf("\nThanx for playing the game.");
    }
    printf("************************************************************************************************************************");
    return 0;
}
