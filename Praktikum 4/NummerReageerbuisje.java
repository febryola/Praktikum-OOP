import java.util.*;

// ANDA TIDAK BOLEH MENAMBAH, MENGURANGI, ATAU MENGUBAH NAMA ATRIBUT KELAS
class NummerReageerbuisje {
  private Stack<Integer> contents;      // Isi dari NummerReageerbuisje
  private int capacity;                 // Kapasitas maksimal dari NummerReageerbuisje
  private int filledCap;                // Berapa banyak angka yang telah mengisi NummerReageerbuisje
  
  public NummerReageerbuisje() {
    // Default konstruktor dengan capacity = 3
    this.capacity = 3;
    this.contents = new Stack<Integer>();
    this.filledCap = 0;
  } 

  public NummerReageerbuisje(int cap) {
    // Modified konstruktor dengan capacity = cap
    this.capacity = cap;
    this.contents = new Stack<Integer>();
    this.filledCap = 0;
  }

  public int getCapacity() {
    // getter atribut capacity
    return this.capacity;
  }

  public int getFilledCap() {
    // getter atribut filledCap
    return this.filledCap;
  }

  public void receiveOneSubstance(int substance) {
    // NummerReageerbuisje menerima satu "substance" yaitu angka yang masuk
    if (this.filledCap < this.capacity){
      this.contents.push(substance);
      this.filledCap++;
    } else {
      // do nothing
    }
  } 

  public void pour(NummerReageerbuisje other) {
    // NummerReageerbuisje menuangkan isi dari contents ke NummerReageerbuisje other hingga other penuh
    // Note: Angka yang dituangkan terlebih dahulu adalah angka yang paling atas posisinya
    while (this.filledCap > 0 && other.getFilledCap() < other.getCapacity()){
      other.receiveOneSubstance(this.contents.pop());
      this.filledCap--;
    }
  }

  public void pourAllContents() {
    // NummerReageerbuisje ditumpahkan sepenuhnya, sehigga contents kosong
    // Melakukan println untuk setiap elemen yang tumpah berurut dari yang paling awal tumpah
    while (this.filledCap > 0){
      System.out.println(this.contents.pop());
      this.filledCap--;
    }
  }

  public void stirSwirl() {
    // contents dari NummerReageerbuisje menjadi terbalik urutannya
    // reverse contents
    Stack<Integer> temp = new Stack<Integer>();
    while (this.filledCap > 0){
      temp.push(this.contents.pop());
      this.filledCap--;
    }
    this.contents = temp;
    this.filledCap = temp.size();

  }

  public void centrifuge() {
    // contents dari NummerReageerbuisje diurutkan berdasarkan nilai angkanya, 
    // dengan yang terbesar di paling bawah dan yang terkecil di paling atas
    // sort contents dari yang terbesar ke yang terkecil
    List<Integer> temp = new ArrayList<Integer>();
    while (this.filledCap > 0){
      temp.add(this.contents.pop());
      this.filledCap--;
    }
    Collections.sort(temp);
    for (int i = temp.size() - 1; i >= 0; i--){
      this.contents.push(temp.get(i));
      this.filledCap++;
    }

  }

}