import java.util.*;
/**
    @author: ddi4z
*/
public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        long n = scanner.nextLong();
        
        List<Long> nums = new ArrayList<>();
        long i = 1;
        long acum = 0;
        
        while (acum + i <= n) {
            nums.add(i);
            acum += i;
            i += 1;
        }
        
        nums.set(nums.size() - 1, nums.get(nums.size() - 1) + (n - acum));
        
        System.out.println(nums.size());
        for (long num : nums) {
            System.out.print(num + " ");
        }
        System.out.println();
        
        scanner.close();
    }
}
