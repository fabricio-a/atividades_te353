//Desenvolvido por Fabrício Alves Santana
//TE352 - Semana 1

#include <stdio.h>

int checkWinner(int matriz[3][3]);

int main() {
	int gameOver = 0;
	int winner = 0;
	int board[3][3] = {0,0,0};
	int coord[2];
	int player = 1;
	int i, j;
	char playerName;
	
	while(!gameOver) {
		system("cls");
		
		for(i=0;i<3;i++) { 
			for(j=0;j<3;j++) {
				if(board[i][j] == 1) printf(" X ");
				else if(board[i][j] == -1) printf(" O ");
				else printf("   ");
			}
			printf("\n");
		}		
		
		printf("Jogador %d \n", player);
		printf("X:");
		scanf("%d", &coord[0]);
		printf("Y:");
		scanf("%d", &coord[1]);
		
		if(board[coord[0]][coord[1]] != 0) continue;
		
		if(player == 1)	board[coord[0]][coord[1]] = 1;
		else	board[coord[0]][coord[1]] = -1;
		
		player = player == 1 ? -1 : 1;		
		winner = checkWinner(board);
		if(winner) gameOver = 1;
	}
	
	if(winner == 1) printf("Jogador X venceu");
	else if(winner == -1) printf("Jogador O venceu");
	else printf("Nenhum jogador venceu");
	
	return 0;
}

int checkWinner(int matriz[3][3]) {
	int i, j, tempv = 0, temph = 0, diagd, diage;
	
	for(i=0;i<3;i++) {
		for(j=0;j<3;j++) {
			temph += matriz[i][j];
			tempv += matriz[j][i];
		}
		if(tempv == 3 || temph == 3) return 1;
		else if(tempv == -3 || temph == -3) return -1;
		temph = tempv = 0;
	}
	
	diagd = matriz[0][0] + matriz[1][1] + matriz[2][2];
	diage = matriz[2][0] + matriz[1][1] + matriz[0][2];
	if(diagd == 3 || diage == 3) return 1;
	else if(diagd == -3 || diage == -3) return -1;	
	
	for(i=0;i<3;i++) { 
		for(j=0;j<3;j++) {
			if(!matriz[i][j]) return 0;
		}
	}
	
	return 2;
}

