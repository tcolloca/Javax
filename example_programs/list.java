import java.util.Scanner;

public class list {

static class List {

	Node first;

	List() {
	first = new Node();
	}

	int add(int numero) {
	first.add(numero);
	 return 0;
	}

	int print() {
	System.out.print("[");
	if (first.num == null) {
	System.out.println("]");
	} else {
	System.out.print(first.num);
	first.next.print();
	}
	 return 0;
	}
}

static class Node {

	Integer num;
	Node next;

	Node() {
	}

	void add(int numero) {
	if (num == null) {
	num = numero;
	next = new Node();
	} else {
	next.add(numero);
	}
	}

	void print() {
	if (num == null) {
	System.out.println("]");
	} else {
	System.out.print(", " + num);
	next.print();
	}
	}
}

public static void main(String[] args) {
	Scanner s = new Scanner(System.in);
	List list = new List();
	boolean end = false;
	while (!end) {
	System.out.println("Ingrese Add {numero} para agregar un numero a la lista, Print para imprimirla o Q para salir.");
	System.out.println();
	String command = s.next().toLowerCase();
	if (command.equals("add")) {
	list.add(s.nextInt());
	System.out.println();
	System.out.println("Elemento agregado con exito a la lista.");
	} else 	if (command.equals("print")) {
	list.print();
	System.out.println();
	} else 	if (command.equals("q") || command.equals("quit")) {
	end = true;
	} else {
	System.out.print("Comando invalido");
	System.out.println();
	}
	}
}
}
