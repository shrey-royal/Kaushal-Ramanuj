import java.util.Scanner;

public class ScanData {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        // System.out.println("Enter any word: ");
        // String word = sc.next();

        // sc.nextLine();  //to clear the buffer
        // System.out.println("Enter your name: ");
        // String name = sc.nextLine();

        // System.out.println("word: " + word);
        // System.out.println("name: " + name);

        System.out.println("Enter any Integer: ");
        int i = sc.nextInt();

        System.out.println("Enter any Float: ");
        float f = sc.nextFloat();

        System.out.println("Enter any Double: ");
        double d = sc.nextDouble();

        System.out.println("Integer: " + i);
        System.out.println("Float: " + f);
        System.out.println("Double: " + d);

        sc.close(); //to prevent the resource leak
    }
}

/*
Scanner is a class that takes an input from the user.

Scanner class is located in package called java.util;
to use the class located in java.util package we need to import that package with classname first.
// COde: import java.util.Scanner;

Object creation in java:
Classname object = new Classname();

Methods of Scanner Class:

nextBoolean()   -   Reads a boolean value from the user
nextByte()      -   Reads a byte value from the user
nextDouble()    -   Reads a double value from the user
nextFloat()     -   Reads a float value from the user
nextInt()       -   Reads a int value from the user
next()          -   Reads a single word from the user
nextLine()      -   Reads a String value from the user
nextLong()      -   Reads a long value from the user
nextShort()     -   Reads a short value from the user

*/
