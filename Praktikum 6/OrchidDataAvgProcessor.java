import java.util.List;
import java.util.ArrayList;
import java.io.IOException;

public class OrchidDataAvgProcessor implements Runnable {
    // Tambahkan atribut sesuai kebutuhan
    private String rawDataFilename;
    private OrchidMeanDatum meanDatum;

    public OrchidDataAvgProcessor(OrchidMeanDatum meanDatum, String rawDataFilename) {
        this.meanDatum = meanDatum;
        this.rawDataFilename = rawDataFilename;
    }

    @Override
    public void run() {
        // Menghitung rata-rata dari data yang dibaca dengan CSVReader, lalu update
        // meanDatum dengan rata-rata dari setiap aspek data (petalLength, petalWidth, stemLength)
        try {
            CSVReader reader = new CSVReader(this.rawDataFilename, ",");
            reader.setSkipHeader(true);
            List<String[]> rows = reader.read();
            float petalLengthSum = 0;
            float petalWidthSum = 0;
            float stemLengthSum = 0;
            for (String[] row : rows) {
                petalLengthSum += Float.valueOf(row[0]);
                petalWidthSum += Float.valueOf(row[1]);
                stemLengthSum += Float.valueOf(row[2]);
            }
            this.meanDatum.setMean(petalLengthSum / rows.size(), petalWidthSum / rows.size(), stemLengthSum / rows.size());
        } catch (IOException e) {
            // pass
        }


        

        // Apabila muncul IOException, maka hasil pembacaan data adalah kosong
        // dan meanDatum tidak di-update (tidak di throw lagi)
    }
}
