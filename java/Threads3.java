class ChildThread implements Runnable
{
	Thread t;
	ChildThread(String name)
	{
		t = new Thread(this, name);
		t.start();
	}
	public void run()
	{
		for(int i=1;i<=6;i++)
		{
		try
		{
			if(t.getName().equals("Name"))
			{
				Thread.sleep(1000);
				System.out.println(t.getName()+": Ankush Garg");
			}
			else if(t.getName().equals("Enrolment No"))
			{
				Thread.sleep(2000);
				System.out.println(t.getName()+": 05576803119");
			}
			else
			{
				Thread.sleep(3000);
				System.out.println(t.getName()+": Physics");
			}
		}
		catch(InterruptedException e)
		{
			System.out.println(t.getName()+" is interrupted");
		}
		}
	}
}
class Threads3
{
	public static void main(String args[])
	{
		ChildThread one = new ChildThread("Name");
		ChildThread two = new ChildThread("Enrolment No");
		ChildThread three = new ChildThread("Subject");
	}
}