public class CarNotStartedException extends Exception {
  
  public CarNotStartedException() {
    super("Car is not started");
    
  }

  public String toString() {
    return "Cannot drive. Car is not started.";
  }
}
