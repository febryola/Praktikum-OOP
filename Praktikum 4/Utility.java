import java.util.*;

public class Utility{
    /*
    swap, digunakan untuk menukar 2 elemen pada sebuah array (tidak menghasilkan array baru). 
    Terdapat 3 parameter yaitu array generik, index i, dan index j. 
    Apabila index yang ingin ditukar tidak terdapat pada array, maka array tidak berubah.    
    */
    public static <T> void swap(T[] arr, int i, int j){
        if(i < 0 || i >= arr.length || j < 0 || j >= arr.length) return;
        T temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    /*
    repeat, digunakan untuk membuat array baru yang merupakan pengulangan sebuah array sebanyak N kali. 
    Terdapat 2 parameter yaitu array generik dan integer positif N.
    */
    public static <T> T[] repeat(T[] arr, int N){
        if(N <= 0) return null;
        T[] newArr = (T[]) new Object[N * arr.length];
        for(int i = 0; i < N; i++){
            for(int j = 0; j < arr.length; j++){
                newArr[i * arr.length + j] = arr[j];
            }
        }
        return newArr;
    }

    /*
    join, digunakan untuk menggabungkan seluruh elemen pada array menjadi sebuah string dengan delimeter ",". 
    Terdapat 1 parameter yaitu array generik. Contoh: [1,2,3] menjadi "1,2,3". 
    Perhatikan bahwa tipe data lainnya akan berubah menjadi string yang sesuai, misal true menjadi "true", null menjadi "null", dst.
    */
    public static <T> String join(T[] arr){
        StringBuilder sb = new StringBuilder();
        for(int i = 0; i < arr.length; i++){
            sb.append(arr[i]);
            if(i < arr.length - 1) sb.append(",");
        }
        return sb.toString();
    }

    /*
    sum, digunakan untuk menghasilkan jumlah dari seluruh elemen array dengan tipe double.
    Terdapat 1 parameter yaitu array generik. Method hanya bisa digunakan untuk array dengan tipe elemen berupa Number.
    */
    public static double sum(Number[] arr){
        double sum = 0;
        for(int i = 0; i < arr.length; i++){
            sum += arr[i].doubleValue();
        }
        return sum;
    }

}