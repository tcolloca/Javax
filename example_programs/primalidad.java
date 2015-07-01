import java.util.Scanner;

public class primalidad {

public static void main(String[] args) {
	Scanner s = new Scanner(System.in);
	System.out.print("Ingrese un numero para saber si es primo: ");
	double original = s.nextInt();
	int n = 2;
	boolean prime = true;
	while (n < original) {
	if (Math.floor(original / n) == original / n) {
	prime = false;
	}
	n++;
	}
	System.out.println(prime);
}
}
