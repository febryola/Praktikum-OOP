class Main {
    public static void main(String[] args) {
        KoleksiKendaraan KoleksiKendaraan_1 = new KoleksiKendaraan();
        KoleksiKendaraan_1.add(new Mobil());
        KoleksiKendaraan_1.add(new Minibus());
        KoleksiKendaraan_1.add(new Bus());
        
        KoleksiKendaraan KoleksiKendaraan_2 = new KoleksiKendaraan(3);
        KoleksiKendaraan_2.add(new Bus(77, 2022, "Bus Busy", 50));
        KoleksiKendaraan_2.add(new Minibus(46, 2021, "Valentino Rossi Minibus"));
        KoleksiKendaraan_2.add(new Mobil(11, 2019, "Lamborghini Aventador", "Rava"));

        KoleksiKendaraan_1.add(KoleksiKendaraan_2);
        KoleksiKendaraan_1.printAll();

        System.out.print("Sewa bus 5 hari: ");
        System.out.println(KoleksiKendaraan_2.getKendaraanAt(0).biayaSewa(5));
        System.out.print("Sewa minibus 5 hari: ");
        System.out.println(KoleksiKendaraan_2.getKendaraanAt(1).biayaSewa(5));
        System.out.print("Sewa mobil 5 hari: ");
        System.out.println(KoleksiKendaraan_2.getKendaraanAt(2).biayaSewa(5));

        System.out.print("Sewa bus 15 hari: ");
        System.out.println(KoleksiKendaraan_2.getKendaraanAt(0).biayaSewa(15));
        System.out.print("Sewa minibus 15 hari: ");
        System.out.println(KoleksiKendaraan_2.getKendaraanAt(1).biayaSewa(15));
        System.out.print("Sewa mobil 15 hari: ");
        System.out.println(KoleksiKendaraan_2.getKendaraanAt(2).biayaSewa(15));
    }
}