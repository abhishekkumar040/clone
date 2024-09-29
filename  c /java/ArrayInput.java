import java.util.Scanner;

public class ArrayInput
{
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        System.out.println("enter the number of elements in array");
        int n = scanner.nextInt();
        int[] number = new int[n];
        System.out.println("enter the array elements");
        for(int i=0;i<n;i++){
        System.out.println(number[i]);
       
        scanner.close();
    }    
} 
}
