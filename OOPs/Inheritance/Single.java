class Temple {
    String name;
    String location;

    public Temple(String name, String location) {
        System.out.println("Temple Constructor");
        this.name = name;
        this.location = location;
    }

    public void display() {
        System.out.println("Temple Name: " + name);
        System.out.println("location: " + location);
    }
}

class Historicaltemple extends Temple {
    int yearBuilt;

    public Historicaltemple(String name, String location, int yearBuilt) {
        super(name, location);
        System.out.println("Historical Temple Constructor");
        // super();
        // super.variable;
        // super.method();
        // super.name = name;
        this.yearBuilt = yearBuilt;
    }

    public void display() {
        super.display();
        System.out.println("Year Built: " + yearBuilt);
    }
}

public class Single {
    public static void main(String[] args) {
        Historicaltemple somnathTemple = new Historicaltemple("Somnath Temple", "Gujarat", 651);

        somnathTemple.display();
    }
}
