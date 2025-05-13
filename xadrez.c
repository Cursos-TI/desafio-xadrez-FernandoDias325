#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//inicialização do tabuleiro
int tabuleiro [8][8], rows, columns;

// Função da torre, ela recebe um valor como parametro que serve de referencia para saber se vai para direita ou esquerda.
void mov_Torre(int direcao) {
    if(direcao == 1) {
        for( int rows = 0; rows < 8; rows++) {
            printf("\n");
            for( int columns = 0; columns < 8; columns ++) {
                switch (rows)
                {
                    case 0:
                        tabuleiro[rows][columns] = (columns == 0 ) ? 1 : 0;  
                        break;
                    case 1:
                        tabuleiro[rows][columns] = (columns == 0 ) ? 1 : 0;
                        break;
                    case 2:
                        tabuleiro[rows][columns] = (columns == 0 ) ? 1 : 0;
                        break;
                    case 3:
                    tabuleiro[rows][columns] = (columns == 0 ) ? 1 : 0;
                        break;
                    case 4:
                    tabuleiro[rows][columns] = (columns == 0 ) ? 1 : 0;
                        break;
                    case 5:
                    tabuleiro[rows][columns] = (columns == 0 ) ? 1 : 0;
                        break;
                    case 6:
                    tabuleiro[rows][columns] = (columns == 0 ) ? 1 : 0;
                        break;
                    case 7:
                    tabuleiro[rows][columns] = (columns == 0 ) ? 1 : 0;
                        break;
                    default:
                        tabuleiro[rows][columns] = 0;
                        break;
                }
                printf("[%d] ", tabuleiro[rows][columns]);
                }
            }
            printf("\n");
            printf("O movimento feito foi: \n");
            int x = 0;
            while (x !=  8)
            {
                printf("Cima\n");
                x++;
            };
            printf("============================================\n");
    } else if(direcao == 2) {
        for( int rows = 0; rows < 8; rows++) {
            printf("\n");
            for( int columns = 0; columns < 8; columns ++) {
                if(rows == 7){
                        switch (columns) {
                            case 0:
                                tabuleiro[rows][columns] = 1;
                                break;
                            case 1:
                                tabuleiro[rows][columns] = 1;
                                break;
                            case 2:
                                tabuleiro[rows][columns] = 1;
                                break;
                            case 3:
                                tabuleiro[rows][columns] = 1;
                                break;
                            case 4:
                                tabuleiro[rows][columns] = 1;
                                break;
                            case 5:
                                tabuleiro[rows][columns] = 1;
                                break;
                            case 6:
                                tabuleiro[rows][columns] = 1;
                                break;
                            case 7:
                                tabuleiro[rows][columns] = 1;
                                break;
                        }
                } else {
                    tabuleiro[rows][columns] = 0;
                }
                printf("[%d] ", tabuleiro[rows][columns]);
                }
        }
        printf("\n");
        printf("O movimento feito foi: \n");
        int x = 0;
        do{
            printf("Direita\n");
            x++;
        } while (x !=  8);
        printf("============================================\n");

        }
};

