import java.applet.Applet;
import java.awt.*;

/*
<applet
code = a1.class
width = 300
height = 250>
</applet>
*/

public class a1 extends Applet{
    
    public void paint(Graphics g){
        g.drawString("Hello", 100, 100);
    }
}