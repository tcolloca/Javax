import java.util.Scanner;

public class mcd {

static class MCDSolver {


	int mcd(int a, int b) {
	int aux;
	if (a < b) {
	aux = a;
	a = b;
	b = aux;
	 return this.mcd(a, b);
	} else 	if (b != 0) {
	aux = a % b;
	a = b;
	b = aux;
	 return this.mcd(a, b);
	}
	 return a;
	}
}

public static void main(String[] args) {
	Scanner s = new Scanner(System.in);
	System.out.print("Ingrese el primer numero para calcular su MCD: ");
	int first = s.nextInt();
	System.out.print("Ingrese el segundo numero para calcular su MCD: ");
	int second = s.nextInt();
	MCDSolver solver = new MCDSolver();
	System.out.println("MCD entre " + first + " y " + second + " es: " + solver.mcd(first, second));
}
}
