import java.util.Scan;

public class factorial {

public static void main(String[] args) {
	Scanner s = new Scanner(System.in);
	System.out.print("Ingrese un numero para calcular factorial: ");
	int original = s.nextInt();
	int n = original;
	int ans = 1;
	while (n > 0) {
	ans *= n--;
	}
	System.out.println("Factorial de " + original + " es " + ans);
}
}
