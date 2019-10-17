import java.awt.*;
import java.awt.event.*;
import java.applet.*;

/*
<applet code="A3P1.class" width=250 height=150>
</applet>
 */
public class A3P1 extends Applet implements ActionListener {
    Label l1;
    String msg;
    Button click;

    public void init() {
        l1 = new Label("This is Question No. 1");
        add(l1);
        click = new Button("Click Here");
        add(click);
        click.addActionListener(this);
    }

    public void actionPerformed(ActionEvent ae) {
        msg = "This is the starting of basics of Java Applet and AWT";
        repaint();
    }

    public void paint(Graphics g) {
        g.drawString(msg, 6, 100);
    }
}
