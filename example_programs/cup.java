import java.util.Scanner;

public class cup {

static class Tablero {

	int position;
	Player player;
	AI ai;

	Tablero() {
	player = new Player();
	ai = new AI();
	position = 5;
	}

	boolean bet(int money) {
	if (player.getMoney() < money) {
	 return false;
	}
	int aiBet = Math.min(ai.getMoney(), ai.getBet(position));
	player.bet(money);
	ai.bet(aiBet);
	if (aiBet > money) {
	position++;
	} else 	if (money > aiBet) {
	position--;
	}
	 return true;
	}

	boolean isGameOver() {
	 return position == 0 || position == 10 || (player.getMoney() == 0 && ai.getMoney() == 0);
	}

	String getWinner() {
	if (position == 0) {
	 return "Ganaste! Felicitaciones!";
	} else 	if (position == 10) {
	 return "Perdiste :( Mejor suerte la proxima";
	}
	 return "Empate!";
	}

	void print() {
	System.out.print("\033[2J\033[1;1H");
	System.out.println();
	if (position == 0) {
	System.out.print(" O");
	} else {
	System.out.print(" _");
	}
	int i = 1;
	while (i < 10) {
	if (position == i) {
	System.out.print(" O");
	} else {
	System.out.print(" *");
	}
	i++;
	}
	if (position == 10) {
	System.out.print(" O");
	} else {
	System.out.print(" _");
	}
	System.out.println();
	System.out.println();
	System.out.println("Jugador: $" + player.getMoney());
	System.out.println("Computadora: $" + ai.getMoney());
	System.out.println();
	}
}

static class Player {

	int money = 100;

	int getMoney() {
	 return money;
	}

	void bet(int number) {
	money -= number;
	}
}

static class AI extends Player {


	int getBet(int position) {
	 return 10;
	}
}

public static void main(String[] args) {
	Scanner s = new Scanner(System.in);
	Tablero tablero = new Tablero();
	boolean gameOver = false;
	boolean turnOver = false;
	int bet;
	while (!gameOver) {
	turnOver = false;
	tablero.print();
	System.out.println();
	System.out.print("Ingresa tu apuesta: ");
	while (!turnOver) {
	bet = s.nextInt();
	System.out.println();
	System.out.println();
	turnOver = tablero.bet(bet);
	if (!turnOver) {
	System.out.println("No te alcanza la plata :(, intenta de vuelta.");
	}
	}
	gameOver = tablero.isGameOver();
	}
	tablero.print();
	System.out.println();
	System.out.println(tablero.getWinner());
}
}
