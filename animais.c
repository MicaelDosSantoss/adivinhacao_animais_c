#include <stdio.h>

int main() {

    printf("Leão\nCavalo\nHomem\nMacaco\nMorcego\nBaleia\nAvestruz\nPinguim\nPato\nÁguia\nTartaruga\nCobra\nCrocodilo\n");
    
    printf("Seu animal e um mamifero [s/n]? ");
    char pergunta_mamifero;
    scanf(" %c",&pergunta_mamifero);

    if(pergunta_mamifero == 's' || pergunta_mamifero == 'S') {

        printf("Ele e um Quadrupede[s/n]:");
        char pergunta_quadrupedes;
        scanf(" %c",&pergunta_quadrupedes);

        if (pergunta_quadrupedes == 's' || pergunta_quadrupedes == 'S') {
            printf("Ele e um carnivoro[s/n]: ");
            char pergunta_carnivoro;
            scanf(" %c", &pergunta_carnivoro);

            if(pergunta_carnivoro == 's' || pergunta_carnivoro == 'S') {
                printf("Ele e um Leao");
            } else {
                printf("Ele e um Herbivoro[s/n]: ");
                char pergunta_herbivoro;
                scanf(" %c",&pergunta_herbivoro);

                if(pergunta_herbivoro ==  's' || pergunta_herbivoro == 'S') {
                    printf("Ele e um Cavalo");
                } else {
                    printf("Animal nao encontrado!");
                };
            };
        } else {
        printf("Seu animal e bipede[s/n]: ");
        char pergunta_bipede;
        scanf(" %c", &pergunta_bipede);

        if(pergunta_bipede == 's' || pergunta_bipede == 'S') {
            printf("Seu animal e um onivoro[s/n]: ");
            char pergunta_onivoro;
            scanf(" %c",&pergunta_onivoro);

            if(pergunta_onivoro == 's' || pergunta_onivoro == 'S') {
                printf("Seu animal e um homem!");
            } else {
                printf("Seu animal e um frutivoro[s/n]: ");
                char pergunta_frutivoro;
                scanf(" %c", &pergunta_frutivoro);

                if(pergunta_frutivoro == 's' || pergunta_frutivoro == 'S') {
                    printf("Seu animal e um Macaco!");
                } else {
                    printf("Animal nao encontrado!");
                };
            };
        } else {
            printf("Seu animal e voador[s/n]; ");
            char pergunta_voador;
            scanf(" %c", &pergunta_voador);

            if(pergunta_voador == 's' || pergunta_voador == 'S') {
                printf("O animal e um Morcego");
            } else {
                printf("Seu animal e aquatico[s/n]: ");
                char pergunta_aquatico;
                scanf(" %c", &pergunta_aquatico);

                if(pergunta_aquatico == 's' || pergunta_aquatico == 'S') {
                    printf("Seu animal e uma Baleia!");
                } else {
                    printf("Animal não encontrado");
                };
            };
        }
      }
    } else {
        printf("Seu animal e uma ave[s/n]: ");
        char pergunta_ave;
        scanf(" %c",&pergunta_ave);

        if(pergunta_ave == 's' || pergunta_ave == 'S') {
            printf("Seu animal e um ave nao-voadora[s/n]:");
            char pergunta_nao_voadora;
            scanf(" %c",&pergunta_nao_voadora);

            if(pergunta_nao_voadora == 's' || pergunta_nao_voadora == 'S') {
                printf("sua ave e tropical[s/n]: ");
                char pergunta_tropical;
                scanf(" %c",&pergunta_tropical);

                if(pergunta_tropical == 's' || pergunta_tropical == 'S') {
                    printf("Seu animal e um Avestruz");
                } else {
                    printf("Sua ave e polar[s/n]: ");
                    char pergunta_polar;
                    scanf(" %c",&pergunta_polar);

                    if(pergunta_polar == 's' || pergunta_polar == 'S') {
                        printf("Seu animal e um Pinguim!");
                    } else {
                        printf("Ave nao encontrada!");
                    };
                };
            } else {
                printf("Sua ave e nadadora[s/n]: ");
                char pergunta_nadadora;
                scanf(" %c",&pergunta_nadadora);
                
                if(pergunta_nadadora == 's' || pergunta_nadadora == 'S') {
                    printf("Seu animal e um Pato!");
                } else {
                    printf("Sua ave e de rapina[s/n]: ");
                    char pergunta_de_rapina;
                    scanf(" %c",&pergunta_de_rapina);

                    if(pergunta_de_rapina == 's' || pergunta_de_rapina == 'S') {
                        printf("Seu animal e uma Aguia!");
                    } else {
                        printf("Ave nao encontrado!");
                    }
                };
            }
        } else {
            printf("Seu animal e um Reptil[s/n]: ");
            char pergunta_reptil;
            scanf(" %c",&pergunta_reptil);

            if(pergunta_reptil == 's' || pergunta_reptil == 'S') {
                printf("Esse reptil tem casco[s/n]: ");
                char pergunta_casco;
                scanf(" %c",&pergunta_casco);

                if(pergunta_casco == 's' || pergunta_casco == 'S') {
                    printf("Seu reptil e uma Tartaruga!");
                } else {
                    printf("Esse reptil nao tem pata[s/n]: ");
                    char pergunta_pata;
                    scanf(" %c",&pergunta_pata);

                    if(pergunta_pata == 's' || pergunta_pata == 'S') {
                        printf("Seu animal e uma Cobra!");
                    } else {
                        printf("Seu reptil e um Carnivoro[s/n]: ");
                        char pergunta_reptil_carnivoro;
                        scanf(" %c",&pergunta_reptil_carnivoro);

                        if(pergunta_reptil_carnivoro == 's' || pergunta_reptil_carnivoro == 'S') {
                            printf("Seu animal e um Crocodilo!");
                        } else {
                            printf("Animal não encontrado!");
                        };
                    }
                }
            } else {
                printf("Animal não encontrado!");
            }
        }
    }

    return 0;
}