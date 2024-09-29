import java.util.Scanner; 

public class IfElse{
    public static void main(String[] args) { 
        Scanner sc = new Scanner(System.in); 

        System.out.print("Enter the value for x: ");
        int x = sc.nextInt(); 

        System.out.print("Enter the value for y: ");
        int y = sc.nextInt(); 
        if (x + y > 20) {
            System.out.println("x + y is greater than 20"); 
        } 
        else {
            System.out.println("x + y is not greater than 20");
        }

        sc.close(); 
    }
}

public class IfElse {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter a number: ");
        int num = sc.nextInt();

        
        if (num > 0) {
            System.out.println(num + " is positive!"); 
        } else if (num < 0) {
            System.out.println(num + " is negative!"); 
        } else {
            System.out.println(num + " is zero!");
        }

        sc.close(); 
    }
}
