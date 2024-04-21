class Test
{ 
public static void main(String a[])
{
for(int i=0; i<10;i++)
{
try
{
System.out.println(i);
Thread.sleep(2000);
}
catch(InterruptedException e){}
}
}
}
