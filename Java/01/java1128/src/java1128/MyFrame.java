//package java1128;
//
//
//import java.awt.BorderLayout;
//
//import javax.swing.JButton;
//import javax.swing.JFrame;
//
//public class MyFrame extends JFrame{
//	public MyFrame() {
//		 
//        setTitle("BorderLayoutTest");
//        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
//
//        setLayout(new BorderLayout());
//
//        add(new JButton("Center"), BorderLayout.CENTER);
//        add(new JButton("Line Start"), BorderLayout.LINE_START);
//        add(new JButton("Line End"), BorderLayout.LINE_END);
//        add(new JButton("Page Start"), BorderLayout.PAGE_START);
//        add(new JButton("Page End"), BorderLayout.PAGE_END);
//
//        pack();
//        setVisible(true);
//  }
//
//}

//package java1128;
//
//import java.awt.*;
//import javax.swing.*;
// 
//class MyFrame extends JFrame {
//       public MyFrame() {
// 
//             setTitle("GridLayoutTest");
//             setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
// 
//             setLayout(new GridLayout(0, 3));
// 
//             add(new JButton("Button1"));
//             add(new JButton("Button2"));
//             add(new JButton("Button3"));
//             add(new JButton("B4"));
//             add(new JButton("Long Button5"));
// 
//             pack();
//             setVisible(true);
//       }
//}

package java1128;

import java.awt.*;
import java.awt.event.*;
import javax.swing.*;
 
class MyFrame extends JFrame {
       JButton b1;
       private JButton b2, b3;
 
       public MyFrame() {
             setTitle("Absolute Position Test");
             setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
             setSize(300, 200);
             JPanel p = new JPanel();
             p.setLayout(null);
 
             b1 = new JButton("Button #1");
             p.add(b1);
             b2 = new JButton("Button #2");
             p.add(b2);
             b3 = new JButton("Button #3");
             p.add(b3);
             b1.setBounds(20, 5, 95, 30);
             b2.setBounds(55, 45, 105, 70);
             b3.setBounds(180, 15, 105, 90);
             add(p);
             setVisible(true);
       }
}
 
public class AbsoluteTest {
       public static void main(String args[]) {
             MyFrame f=new MyFrame();
       }
}























