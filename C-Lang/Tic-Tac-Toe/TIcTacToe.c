#include <stdio.h>
#include <time.h>

int main()
{
    //Gera o número que decide quem começa.
    int rN = time(0);
    int rN2 = time(0);
    int fRN = rN * rN2;
    
    if(fRN <=0)
    {
        fRN = fRN * -1;
    }
    
    int rNum = fRN % 2;
    //------------------------------------------
    
    //Valores das casas. (Serve pra checar o alinhamento e se a casa já foi marcada.)
    int C7 = 10,C8 = 11,C9 = 12,C4 = 13,C5 = 14,C6 = 15,C1 = 16,C2 = 17,C3 = 18;
    //------------------------------------------
    
    //Espaços da malha.
    char C7c = ' ',C8c = ' ',C9c = ' ',C4c = ' ',C5c = ' ',C6c = ' ',C1c = ' ',C2c = ' ',C3c = ' ';
    //------------------------------------------
    
    //Nome dos jogadores.
    char P1[10];
    char P2[10];
    printf("Nome do Player 1:\n");
    scanf("%s", P1);
    printf("Nome do Player 2:\n");
    scanf("%s", P2);
    //------------------------------------------
    
    //Passo da partida.
    int i = 0;
    //------------------------------------------
    
    //Printa a malha inicial.
    printf("%c|%c|%c\n- - -\n%c|%c|%c\n- - -\n%c|%c|%c\n", C7c, C8c, C9c, C4c, C5c, C6c, C1c, C2c, C3c);
    //------------------------------------------
    
    
    while(i <= 8)//Partida.
    {
        if(rNum == 0)//Testa quem vai jogar e a casa a ser marcada.
        {
            int xValue;
            printf("Vez do %s\nDigite o numero da casa usando o Numpad!\n", P1);
            scanf("%d", &xValue);
            switch(xValue)//Verifica se a casa já esta marcada, senão estiver permite marcar.
            {
                case 7:
                    if(C7 == 1 || C7 == 2)
                    {
                        printf("Casa já marcada!\n");
                        rNum = 1;
                    }else
                    {
                        C7c = 'X';
                        printf("%c|%c|%c\n- - -\n%c|%c|%c\n- - -\n%c|%c|%c\n", C7c, C8c, C9c, C4c, C5c, C6c, C1c, C2c, C3c);
                        C7 = 1;
                    }
                break;
                case 8:
                    if(C8 == 1 || C8 == 2)
                    {
                        printf("Casa já marcada!\n");  
                        rNum = 1;
                    }else
                    {
                        C8c = 'X';
                        printf("%c|%c|%c\n- - -\n%c|%c|%c\n- - -\n%c|%c|%c\n", C7c, C8c, C9c, C4c, C5c, C6c, C1c, C2c, C3c);
                        C8 = 1;
                    }
                break;
                case 9:
                    if(C9 == 1 || C9 == 2)
                    {
                        printf("Casa já marcada!\n");
                        rNum = 1;
                    }else
                    {
                        C9c = 'X';
                        printf("%c|%c|%c\n- - -\n%c|%c|%c\n- - -\n%c|%c|%c\n", C7c, C8c, C9c, C4c, C5c, C6c, C1c, C2c, C3c);
                        C9 = 1;
                    }
                break;
                case 4:
                    if(C4 == 1 || C4 == 2)
                    {
                        printf("Casa já marcada!\n");
                        rNum = 1;
                    }else
                    {
                        C4c = 'X';
                        printf("%c|%c|%c\n- - -\n%c|%c|%c\n- - -\n%c|%c|%c\n", C7c, C8c, C9c, C4c, C5c, C6c, C1c, C2c, C3c);
                        C4 = 1;
                    }
                break;
                case 5:
                    if(C5 == 1 || C5 == 2)
                    {
                        printf("Casa já marcada!\n");
                        rNum = 1;
                    }else
                    {
                        C5c = 'X';
                        printf("%c|%c|%c\n- - -\n%c|%c|%c\n- - -\n%c|%c|%c\n", C7c, C8c, C9c, C4c, C5c, C6c, C1c, C2c, C3c);
                        C5 = 1;
                    }
                break;
                case 6:
                    if(C6 == 1 || C6 == 2)
                    {
                        printf("Casa já marcada!\n");
                        rNum = 1;
                    }else
                    {
                        C6c = 'X';
                        printf("%c|%c|%c\n- - -\n%c|%c|%c\n- - -\n%c|%c|%c\n", C7c, C8c, C9c, C4c, C5c, C6c, C1c, C2c, C3c);
                        C6 = 1;
                    }
                break;
                case 1:
                    if(C1 == 1 || C1 == 2)
                    {
                        printf("Casa já marcada!\n");
                        rNum = 1;
                    }else
                    {
                        C1c = 'X';
                        printf("%c|%c|%c\n- - -\n%c|%c|%c\n- - -\n%c|%c|%c\n", C7c, C8c, C9c, C4c, C5c, C6c, C1c, C2c, C3c);
                        C1 = 1;
                    }
                break;
                case 2:
                    if(C2 == 1 || C2 == 2)
                    {
                        printf("Casa já marcada!\n");
                        rNum = 1;
                    }else
                    {
                        C2c = 'X';
                        printf("%c|%c|%c\n- - -\n%c|%c|%c\n- - -\n%c|%c|%c\n", C7c, C8c, C9c, C4c, C5c, C6c, C1c, C2c, C3c);
                        C2 = 1;
                    }
                break;
                case 3:
                    if(C3 == 1 || C3 == 2)
                    {
                        printf("Casa já marcada!\n");
                        rNum = 1;
                    }else
                    {
                        C3c = 'X';
                        printf("%c|%c|%c\n- - -\n%c|%c|%c\n- - -\n%c|%c|%c\n", C7c, C8c, C9c, C4c, C5c, C6c, C1c, C2c, C3c);
                        C3 = 1;
                    }
                break;
            }
        
        }else//Mesma estrutura porém para o player 2.
        {
            int yValue;
            printf("Vez do %s\nDigite o numero da casa usando o Numpad!\n", P2);
            scanf("%d", &yValue);
            switch(yValue)
            {
                case 7:
                    if(C7 == 1 || C7 == 2)
                    {
                        printf("Casa já marcada!\n");
                        rNum = 0;
                    }else
                    {
                        C7c = 'Y';
                        printf("%c|%c|%c\n- - -\n%c|%c|%c\n- - -\n%c|%c|%c\n", C7c, C8c, C9c, C4c, C5c, C6c, C1c, C2c, C3c);
                        C7 = 2;
                    }
                break;
                case 8:
                    if(C8 == 1 || C8 == 2)
                    {
                        printf("Casa já marcada!\n");
                        rNum = 0;
                    }else
                    {
                        C8c = 'Y';
                        printf("%c|%c|%c\n- - -\n%c|%c|%c\n- - -\n%c|%c|%c\n", C7c, C8c, C9c, C4c, C5c, C6c, C1c, C2c, C3c);
                        C8 = 2;
                    }
                break;
                case 9:
                    if(C9 == 1 || C9 == 2)
                    {
                        printf("Casa já marcada!\n");
                        rNum = 0;
                    }else
                    {
                        C9c = 'Y';
                        printf("%c|%c|%c\n- - -\n%c|%c|%c\n- - -\n%c|%c|%c\n", C7c, C8c, C9c, C4c, C5c, C6c, C1c, C2c, C3c);
                        C9 = 2;
                    }
                break;
                case 4:
                    if(C4 == 1 || C4 == 2)
                    {
                        printf("Casa já marcada!\n");
                        rNum = 0;
                    }else
                    {
                        C4c = 'Y';
                        printf("%c|%c|%c\n- - -\n%c|%c|%c\n- - -\n%c|%c|%c\n", C7c, C8c, C9c, C4c, C5c, C6c, C1c, C2c, C3c);
                        C4 = 2;
                    }
                break;
                case 5:
                    if(C5 == 1 || C5 == 2)
                    {
                        printf("Casa já marcada!\n");
                        rNum = 0;
                    }else
                    {
                        C5c = 'Y';
                        printf("%c|%c|%c\n- - -\n%c|%c|%c\n- - -\n%c|%c|%c\n", C7c, C8c, C9c, C4c, C5c, C6c, C1c, C2c, C3c);
                        C5 = 2;
                    }
                break;
                case 6:
                    if(C6 == 1 || C6 == 2)
                    {
                        printf("Casa já marcada!\n");
                        rNum = 0;
                    }else
                    {
                        C6c = 'Y';
                        printf("%c|%c|%c\n- - -\n%c|%c|%c\n- - -\n%c|%c|%c\n", C7c, C8c, C9c, C4c, C5c, C6c, C1c, C2c, C3c);
                        C6 = 2;
                    }
                break;
                case 1:
                    if(C1 == 1 || C1 == 2)
                    {
                        printf("Casa já marcada!\n");
                        rNum = 0;
                    }else
                    {
                        C1c = 'Y';
                        printf("%c|%c|%c\n- - -\n%c|%c|%c\n- - -\n%c|%c|%c\n", C7c, C8c, C9c, C4c, C5c, C6c, C1c, C2c, C3c);
                        C1 = 2;
                    }
                break;
                case 2:
                    if(C2 == 1 || C2 == 2)
                    {
                        printf("Casa já marcada!\n");
                        rNum = 0;
                    }else
                    {
                        C2c = 'Y';
                        printf("%c|%c|%c\n- - -\n%c|%c|%c\n- - -\n%c|%c|%c\n", C7c, C8c, C9c, C4c, C5c, C6c, C1c, C2c, C3c);
                        C2 = 2;
                    }
                break;
                case 3:
                    if(C3 == 1 || C3 == 2)
                    {
                        printf("Casa já marcada!\n"); 
                        rNum = 0;
                    }else
                    {
                        C3c = 'Y';
                        printf("%c|%c|%c\n- - -\n%c|%c|%c\n- - -\n%c|%c|%c\n", C7c, C8c, C9c, C4c, C5c, C6c, C1c, C2c, C3c);
                        C3 = 2;
                    }
                break;
            }
        }
        
        //Checa o alinhamento.
        if(C7 == C8 && C8 == C9)
        {
            if(C7 == 1)
            {
                printf("%s venceu o jogo!\n", P1);
                i = 8;
            }else
            {
                printf("%s venceu o jogo!\n", P2);
                i = 8;
            }
        }
        
        if(C4 == C5 && C5 == C6)
        {
            if(C4 == 1)
            {
                printf("%s venceu o jogo!\n", P1);
                i = 8;
            }else
            {
                printf("%s venceu o jogo!\n", P2);
                i = 8;
            }
        }
        
        if(C1 == C2 && C2 == C3)
        {
            if(C1 == 1)
            {
                printf("%s venceu o jogo!\n", P1);
                i = 8;
            }else
            {
                printf("%s venceu o jogo!\n", P2);
                i = 8;
            }
        }
        
        if(C7 == C4 && C4 == C1)
        {
            if(C7 == 1)
            {
                printf("%s venceu o jogo!\n", P1);
                i = 8;
            }else
            {
                printf("%s venceu o jogo!\n", P2);
                i = 8;
            }
        }
        
        if(C8 == C5 && C5 == C2)
        {
            if(C8 == 1)
            {
                printf("%s venceu o jogo!\n", P1);
                i = 8;
            }else
            {
                printf("%s venceu o jogo!\n", P2);
                i = 8;
            }
        }
        
        if(C9 == C6 && C6 == C3)
        {
            if(C6 == 1)
            {
                printf("%s venceu o jogo!\n", P1);
                i = 8;
            }else
            {
                printf("%s venceu o jogo!\n", P2);
                i = 8;
            }
        }
        
        if(C7 == C5 && C5 == C3)
        {
            if(C7 == 1)
            {
                printf("%s venceu o jogo!\n", P1);
                i = 8;
            }else
            {
                printf("%s venceu o jogo!\n", P2);
                i = 8;
            }
        }
        
        if(C9 == C5 && C5 == C1)
        {
            if(C9 == 1)
            {
                printf("%s venceu o jogo!\n", P1);
                i = 8;
            }else
            {
                printf("%s venceu o jogo!\n", P2);
                i = 8;
            }
        }
        //------------------------------------------
        
        //Passa a vez.
        if(rNum == 0)
        {
            rNum = 1;
        }else
        {
            rNum = 0;
        }
        //------------------------------------------
        
        i++;//Incrementa o passo da partida.
    }
    printf("Pressione alguma tecla para fechar.");
    getch();
    return 0;
}

