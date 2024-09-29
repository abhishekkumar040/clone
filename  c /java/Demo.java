import java.util.Scanner;
class Employee{
    String name;
    float salary;
    int id;
    float raisesalary(float percent)
    {
        salary+=salary*(percent/100);
        return salary;
    }
}
public class Demo
{
    public static void main(String[]args)
    {
        Employee e=new Employee();
        Scanner Sc=new Scanner(System.in);
        System.out.println("enter name");
        e.name=Sc.nextLine();
        System.out.println("enter id");
        e.id=Sc.nextInt();
        System.out.println("enter salary");
        e.salary=Sc.nextFloat();
        System.out.println("enter the percentage to increment");
        int a=Sc.nextInt();
        System.out.println("enter salary afetr increment"+e.raisesalary(a));
        e.name=Sc.nextLine();
    }
    
}