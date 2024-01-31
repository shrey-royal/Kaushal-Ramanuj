import java.util.Scanner;

class Address {
    private int houseNo;
    private String societyName;
    private String city, state, country;
    private int pinCode;

    public Address() {}

    public Address(int houseNo, String societyName, String city, String state, String country, int pinCode) {
        this.houseNo = houseNo;
        this.societyName = societyName;
        this.city = city;
        this.state = state;
        this.country = country;
        this.pinCode = pinCode;
    }

    void scanDetails() {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter House No.: ");
        houseNo = sc.nextInt();
        System.out.print("Enter Society Name: ");
        societyName = sc.nextLine();
        System.out.print("Enter City: ");
        city = sc.nextLine();
        System.out.print("Enter State: ");
        state = sc.nextLine();
        System.out.print("Enter Country: ");
        country = sc.nextLine();
        System.out.print("Enter pinCode: ");
        pinCode = sc.nextInt();
        sc.close();
    }

    void display() {
        System.out.println("HouseNo: " + houseNo + "\nSociety Name: " + societyName);
        System.out.println("City: " + city + "\nState: " + state + "\nCountry: " + country);
        System.out.println("Pincode: " + pinCode);
    }
}

class Employee {
    private int id;
    private String name, desg;
    private Address address;
    private float salary;

    public Employee() {}

    public Employee(int id, String name, String desg, Address address, float salary) {
        this.id = id;
        this.name = name;
        this.desg = desg;
        this.address = address;
        this.salary = salary;
    }

    void scanDetails() {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter Id: ");
        id = sc.nextInt();
        
        // sc.nextLine();
        System.out.print("Enter Name: ");
        name = sc.nextLine();

        System.out.print("Enter Designation: ");
        desg = sc.nextLine();
        
        System.out.print("Enter Salary: ");
        salary = sc.nextFloat();
        
        address.scanDetails();
        sc.close();
    }

    void display() {
        System.out.println("Id: " + id + "\nName: " + name + "\nDesignation: " + desg);
        System.out.println("Salary: " + salary);
        address.display();
    }

}

public class Aggregation {
    public static void main(String[] args) {
        Address add = new Address(23, "ABC", "GNR", "GUJ", "IND", 123456);

        Employee e = new Employee(1142, "Kaushal", "General Manager", add, 1234567);
        e.display();
    }
}
