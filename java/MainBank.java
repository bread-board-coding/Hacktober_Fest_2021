import java.util.Scanner;

abstract class Account {
  private String accountHolderName;
	private int accountNumber;
	private double currentBalance;
	private int transactionNumber;
	protected double interest;
	private double bankFee;
	
	public Account(int accountNumber,String accountHolderName,double currentBalance){
		this.accountNumber=accountNumber;
		this.accountHolderName=accountHolderName;
		this.currentBalance=currentBalance;
	}
	
	public abstract void deposit(double amount);
	
	public abstract void withdraw(double amount);
	
	protected void addAmount(double amount){
		this.currentBalance+=amount;
		this.transactionNumber++;
	}
	
	protected void deductAmount(double amount){
		this.currentBalance-=amount;
		this.transactionNumber++;
	}
	
	protected void addBankFee(double amount){
		bankFee+=amount;
	}
	
	public double getBalance(){
		return this.currentBalance;
	}
	
	public void endMonth(){
		System.out.println("Hello!Mr. "+this.accountHolderName+" Your monthly status----->");
		System.out.println("Total Transactions: " + transactionNumber);
		System.out.println("Bank Fee: " + bankFee);
		System.out.println("Interest: " + interest);
		System.out.println("Total balance: " + (getBalance()+interest));
		
	}
	
}
	

class CurrentAccount extends Account {
  public CurrentAccount(int accountNumber,String accountHolderName,double currentBalance){
		super(accountNumber,accountHolderName,currentBalance);
	}
	
	public void deposit(double amount){
		super.addAmount(amount);
		
	}
	
	public void withdraw(double amount){
		if(super.getBalance()-amount<0.00)System.out.println("You have entered an invalid account.Your current balance is "+super.getBalance()+".You cant withdraw more than that!!");
		
		else{
		super.deductAmount(amount);
		
		super.addBankFee(0.50);
		}
	
	
	}
}
class SavingAccount extends Account {
  
	public SavingAccount(int accountNumber,String accountHolderName,double currentBalance){
		super(accountNumber,accountHolderName,currentBalance);
	}
	
	public void deposit(double amount){
		
		super.addAmount(amount);
		
	}
	
	public void withdraw(double amount){
		
			if(super.getBalance()-amount<0.00)System.out.println("You have entered an invalid account.Your current balance is "+super.getBalance()+".You cant withdraw more than that!!");
			
			else{
			super.deductAmount(amount);
		
			}
	
	}
	
	public void interest(){
		interest=(super.getBalance()*5)/100;
	}
	
	
}

class MainBank {
  public static void main(String[] args){
	Scanner input=new Scanner(System.in);
		int choice=0;
		
		
		while(choice!=4){
		System.out.println("Welcome to AP Bank Ltd!!");
		System.out.println("Choose your account:");
		System.out.println("1.Current\n2.Savings\n3.exit");
		
			while(choice<1||choice>3){
				choice=input.nextInt();
			}
			switch(choice){
				
			case 1:
				System.out.println("Instruction:\nNo monthly fee for this account but every withdrawal generate a $0.50 fee. ");
				System.out.println("Cheque Book:\n Yes cheque book can be issued on this account ");
				int accountNumber1=2256056;
				System.out.println("Want to create a Current Account?Enter\nYour name:");
				String nameAgain=input.next();
				System.out.println("initial amount of money:");
				double amountAgain=input.nextInt();
				
				CurrentAccount currentAccount=new CurrentAccount(accountNumber1,nameAgain,amountAgain);
				while(choice!=5){
					System.out.println("Now do u want to \n1.deposit\n2.withdraw\n3.display total current balance\n4.display monthly status\n5.exit/cancel account");
				
					do{
						choice=input.nextInt();
					}while(choice<1||choice>5);
				
					if(choice==1){
						System.out.println("Deposit money:");
						double moneyAmount=input.nextDouble();
						currentAccount.deposit(moneyAmount);
					}
					else if(choice==2){
						System.out.println("withdraw money:");
						double moneyAmount=input.nextDouble();
						currentAccount.withdraw(moneyAmount);
					}
					else if(choice==3){
						System.out.println(currentAccount.getBalance());
					}
					else if(choice==4){
						System.out.println("One Month Completed!!" );
						currentAccount.endMonth();
					}
					
				}
				
			break;
				
			case 2:
				int choice1=0;
				System.out.println("Instructions:\nThere is be a limit of transactions( 5 at max) in a month.\nAnd end of the month interest will be added to the balance. No fee would generate for withdrawals.");
				System.out.println("Cheque Book:\n No cheque book can't be issued on this account ");
				int accountNumber2=3256056;
				System.out.println("Want to create a Saving Account?Enter\nYour name:");
				String nameMore=input.next();
				System.out.println("initial amount of money:");
				double amountMore=input.nextInt();
				
				SavingAccount savingAccount=new SavingAccount(accountNumber2,nameMore,amountMore);
				
				int counter=0; 
				
				while(choice1!=5){
					System.out.println("Now do u want to \n1.deposit\n2.withdraw\n3.display total current balance\n4.display monthly status\n5.exit/cancel account");
				
					do{
						choice1=input.nextInt();
					}while(choice1<1||choice1>5);
				
					if(choice1==1){
						if(counter<5){
							System.out.println("Deposit money:");
							double moneyAmount=input.nextDouble();
							savingAccount.deposit(moneyAmount);
							counter++;
						}
					}
					else if(choice1==2){
						if(counter<5){
							System.out.println("withdraw money:");
							double moneyAmount=input.nextDouble();
							savingAccount.withdraw(moneyAmount);
							counter++;
						}
					}
					else if(choice1==3){
						System.out.println(savingAccount.getBalance());
					}
					else if(choice1==4){
						System.out.println("One Month Completed!!" );
						savingAccount.interest();
						savingAccount.endMonth();
					}
					
				}
				
			break;
				
			}
		}
			
		
	}
}
