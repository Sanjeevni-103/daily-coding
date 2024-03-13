public class constructor {
    int a,b;
    constructor(){
        a=10;b=20;
    }
    void display(){
        System.out.println(a+" " +b);
    }
}
class Main_Num{
    public static void main(String a[]){
        constructor ob=new constructor();//here the constructor called automatically.
        ob.display();
    }
}
