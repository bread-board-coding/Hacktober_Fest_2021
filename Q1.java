class Q1{
    static int i = 10;
   static String s = "ANKUSH GARG";
   static void disp(){
    System.out.println("STATIC VARIABLE INT: " + i);
    System.out.println("STATIC VARIABLE IN STRING : "+ s);
}
static{
    System.out.println("IT IS A STATIC BLOCK ");
    
} 

   //Static class
   static class MyNestedClass{
	//non-static method
	public void disp2() {

	  String str = "IT IS A NON STATIC METHOD IN NESTED CLASS";
	   System.out.println(str); 
	}

   }
   public static void main(String args[])
   {
      disp();
      Q1.MyNestedClass obj=new Q1.MyNestedClass();
      obj.disp2();
	
   }
}