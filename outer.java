public class outer {
    static int a=10;
    int c=30;
    void disp(){
        inner ob=new inner();
        ob.disp();
    }
    static class inner{
        int b=20;
        void disp();
    }
    System.out.println(b);

}
