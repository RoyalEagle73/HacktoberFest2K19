import java.awt.*;
import java.awt.event.*;
import java.applet.*;

/*
<applet code="a2.class" width=250 height=150>
</applet>
 */
public class a2 extends Applet {
    String msg = "";
    Button yes, no, maybe;

    public void init() {
        Label l1 = new Label("Hello");
        add(l1);
    }

    public void paint(Graphics g) {
        g.drawString(msg, 6, 100);
    }
}
