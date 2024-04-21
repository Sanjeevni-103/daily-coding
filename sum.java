//write a java program to accept two numbers from user 
//and display the sum after 5 seconds.
import java.util.Scanner;

class SumAfterDelay {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Accepting two numbers from the user
        System.out.print("Enter first number: ");
        int num1 = scanner.nextInt();

        System.out.print("Enter second number: ");
        int num2 = scanner.nextInt();

        // Closing scanner
        scanner.close();

        // Calculating sum
        int sum = num1 + num2;

        // Displaying sum after a delay of 5 seconds
        try {
            Thread.sleep(5000); // 5000 milliseconds = 5 seconds
            System.out.println("Sum of " + num1 + " and " + num2 + " is: " + sum);
        } catch (InterruptedException e) {
            e.printStackTrace();
        }
    }
}
