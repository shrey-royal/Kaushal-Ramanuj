import java.util.Scanner;

class Sample {
    //instance variables
    int a;
    
    //methods
    void scan() {
        Scanner sc = new Scanner(System.in);
        
        System.out.print("Enter a: ");
        a = sc.nextInt();

        sc.close();
    }

    void print() {
        System.out.println(a);
    }

    // public static void main(String[] args) {
    //     System.out.println("This is main method");
    // }
}

class Animal {
    private String name, color;

    void scanAnimal() {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter name: ");
        name = sc.next();
        System.out.print("Enter color: ");
        color = sc.next();

        sc.close();
    }

    void printAnimal() {
        System.out.println("I have a " + name + " and it is " + color + " in color.");
    }
}


public class IntroProgram {
    public static void main(String[] args) {
        // Sample s = new Sample();
        // s.scan();
        // s.print();

        Animal dog = new Animal();

        dog.scanAnimal();
        dog.printAnimal();

        System.out.println("This is main method");
    }
}

/*
Access Specifiers: 

1. default: package/folder level access
2. private: class only
3. protected: class and derived classes only
4. public: accessible everywhere 

*/