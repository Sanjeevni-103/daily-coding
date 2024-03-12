public class copy_constructor {
    int a;
    copy_constructor()
    {
        a=40;
    }
    copy_constructor(copy_constructor ob3)
    {
        a=ob3.a;
    }
    void disp(){
        System.out.println("the values of a :"+a);
    }
}
class Copyconst{
    public static void main(String[] args) {
        copy_constructor ob1=new copy_constructor();
        copy_constructor ob2=new copy_constructor();
        ob1.disp();
        ob2.disp();
    }
}
