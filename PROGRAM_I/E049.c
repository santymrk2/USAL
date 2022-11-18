#include <stdio.h>
#define N 100

typedef struct {
    char name[N];
    char squad[N];
    int playedGames;
    int goals;
} PLAYER;

//functions with data in of players (name, squad, playedGames, goal)

void nameRead(char name[]){
    puts("Enter the player name: ");
    gets(name);
    fflush(stdin);
    return;
}

void squadRead(char squad[]){
    puts("Enter the squad name: ");
    gets(squad);
    fflush(stdin);
    return;
}

void gamesRead(int* games){
    do{
        puts("Enter the number of played games: ");
        scanf("%d", games);
        fflush(stdin);
        if(games<0) puts("Error, invalid data");
    } while(games<0);
    return;
}

void goalsRead(int* goals){
    do{
        puts("Enter the goals number: ");
        scanf("%d", goals);
        fflush(stdin);
        if(goals<0) puts("Error, invalid data");
    } while(goals<0);
    return;
}

void dataIn(PLAYER *player){
    nameRead(player -> name);
    squadRead(player -> squad);
    gamesRead(&(player -> playedGames));
    goalsRead(&(player -> goals));
}

//Read and save data function
void readAndSavePlayer(){
    PLAYER players;
    dataIn(&players);
    FILE *apend = fopen("E049.txt", "a");
    if(apend==NULL){
        puts("Error opening file");
    } else {
        fprintf(apend, "%s %s %d %d\n", players.name, players.squad, players.playedGames, players.goals);
    }
    fclose(apend);
    return;
}

void showPlayers(){
    FILE *show = fopen("E049.txt", "r");
    PLAYER a;
    if(show==NULL){
        puts("Error opening file");
    } else {
        puts("NAM          AVG          SQU");
        float avg = 0;
        for(int i=0; fscanf(show, "%s %s %d %d", a.name, a.squad, &a.playedGames, &a.goals) == 4; i++) {
            avg = (float) a.goals / a.playedGames;
            printf("%s          %f          %s\n", a.name, avg, a.squad);
        }
    }
    fclose(show);
    return;
}

int main() {
    readAndSavePlayer();
    showPlayers();
    return 0;
}