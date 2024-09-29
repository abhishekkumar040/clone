class demo{
    int x;
    demo(int i){
        x=i;
    }
}
class Constructorpara {
    public static void main(String[] args)
    {
        demo d1=new demo(10);
        demo d2=new demo(20);
        System.out.println(d1.x+" \n"+d2.x);
      
    }
}