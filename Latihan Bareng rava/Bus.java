class Bus extends Kendaraan {
    private int kapasitas; // Kapasitas penumpang
    
    // Konstruktor default Bus
    public Bus() {
        super(); // Inisialisasi kendaraan
        this.kapasitas = 0; // Kapasitas penumpang
    }

    // Konstruktor Bus dengan parameter
    public Bus(int nomor, int tahun, String merk, int kapasitas) {
        super(nomor, tahun, merk); // Inisialisasi kendaraan
        this.kapasitas = kapasitas; // Kapasitas penumpang
    }

    // Method printInfo
    public void printInfo() {
        super.printInfo(); // Print info kendaraan
        System.out.println("Kategori: Bus"); // Print kategori kendaraan
        System.out.println("Kapasitas: " + this.kapasitas); // Print kapasitas kendaraan
    }

    // Method biayaSewa
    public int biayaSewa(int lamaSewa) {
        return 1000000 * lamaSewa; // Biaya sewa bus
    }
}