// Nama : Febryola Kurnia Putri
// NIM  : 13520140
// Kelas : K02
// Topik : Praktikum 3

class Car extends MotorizedVehicle implements Rideable, NeedFuel {
    public Car(){
        this.fuel = 5;
        this.name = "Car";
    }
    public Car(String name, int fuel){
        this.name = name;
        this.fuel = fuel;
    }

    public String getName(){
        return this.name;
    }

    public int getFuel(){
        return this.fuel;
    }

    public void ride(){
        if(this.fuel!=0){
            this.fuel--;
            System.out.println("Riding a "+this.name+", fuel remaining: "+this.fuel);
            
        }
        else{
            System.out.println("No fuel, cannot ride");
        }
    }

    public void fillFuel(int amount){
        this.fuel += amount;
        System.out.println("Filled "+amount+" units of fuel, fuel now: "+this.fuel);
    }
}
