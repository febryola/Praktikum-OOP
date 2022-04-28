class KoleksiKendaraan {
    private int neff; // Neff array
    private int size; // Size array
    private Kendaraan[] Koleksi; // Array kendaraan

    // Default Konstruktor Koleksi Kendaraan
    public KoleksiKendaraan() {
        this.neff = 0; // Neff array
        this.size = 100; // Size array
        this.Koleksi = new Kendaraan[this.size]; // Array kendaraan
    }

    // Konstruktor Koleksi Kendaraan dengan parameter
    public KoleksiKendaraan(int size) {
        this.neff = 0; // Neff array
        this.size = size; // Size array
        this.Koleksi = new Kendaraan[this.size]; // Array kendaraan
    }

    // Method getKendaraanAt
    public Kendaraan getKendaraanAt(int id) {
        return this.Koleksi[id]; // Mengembalikan kendaraan pada index id
    }

    // Method addKendaraan
    public void add(Kendaraan obj_K) {
        this.Koleksi[this.neff] = obj_K; // Menambahkan kendaraan ke array
        this.neff++; // Menambahkan neff
    }

    // Method add in koleksiKendaraan
    public void add(KoleksiKendaraan obj_KK) {
        for (int i = 0; i < obj_KK.neff; i++) { // Looping sebanyak neff
            this.Koleksi[this.neff] = obj_KK.Koleksi[i]; // Menambahkan kendaraan ke array
            this.neff++; // Menambahkan neff
        }
    }

    // Method printAll
    public void printAll() {
        for (int i = 0; i < this.neff; i++) { // Looping sebanyak neff
            System.out.println("Kendaraan " + (i + 1)); // Print kendaraan
            this.Koleksi[i].printInfo(); // Print info kendaraan
            System.out.println(); // Print enter
        }
    }
}