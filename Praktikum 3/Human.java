// Nama : Febryola Kurnia Putri
// NIM  : 13520140
// Kelas : K02
// Topik : Praktikum 3

class Human extends Animal {
    public Human() {
        super(2);
    }

    public void eat(String food) {
        if (food.equals("teman") == false) {
            this.hungry = false;
        }
    }

    public void run() {
        System.out.println("Human is running");
    }
}