import java.awt.*;
import java.awt.event.*;
import java.applet.*;

/*
<applet code="A3P2.class" width=250 height=150>
</applet>
 */
public class A3P2 extends Applet implements ActionListener {
    Label l1;
    TextField t1;
    String msg;
    Button click;
    String str;

    public void init() {
        l1 = new Label("This is Question No. 2. Please Enter a Subject of 3rd Semester");
        add(l1);
        t1 = new TextField(25);
        add(t1);
        click = new Button("Enter");
        add(click);

        click.addActionListener(this);

    }

    public void actionPerformed(ActionEvent ae) {
        str = t1.getText();
        if (str.equals("Java")) {
            msg = "Dr. P.V.S.S.R. ChandraMouli";
        } else if (str.equals("Graphics")) {
            msg = "Dr. Alekha Kumar Mishra";
        } else if (str.equals("DBMS")) {
            msg = "Dr. Danish Ali Khan";
        } else if (str.equals("Networking")) {
            msg = "Dr. Chandrashekhar Azad";
        } else if (str.equals("DAA")) {
            msg = "Dr. Dilip Kumar Shaw";
        } else {
            msg = "Please Enter a subject of 3rd Semester";
        }
        repaint();
    }

    public void paint(Graphics g) {
        g.drawString(msg, 6, 100);
    }
}
