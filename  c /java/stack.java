

public class Stack{
    int top=-1;
    int capacity=10;
    int []a=new int [capacity];
    void push(int x)
    {
    	if(top==capacity-1)
    	{
    		System.out.println("stack overflow");
    		System.exit(1);
    	}
    	System.out.println("inserting element "+x);
    	a[++top]=x;
    }
    int pop()
    {
    	if(top==-1)
    	{
    		System.out.println("stack underflow");
    		System.exit(1);
    	}
    	return a[top--];
    }
	public static void main(String[] args) {
       Stack s=new Stack();
		s.push(10);
		s.push(20);
		s.push(30);
		s.push(40);
		s.push(50);
		System.out.println("after deleting the top element " +s.pop());
		System.out.println("after deleting the top element " +s.pop());
		System.out.println("after deleting the top element " +s.pop());
	}

}
