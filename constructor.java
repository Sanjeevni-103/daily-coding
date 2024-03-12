public class constructor {
    int a,b;//instance variable
    constructor(){
        a=10;b=20;
    }
    void Display(){
        System.out.println(a+" "+b);
    }
}
class Main_Num{
    public static void main(String[] args) {
        constructor ob=new constructor();//here the constructor called automatically
        ob.Display();
    }
}

