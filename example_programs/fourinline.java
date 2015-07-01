import java.util.Scanner;

public class fourinline {

static class Tablero {

	Character[][] tablero;
	char winner;

	Tablero() {
	tablero = new Character[7][6];
	}

	boolean put(char player, int col) {
	if (col < 0 || col > 6) {
	 return false;
	}
	int i = 0;
	while (i < 6) {
	if (tablero[col][i] == null) {
	tablero[col][i] = player;
	 return true;
	}
	i++;
	}
	 return false;
	}

	boolean isGameOver() {
	int i = 0;
	int j = 0;
	int k;
	boolean over;
	while (i < 7) {
	while (j < 3) {
	if (tablero[i][j] != null) {
	over = true;
	k = j + 1;
	while (over && k < j + 4) {
	over = over && tablero[i][k] == tablero[i][j];
	k++;
	}
	if (over) {
	winner = tablero[i][j];
	 return true;
	}
	}
	j++;
	}
	j = 0;
	i++;
	}
	i = 0;
	j = 0;
	while (i < 6) {
	while (j < 4) {
	if (tablero[j][i] != null) {
	over = true;
	k = j + 1;
	while (over && k < j + 4) {
	over = over && tablero[k][i] == tablero[j][i];
	k++;
	}
	if (over) {
	winner = tablero[j][i];
	 return true;
	}
	}
	j++;
	}
	j = 0;
	i++;
	}
	 return false;
	}

	char getWinner() {
	 return winner;
	}

	void print() {
	int i = 5;
	int j = 0;
	Character c;
	System.out.print("\033[2J\033[1;1H");
	System.out.println();
	while (i >= 0) {
	while (j < 7) {
	c = tablero[j][i];
	if (c == null) {
	System.out.print(" *");
	} else {
	System.out.print(" " + c);
	}
	j++;
	}
	System.out.println();
	j = 0;
	i--;
	}
	}
}

public static void main(String[] args) {
	Scanner s = new Scanner(System.in);
	Tablero tablero = new Tablero();
	boolean gameOver = false;
	boolean turnOver;
	char player = 'X';
	int col;
	while (!gameOver) {
	turnOver = false;
	tablero.print();
	System.out.println();
	System.out.println("Turno del jugador " + player);
	while (!turnOver) {
	System.out.println();
	System.out.println();
	System.out.print("Ingrese la columna: ");
	col = s.nextInt();
	System.out.println();
	turnOver = tablero.put(player, col - 1);
	if (!turnOver) {
	System.out.println("Parametros invalidos, intente nuevamente.");
	}
	}
	gameOver = tablero.isGameOver();
	if (player == 'X') {
	player = 'O';
	} else {
	player = 'X';
	}
	}
	tablero.print();
	System.out.println();
	System.out.println("Gano el jugador " + tablero.getWinner());
}
}