// Função que assim como a função da torre, recebe um parametro para saber a direção inicial do movimento, direita ou esquerda.
//uasmos switch para saber colocar o numero 1 no tabuleiro em conjunto com a estrutura for e do while para escrever na tela o movimento
void mov_Rainha(int direcao_inicial) {
    switch (direcao_inicial)
    {
        //Esquerda
        case 1:
            for( int rows = 0; rows < 8; rows++) {
                printf("\n");
                for( int columns = 0; columns < 8; columns ++) {
                    if(rows == 7){
                            switch (columns) {
                                case 0:
                                    tabuleiro[rows][columns] = 1;
                                    break;
                                case 1:
                                    tabuleiro[rows][columns] = 1;
                                    break;
                                case 2:
                                    tabuleiro[rows][columns] = 1;
                                    break;
                                case 3:
                                    tabuleiro[rows][columns] = 1;
                                    break;
                                case 4:
                                    tabuleiro[rows][columns] = 1;
                                    break;
                                case 5:
                                    tabuleiro[rows][columns] = 1;
                                    break;
                                case 6:
                                    tabuleiro[rows][columns] = 1;
                                    break;
                                case 7:
                                    tabuleiro[rows][columns] = 1;
                                    break;
                            }
                    } else {
                        tabuleiro[rows][columns] = 0;
                    }
                    printf("[%d] ", tabuleiro[rows][columns]);
                    }
            }
            printf("\n");
            printf("O movimento feito foi: \n");
            int x = 0;
            do{
                printf("Esquerda\n");
                x++;
            } while (x !=  8);
            printf("============================================\n");
            break;
        case 2:
            //Diagonal Esqueda
            for( int rows = 0; rows < 8; rows++) {
                printf("\n");
                for( int columns = 0; columns < 8; columns ++) {
                    tabuleiro[rows][columns] = (rows == 6 && columns == 2 || rows == 7 && columns == 3 ) ? 1 : 0;
                    printf("[%d] ", tabuleiro[rows][columns]);
                    }
            }
            printf("\n");
            break;
        case 3:
            //Cima
            for( int rows = 0; rows < 8; rows++) {
                printf("\n");
                for( int columns = 0; columns < 8; columns ++) {
                    tabuleiro[rows][columns] = (rows == 6 && columns == 3 || rows == 7 && columns == 3 ) ? 1 : 0;
                    printf("[%d] ", tabuleiro[rows][columns]);
                    }
            }
            printf("\n");
            break;
        case 4:
            //Diagonal Direita 
            for( int rows = 0; rows < 8; rows++) {
                printf("\n");
                for( int columns = 0; columns < 8; columns ++) {
                    tabuleiro[rows][columns] = (rows == 6 && columns == 4 || rows == 7 && columns == 3 ) ? 1 : 0;
                    printf("[%d] ", tabuleiro[rows][columns]);
                    }
            }
            printf("\n");
            break;
        case 5:
            //Direita
            for( int rows = 0; rows < 8; rows++) {
                printf("\n");
                for( int columns = 0; columns < 8; columns ++) {
                    tabuleiro[rows][columns] = (rows == 6 && columns == 4 || rows == 7 && columns == 3 ) ? 1 : 0;
                    printf("[%d] ", tabuleiro[rows][columns]);
                    }
            }
            printf("\n");
            break;
        default:
            break;
    }
    printf("\n");
};

