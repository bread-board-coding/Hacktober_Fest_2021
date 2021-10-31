package Lab4;

public class Lab4Q6 {

	private int l;
	private int b;
	
		public Lab4Q6 (int l, int b) {
		this.l=l;
		this.b=b;
		}
	
		public int getL() {
		return l;
		}
		
		public int getB() {
		return b;
		}
		
		public static void main(String args[])
		{
			Lab4Q6 p= new Lab4Q6(20,30);
			double area=p.getL()*p.getB();
	System.out.println("Area with length "+p.getL()+" and breath "+p.getB()+" is "+area);
	
		}
}
