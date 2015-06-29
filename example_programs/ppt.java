import java.util.Scanner;

public class ppt {

static class Game {

	int player = 0;
	int ia = 0;

	void playerWin() {
	System.out.println("");
	System.out.println("Ganaste! :D");
	player++;
	}

	void PCWin() {
	System.out.println("");
	System.out.println("Perdiste! :(");
	ia++;
	}

	void printResults() {
	System.out.println("");
	System.out.println("Puntaje ");
	System.out.println("Jugador: " + player);
	System.out.println("PC: " + ia);
	System.out.println("");
	}
}

public static void main(String[] args) {
	Scanner s = new Scanner(System.in);
	Game game = new Game();
	String play;
	boolean gameOver = false;
	System.out.print("\033[2J\033[1;1H");
	while (!gameOver) {
	game.printResults();
	System.out.println("Piedra, Papel o Tijera? (Q para terminar)");
	play = s.next().toLowerCase();
	System.out.print("\033[2J\033[1;1H");
	if (play.equals("q") || play.equals("quit")) {
	gameOver = true;
	} else 	if (play.equals("piedra") || play.equals("papel") || play.equals("tijera")) {
	if ((Math.random() * 2) > 1) {
	game.playerWin();
	} else {
	game.PCWin();
	}
	} else {
	System.out.println("");
	System.out.println("Jugada invalida");
	}
	}
}
}
