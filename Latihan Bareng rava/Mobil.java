class Mobil extends Kendaraan {
    private String supir; // Nama supir
    
    // Konstruktor default Mobil
    public Mobil() {
        super(); // Inisialisasi kendaraan
        this.supir = "Tuan. XXX"; // Nama supir
    }

    // Konstruktor Mobil dengan parameter
    public Mobil(int nomor, int tahun, String merk, String supir) {
        super(nomor, tahun, merk); // Inisialisasi kendaraan
        this.supir = supir; // Nama supir
    }

    // Method printInfo
    public void printInfo() {
        super.printInfo(); // Print info kendaraan
        System.out.println("Kategori: Mobil"); // Print kategori kendaraan
        System.out.println("Supir: " + this.supir); // Print nama supir
    }

    // Method biayaSewa
    public int biayaSewa(int lamaSewa) {
        return 500000 * lamaSewa;// Biaya sewa mobil
    }
}