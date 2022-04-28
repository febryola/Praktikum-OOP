// Nama     : Febryola Kurnia Putri
// NIM      : 13520140
// Kelas    : K02
// Topik    : intro to java

public class ListMapEntry extends MapEntry {
    private ListMapEntry next;

    public ListMapEntry(String key, String value) {
        super(key, value);
        this.next = null;
    } // next = null
    
    public ListMapEntry(String key, String value, ListMapEntry next) {
        super(key, value);
        this.next = next;
    }

    public ListMapEntry getNext() {
        return this.next;
    }
    public void setNext(ListMapEntry next) {
        this.next = next;
    }
}