int main() {
    printf("============================================\n");
    printf("Bem vindo ao movimento de peças de  xadrez\n");
    printf("============================================\n");
    int choice;
    int movimento_cavalo;
    int moviemento_Torre;
    int moviemento_Rainha;
    int movimento_bispo;
    int x;
    //while para dar as opções das peças, e switch para rodar a escolha do usuario.
    while(choice  != 5) {
        printf("Escolha uma peça:\n1- Cavalo\n2- Torre\n3- Bispo\n4- Rainha\n5- Sair\n");
        scanf("%i", & choice);
        printf("============================================\n");
        switch(choice) {
            case 1:
                //Cavalo
                printf("Escolha a direção do movimento:\n1- Direita\n2- Esquerda\n");
                scanf("%i", & movimento_cavalo);
                if(movimento_cavalo == 1) {
                    for( int rows = 0; rows < 8; rows++) {
                        printf("\n");
                        for( int columns = 0; columns < 8; columns ++) {
                            switch (rows)
                            {
                                case 5:
                                    tabuleiro[rows][columns] = (columns == 1 || columns == 2) ? 1 : 0;
                                    break;
                                case 6:
                                    tabuleiro[rows][columns] = (columns == 1) ? 1 : 0;
                                    break;
                                case 7:
                                    tabuleiro[rows][columns] = (columns == 1) ? 1 : 0;
                                    break;
                                default:
                                    tabuleiro[rows][columns] = 0;
                                    break;
                            }
                            printf("[%d] ", tabuleiro[rows][columns]);
                        }
                    };
                    printf("\n============================================\n");
                    printf("O movimento feito foi: \n");
                    for( int i = 0; i < 3; i++) {
                        while(i <= 1) {
                            printf("Cima\n");
                            i++;   
                        }
                        printf("Direita\n");
                    }
                    printf("============================================\n");
                } else {
                    for( int rows = 0; rows < 8; rows++) {
                        printf("\n");
                        for( int columns = 0; columns < 8; columns ++) {
                            switch (rows)
                            {
                                case 5:
                                    tabuleiro[rows][columns] = (columns == 0 || columns == 1) ? 1 : 0;
                                    break;
                                case 6:
                                    tabuleiro[rows][columns] = (columns == 1) ? 1 : 0;
                                    break;
                                case 7:
                                    tabuleiro[rows][columns] = (columns == 1) ? 1 : 0;
                                    break;
                                default:
                                    tabuleiro[rows][columns] = 0;
                                    break;
                            }
                            printf("[%d] ", tabuleiro[rows][columns]);
                        }
                    };
                    printf("\n============================================\n");
                    printf("O movimento feito foi: \n");
                    for( int i = 0; i < 3; i++) {
                        while(i <= 1) {
                            printf("Cima\n");
                            i++;   
                        }
                        printf("Esquerda\n");
                    }
                    printf("============================================\n");
                };
                break;

            case 2:
                //Torre
                printf("Escolha a direção do movimento da Torre:\n1- Cima\n2- Direita\n");
                scanf("%i", & moviemento_Torre);
                printf("============================================");
                mov_Torre(moviemento_Torre);
                break;

            case 3:
                //Bispo
                printf("Escolha a direção do movimento:\n1- Esquerda\n2- Direita\n");
                scanf("%i", & movimento_bispo);
                printf("============================================\n");
                if(movimento_bispo == 1) {
                    printf("Quantas casas gostaria de se mover ?\n1- 1\n2- 2\n");
                    scanf("%i", & movimento_bispo);
                    if(movimento_bispo == 1) {
                        for( int rows = 0; rows < 8; rows++) {
                            printf("\n");
                            for( int columns = 0; columns < 8; columns ++) {
                                switch(rows)
                                {
                                    case 6:
                                        tabuleiro[rows][columns] = (columns == 1) ? 1 : 0;
                                        break;
                                    case 7:
                                        tabuleiro[rows][columns] = (columns == 2) ? 1 : 0;
                                        break;
                                    default:
                                        tabuleiro[rows][columns] = 0;
                                        break;
                                }
                                printf("[%d] ", tabuleiro[rows][columns]);
                            }
                        }
                        printf("\n");
                        printf("\n");
                        printf("O movimento feito foi: \n");
                        x = 0;
                        while (x !=  1)
                        {
                            printf("Cima Esquerda\n");
                            x++;
                        };
                        printf("============================================\n");
                        break;
                    } else {
                        for( int rows = 0; rows < 8; rows++) {
                            printf("\n");
                            for( int columns = 0; columns < 8; columns ++) {
                                switch (rows)
                                {
                                    case 5:
                                        tabuleiro[rows][columns] = (columns == 0) ? 1 : 0;
                                        break;
                                    case 6:
                                        tabuleiro[rows][columns] = (columns == 1) ? 1 : 0;
                                        break;
                                    case 7:
                                        tabuleiro[rows][columns] = (columns == 2) ? 1 : 0;
                                        break;
                                    default:
                                        tabuleiro[rows][columns] = 0;
                                        break;
                                };
                                printf("[%d] ", tabuleiro[rows][columns]);
                            };
                        };
                        printf("\n");
                        printf("\n");
                        printf("O movimento feito foi: \n");
                        x = 0;
                        do{
                            printf("Cima Direita\n");
                            x++;
                        }while (x !=  2);
                        printf("============================================\n");
                        break;
                    }
                } else {
                    
                    printf("Quantas casas gostaria de se mover ?\n1- 1\n2- 2\n3- 3\n4- 4\n5- 5\n");
                    scanf("%i", & movimento_bispo);
                    switch(movimento_bispo) {
                        case 1: 
                            for( int rows = 0; rows < 8; rows++) {
                                printf("\n");
                                for( int columns = 0; columns < 8; columns ++) {
                                    switch(rows)
                                    {
                                        case 6:
                                            tabuleiro[rows][columns] = (columns == 3) ? 1 : 0;
                                            break;
                                        case 7:
                                            tabuleiro[rows][columns] = (columns == 2) ? 1 : 0;
                                            break;
                                        default:
                                            tabuleiro[rows][columns] = 0;
                                            break;
                                    }
                                    printf("[%d] ", tabuleiro[rows][columns]);
                                }
                            }
                            printf("\n");
                            printf("\n");
                            printf("O movimento feito foi: \n");
                            int x = 0;
                            while (x !=  1)
                            {
                                printf("Cima Direita\n");
                                x++;
                            };
                            printf("============================================\n");
                            break;
                        case 2:
                            for( int rows = 0; rows < 8; rows++) {
                                printf("\n");
                                for( int columns = 0; columns < 8; columns ++) {
                                    switch (rows)
                                    {
                                        case 5:
                                            tabuleiro[rows][columns] = (columns == 4) ? 1 : 0;
                                            break;
                                        case 6:
                                            tabuleiro[rows][columns] = (columns == 3) ? 1 : 0;
                                            break;
                                        case 7:
                                            tabuleiro[rows][columns] = (columns == 2) ? 1 : 0;
                                            break;
                                        default:
                                            tabuleiro[rows][columns] = 0;
                                            break;
                                    };
                                    printf("[%d] ", tabuleiro[rows][columns]);
                                };
                            };
                            printf("\n");
                            printf("\n");
                            printf("O movimento feito foi: \n");
                            x = 0;
                            while (x !=  2)
                            {
                                printf("Cima Direita\n");
                                x++;
                            };
                            printf("============================================\n");
                            break;
                        case 3:
                            for( int rows = 0; rows < 8; rows++) {
                                printf("\n");
                                for( int columns = 0; columns < 8; columns ++) {
                                    switch (rows)
                                    {
                                        case 4:
                                            tabuleiro[rows][columns] = (columns == 5) ? 1 : 0;
                                            break;
                                        case 5:
                                            tabuleiro[rows][columns] = (columns == 4) ? 1 : 0;
                                            break;
                                        case 6:
                                            tabuleiro[rows][columns] = (columns == 3) ? 1 : 0;
                                            break;
                                        case 7:
                                            tabuleiro[rows][columns] = (columns == 2) ? 1 : 0;
                                            break;
                                        default:
                                            tabuleiro[rows][columns] = 0;
                                            break;
                                    };
                                    printf("[%d] ", tabuleiro[rows][columns]);
                                };
                            };
                            printf("\n");
                            printf("\n");
                            printf("O movimento feito foi: \n");
                            x = 0;
                            while (x !=  3)
                            {
                                printf("Cima Direita\n");
                                x++;
                            }
                            printf("============================================\n");
                            break;
                        case 4:
                            for( int rows = 0; rows < 8; rows++) {
                                printf("\n");
                                for( int columns = 0; columns < 8; columns ++) {
                                    switch (rows)
                                    {
                                        case 3:
                                            tabuleiro[rows][columns] = (columns == 6) ? 1 : 0;
                                            break;
                                        case 4:
                                            tabuleiro[rows][columns] = (columns == 5) ? 1 : 0;
                                            break;
                                        case 5:
                                            tabuleiro[rows][columns] = (columns == 4) ? 1 : 0;
                                            break;
                                        case 6:
                                            tabuleiro[rows][columns] = (columns == 3) ? 1 : 0;
                                            break;
                                        case 7:
                                            tabuleiro[rows][columns] = (columns == 2) ? 1 : 0;
                                            break;
                                        default:
                                            tabuleiro[rows][columns] = 0;
                                            break;
                                    };
                                    printf("[%d] ", tabuleiro[rows][columns]);
                                };
                            };
                            printf("\n");
                            printf("\n");
                            printf("O movimento feito foi: \n");
                            x = 0;
                            while (x !=  4)
                            {
                                printf("Cima Direita\n");
                                x++;
                            }
                            printf("============================================\n");
                            break;
                        case 5: 
                            for( int rows = 0; rows < 8; rows++) {
                                printf("\n");
                                for( int columns = 0; columns < 8; columns ++) {
                                    switch (rows)
                                    {
                                        case 2:
                                            tabuleiro[rows][columns] = (columns == 7) ? 1 : 0;
                                            break;
                                        case 3:
                                            tabuleiro[rows][columns] = (columns == 6) ? 1 : 0;
                                            break;
                                        case 4:
                                            tabuleiro[rows][columns] = (columns == 5) ? 1 : 0;
                                            break;
                                        case 5:
                                            tabuleiro[rows][columns] = (columns == 4) ? 1 : 0;
                                            break;
                                        case 6:
                                            tabuleiro[rows][columns] = (columns == 3) ? 1 : 0;
                                            break;
                                        case 7:
                                            tabuleiro[rows][columns] = (columns == 2) ? 1 : 0;
                                            break;
                                        default:
                                            tabuleiro[rows][columns] = 0;
                                            break;
                                    };
                                    printf("[%d] ", tabuleiro[rows][columns]);
                                };
                            };
                            printf("\n");
                            printf("\n");
                            printf("O movimento feito foi: \n");
                            x = 0;
                            do{
                                printf("Cima Direita\n");
                                x++;
                            }while (x !=  5);
                            printf("============================================\n");
                            break;
                        }
                };
                printf("============================================\n");
                break;
            case 4:
                //Rainha
                printf("Escolha a direção do movimento e suponha que temos somente a rainha no tabuleiro vazio:\n1- Equerda\n2- Diagonal esquerda\n3- Cima\n4- Diagonal Direita\n6- Direita\n");
                scanf("%i", & moviemento_Rainha);
                printf("============================================\n");
                mov_Rainha(moviemento_Rainha);
                break;

            case 5:
                //Sair
                break;
        };
    };
    printf("FIM DO PROGRAMA\n");
    printf("Obrigado por jogar!");
    printf("FIM");
    return 0;
}