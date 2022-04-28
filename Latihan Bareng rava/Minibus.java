class Minibus extends Kendaraan {
    
    //konstruktor default minibus
    public Minibus() {
        super(); // Inisialisasi kendaraan
    }

    //konstruktor minibus dengan parameter
    public Minibus(int nomor, int tahun, String merk) {
        super(nomor, tahun, merk); // Inisialisasi kendaraan
    }

    //method printInfo
    public void printInfo() {
        super.printInfo(); // Print info kendaraan
        System.out.println("Kategori: Minibus"); // Print kategori kendaraan
    }

    //method biayaSewa
    public int biayaSewa(int lamaSewa) {
        int result = 5000000; //biaya sewa minibus
        if (lamaSewa > 5) { //jika lama sewa lebih dari 5 hari
            result += 500000 * (lamaSewa - 5); //biaya sewa minibus ditambah dengan biaya sewa minibus perhari
        }
        return result - calculateDiscount(result, lamaSewa);//biaya sewa minibus dikurangi dengan diskon
    }

    //method calculateDiscount
    public int calculateDiscount(int result, int lamaSewa) {
        if (lamaSewa > 10) {//jika lama sewa lebih dari 10 hari
            return result/10;//diskon 10%
        }
        else {//jika lama sewa kurang dari 10 hari
            return 0;
        }
    }
}