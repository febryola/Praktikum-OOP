// Nama : Febryola Kurnia Putri
// NIM  : 13520140
// Kelas : K02
// Topik : Praktikum 3

class Animal {
    protected int legs;
    protected boolean hungry;

    public Animal(int legs) {
        this.legs = legs;
        this.hungry = true;
    }

    public void eat(String food) {
        // doing nothing
    }

    public void run() {
        System.out.println("Animal is running");
    }
}
