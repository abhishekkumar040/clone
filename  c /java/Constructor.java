class demo{
    int x;
    demo(){
        x=10;
    }
}
class Constructor {
    public static void main(String[] args)
    {
        demo d1=new demo();
        demo d2=new demo();
        System.out.println(d1.x+" \n"+d2.x);
      
    }
}