// Nama : Febryola Kurnia Putri
// NIM  : 13520140
// Kelas : K02
// Topik : Praktikum 3

class Bike extends NonMotorizedVehicle implements Rideable {
    Bike(){
        this.name = "Bike";
    }

    Bike(String name){
        this.name = name;
    }
    
    public String getName(){
        return this.name;
    }

    public void ride(){
        System.out.println("Riding a "+this.name);
    }
}