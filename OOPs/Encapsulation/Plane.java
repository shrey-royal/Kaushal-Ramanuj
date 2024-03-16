class Plane {
    private String name;
    private String manufacturer;
    private String model;
    private int max_speed;
    private int seating_capacity;
    private int fuel_capacity;
    
    public String getName() {
        return name;
    }
    public void setName(String name) {
        this.name = name;
    }
    public String getManufacturer() {
        return manufacturer;
    }
    public void setManufacturer(String manufacturer) {
        this.manufacturer = manufacturer;
    }
    public String getModel() {
        return model;
    }
    public void setModel(String model) {
        this.model = model;
    }
    public int getMax_speed() {
        return max_speed;
    }
    public void setMax_speed(int max_speed) {
        this.max_speed = max_speed;
    }
    public int getSeating_capacity() {
        return seating_capacity;
    }
    public void setSeating_capacity(int seating_capacity) {
        this.seating_capacity = seating_capacity;
    }
    public int getFuel_capacity() {
        return fuel_capacity;
    }
    public void setFuel_capacity(int fuel_capacity) {
        this.fuel_capacity = fuel_capacity;
    }
}