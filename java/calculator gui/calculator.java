import java.applet.*;
import java.awt.*;
import java.awt.event.*;
/*<applet code="calculator" width="300" height="279"></applet>*/
public class calculator extends Applet
{
	TextField t1;
	Button num1,num2,num3,num4,num5,num6,num7,num8,num9,num0,dot,eq,ce,divide,multi,sub,addi;
	public void start()
	{
		t1=new TextField();
		num1=new Button("1");
		num2=new Button("2");
		num3=new Button("3");
		num4=new Button("4");
		num5=new Button("5");
		num6=new Button("6");
		num7=new Button("7");
		num8=new Button("8");
		num9=new Button("9");
		num0=new Button("0");	
		dot=new Button(".");
		eq=new Button("=");
		ce=new Button("CE");
		divide=new Button("/");
		multi=new Button("x");
		sub=new Button("-");
		addi=new Button("+");
		setLayout(null);
		t1.setBounds(2,2,296,30);
		num7.setBounds(2,34,74,49);
		num8.setBounds(76,34,74,49);
		num9.setBounds(150,34,74,49);
		num4.setBounds(2,83,74,49);
		num5.setBounds(76,83,74,49);
		num6.setBounds(150,83,74,49);
		num1.setBounds(2,132,74,49);
		num2.setBounds(76,132,74,49);
		num3.setBounds(150,132,74,49);
		num0.setBounds(76,181,74,49);
		dot.setBounds(2,181,74,49);
		eq.setBounds(150,181,74,49);
		divide.setBounds(224,34,74,49);
		multi.setBounds(224,83,74,49);
		sub.setBounds(224,132,74,49);
		addi.setBounds(224,181,74,49);
		ce.setBounds(2,230,296,49);
		add(t1);
		add(num1);
		add(num2);
		add(num3);
		add(num4);
		add(num5);
		add(num6);
		add(num7);
		add(num8);
		add(num9);
		add(num0);
		add(dot);
		add(eq);
		add(ce);
		add(divide);
		add(multi);
		add(sub);
		add(addi);
	}
}
