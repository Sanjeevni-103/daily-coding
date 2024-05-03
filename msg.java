import java.applet.*;
import java.awt.*;
import java.awt.event.*;
public class event extends Applet implements KeyListener
{
String msg="";
int x=10,y=10;
public void init()
{
addKeyListener(this);
requestFocus();
}
public void KeyPressed(KeyEvent ke)
{
showStatus("Key is Pressed");
}
public void keyReleased(KeyEvent ke)
{
showStatus("Key is released");
}
public void keyTyped(KeyEvent ke)
{
msg+=ke.getKeyChar();
repaint();
}
public void paint(Graphics g)
{
g.drawString(msg,x,y);
}
}
