class Flower {
    String color;
    String fragrance;

    public Flower(String color, String fragrance) {
        this.color = color;
        this.fragrance = fragrance;
    }

    public void bloom() {
        System.out.println("The " + color + " flower is blooming with a " + fragrance + " fragrance.");
    }
}

class Rose extends Flower {
    public Rose(String color, String fragrance) {
        super(color, fragrance);
    }

    public void prick() {
        System.out.println("Be careful! The thorns of the rose can prick you.");
    }
}

class Lily extends Flower {
    public Lily(String color, String fragrance) {
        super(color, fragrance);
    }

    public void purifyAir() {
        System.out.println("Lilies are known for purifying the air around them.");
    }
}

public class Hierarchical {
    public static void main(String[] args) {
        Rose redRose = new Rose("red", "sweet");
        redRose.bloom();
        redRose.prick();

        Lily whiteLily = new Lily("white", "delicate");
        whiteLily.bloom();
        whiteLily.purifyAir();
    }
}
