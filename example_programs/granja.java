import java.util.Scanner;

public class granja {

static class Granja {

	Animal[] animals;
	int pointer = 0;

	Granja() {
	animals = new Animal[100];
	}

	void addAnimal(Animal animal) {
	if (pointer < 100) {
	animals[pointer++] = animal;
	}
	}

	void makeNoises() {
	int i = 0;
	while (i < pointer) {
	animals[i++].makeNoise();
	}
	}
}

static class Animal {


	void makeNoise() {
	}
}

static class Vaca extends Animal {


	void makeNoise() {
	System.out.println("MUUU");
	}
}

static class Oveja extends Animal {


	void makeNoise() {
	System.out.println("BEEE");
	}
}

static class Cerdo extends Animal {


	void makeNoise() {
	System.out.println("OINK OINK");
	}
}

public static void main(String[] args) {
	Scanner s = new Scanner(System.in);
	System.out.println("Bienvenido a nuestra granja. Ingrese Vaca, Oveja o Cerdo para agregar a ese animal o Listo! para ver que pasa. (Q para salir)");
	boolean end = false;
	Granja granja = new Granja();
	while (!end) {
	String command = s.next().toLowerCase();
	if (command.equals("vaca")) {
	granja.addAnimal(new Vaca());
	} else 	if (command.equals("cerdo")) {
	granja.addAnimal(new Cerdo());
	} else 	if (command.equals("oveja")) {
	granja.addAnimal(new Oveja());
	} else 	if (command.equals("listo") || command.equals("listo!")) {
	System.out.println();
	granja.makeNoises();
	System.out.println("Los animales estan contentos de haber llegado a la granja.");
	} else 	if (command.equals("q") || command.equals("quit")) {
	end = true;
	}
	}
}
}
