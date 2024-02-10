class Parent {
    int parentVariable = 10;

    Parent(){
        System.out.println("Parent class Constructor");
    }

    void parentMethod() {
        System.out.println("Parent class method ");
    }
}

class Child extends Parent {
    int childVariable = 20;

    Child() {
        super();
        System.out.println("Child Class constructor");
    }

    void childMethod() {
        super.parentMethod();
        System.out.println("Child class method");
    }

    void displayVariables() {
        System.out.println("Parent Variable: " + super.parentVariable);
        System.out.println("Child Variable: " + this.childVariable);
    }
}

public class SuperKW {
    public static void main(String[] args) {
        Child child = new Child();
        child.childMethod();
        child.displayVariables();
    }
}
/*
Usage of super keyword (kw):
1. to refer immediate parent class instance variable: super.variable;
2. to refer immediate parent class method: super.method();
3. to refer immediate parent class constructor: super( parameters(if any) );


*/