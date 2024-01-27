class Cake {
    void bake() {
        System.out.println("Baking a cake...");
    }
}

class ChocolateCake extends Cake {
    void addChocolate() {
        System.out.println("Adding chocolate to the cake...");
    }
}

class CheeseCake extends ChocolateCake {
    void addCreamCheese() {
        System.out.println("Adding cream cheese to make it a cheesecake...");
    }
}


public class Multilevel {
    public static void main(String[] args) {
        CheeseCake myCheesecake = new CheeseCake();

        myCheesecake.bake();
        myCheesecake.addChocolate();
        myCheesecake.addCreamCheese();
    }
}
