class Vehicle {
    Vehicle startEngine() {
        System.out.println("Starting the engine of a generic vehicle.");
        return this;
    }
}

class Car extends Vehicle {
    @Override
    Car startEngine() {
        System.out.println("Starting the engine of a car.");
        return this;
    }

    void stopEngine() {
        System.out.println("Car engine is off");
    }
}

public class Covariant_RT {
    public static void main(String[] args) {
        Vehicle vehicle = new Vehicle();
        vehicle.startEngine();

        Car car = new Car();
        car.startEngine();

        Vehicle vehicle2 = new Car();
        vehicle2.startEngine();
        // vehicle2.stopEngine();
    }
}
