import java.util.Scanner;

public class tateti {

static class Tablero {

	Character[][] tablero;

	Tablero() {
	tablero = new Character[3][3];
	}

	boolean put(char player, int row, int col) {
	if (tablero[row][col] != null) {
	 return false;
	}
	tablero[row][col] = player;
	 return true;
	}

	void print() {
	int i = 0;
	int j = 0;
	Character c;
	System.out.print("\033[2J\033[1;1H");
	System.out.println();
	while (i < 3) {
	while (j < 3) {
	c = tablero[i][j];
	if (c == null) {
	System.out.print(" ");
	} else {
	System.out.print(c);
	}
	if (j < 2) {
	System.out.print(" | ");
	}
	j++;
	}
	System.out.println();
	if (i < 2) {
	System.out.println("_   _   _ ");
	}
	j = 0;
	i++;
	}
	}
}

public static void main(String[] args) {
	Scanner s = new Scanner(System.in);
	Tablero tablero = new Tablero();
	boolean gameOver = false;
	char player = 'X';
	int row;
	int col;
	while (!gameOver) {
	tablero.print();
	System.out.println();
	System.out.println("Turno del jugador " + player);
	System.out.print("Ingrese la fila: ");
	row = s.nextInt();
	System.out.println();
	System.out.print("Ingrese la columna: ");
	col = s.nextInt();
	System.out.println();
	tablero.put(player, row, col);
	if (player == 'X') {
	player = 'O';
	} else {
	player = 'X';
	}
	}
}
}