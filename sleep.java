class Test
{ 
public static void main(String a[])
{
for(int i=10; i>=0;i--)
{
try
{
System.out.println(i);
Thread.sleep(2000);
System.out.println("call me in heaven");
}


catch(InterruptedException e){}
}
}
}
