abstract class Kendaraan {
    protected int nomor;
    protected int tahun;
    protected String merk;

    // Konstruktor default Kendaraan
    public Kendaraan() {
        this.nomor = 0;
        this.tahun = 0;
        this.merk = "XXX";
    }

    // Konstruktor Kendaraan dengan parameter
    public Kendaraan(int nomor, int tahun, String merk) {
        this.nomor = nomor;
        this.tahun = tahun;
        this.merk = merk;
    }

    // Method displayInfo
    public void printInfo() {
        System.out.println("Nomor Kendaraan: " + this.nomor);
        System.out.println("Tahun Keluaran: " + this.tahun);
        System.out.println("Merk: " + this.merk);
    }

    // Method biayaSewa
    abstract public int biayaSewa(int lamaSewa);
}
