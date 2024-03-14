class try_mul_catch
{
public static void main(String args[])
{
int x=12;
int y=6;
int p[]={10,6,4,2};
try
{
int z=x/y;
System.out.println("The result is "+z);
p[17]=10;
}
catch(ArithmeticException e)
{
System.out.println("This results to infinity");
}
catch(Exception e)
{
System.out.println(e);
}
}
}

