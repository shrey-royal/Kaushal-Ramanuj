public class Getter_Setter {
    public static void main(String[] args) {
        Plane p = new Plane();

        p.setName("Boeing-747");
        p.setManufacturer("Boeing");
        p.setModel("747");
        p.setMax_speed(570);
        p.setSeating_capacity(416);
        p.setFuel_capacity(57000);
        // System.out.println(p.model);

        System.out.println(p.getName());
        System.out.println(p.getManufacturer());
        System.out.println(p.getModel());
        System.out.println(p.getMax_speed());
        System.out.println(p.getSeating_capacity());
        System.out.println(p.getFuel_capacity());
    }
}
/*

Getter and Setter Methods: 
used to access and update the private data members of any class, anywhere.

Tasks:


*/