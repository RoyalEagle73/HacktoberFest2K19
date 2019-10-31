import java.awt.*;
import java.awt.event.*;
import java.applet.*;

/*
<applet code="A3P4.class" width=800 height=250>
</applet>
 */
public class A3P4 extends Applet implements ActionListener, ItemListener {
    Label l1;
    TextField t1;
    String msg, msg1;
    Button click;
    String str;
    Checkbox c1, c2, c3, c4, c5;

    public void init() {
        l1 = new Label("This is Question No. 3. Enter a name and kindly check a Subject.");
        add(l1);
        t1 = new TextField(25);
        add(t1);
        click = new Button("Enter");
        add(click);
        c1 = new Checkbox("Java");
        c2 = new Checkbox("Database Management Systems");
        c3 = new Checkbox("Computer Networking");
        c4 = new Checkbox("Computer Graphics");
        c5 = new Checkbox("Design and Analysis of Algorithms");
        add(c1);
        add(c2);
        add(c3);
        add(c4);
        add(c5);
        click.addActionListener(this);
        c1.addItemListener(this);
        c2.addItemListener(this);
        c3.addItemListener(this);
        c4.addItemListener(this);
        c5.addItemListener(this);
    }

    public void actionPerformed(ActionEvent ae) {
        msg = t1.getText();

        repaint();

    }

    public void itemStateChanged(ItemEvent ie) {
        repaint();
    }

    public void paint(Graphics g) {
        g.drawString(msg, 6, 100);
        msg1 = "Name of Faculty of checked Subject ";
        g.drawString(msg1, 6, 120);
        if (c1.getState() == true) {
            msg1 = "Java by Dr. P.V.S.S.R. ChandraMouli\n";
            g.drawString(msg1, 6, 140);
        }
        if (c2.getState() == true) {
            msg1 = "Database Management Systems by Dr. Danish Ali Khan\n";
            g.drawString(msg1, 6, 160);
        }
        if (c3.getState() == true) {
            msg1 = "Computer Networking by Dr. Chandrashekhar Azad\n";
            g.drawString(msg1, 6, 180);
        }
        if (c4.getState() == true) {
            msg1 = "Computer Graphics by Dr. Alekha Kumar Mishra\n";
            g.drawString(msg1, 6, 200);
        }
        if (c5.getState() == true) {
            msg1 = "Design and Analysis of Algorithms by Dr. Dilip Kumar Shaw\n";
            g.drawString(msg1, 6, 220);
        }

    }
}
