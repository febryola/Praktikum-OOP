import java.util.List;

public class Worker {
	public static int run(List<Integer> durations, int machineCount) {
		int[] machines = new int[machineCount];
        int totalTime = 0;
        for (int i = 0; i < durations.size(); i++) {
            int duration = durations.get(i);
            int machine = 0;
            for (int j = 0; j < machineCount; j++) {
                if (machines[j] < machines[machine]) {
                    machine = j;
                }
            }
            machines[machine] += duration;
            totalTime = Math.max(totalTime, machines[machine]);
        }
        return totalTime;
	}
}