// Nama : Febryola Kurnia Putri
// NIM  : 13520140
// Kelas : K02
// Topik : Praktikum 3

class Cow extends Animal{
	Cow(){
		super(4);
	}
	public void eat(String food){
		if(food.equals("grass")){
			this.hungry = false;
		}
	}
	public void run() {
		super.run();
		System.out.println("Cow is running");
	}
}