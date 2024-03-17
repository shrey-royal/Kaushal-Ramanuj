package mypack;

public class BankAccount {
    private String accountNo;
    private String accountHolderName;
    private double balance;

    public BankAccount(String accountNo, String accountHolderName, double balance) {
        this.accountNo = accountNo;
        this.accountHolderName = accountHolderName;
        this.balance = balance;
    }

    public String getAccountNo() {
        return accountNo;
    }

    public String getAccountHolderName() {
        return accountHolderName;
    }

    public double getBalance() {
        return balance;
    }

    public void deposit(double amount) {
        this.balance += amount;
        System.out.println("Deposit of " + amount + " succcessful. New Balance: " + balance);
    }

    public void withdraw(double amount) {
        if(balance >= amount && (balance-amount) > 2000) {
            balance -= amount;
            System.out.println("Withdrawal of " + amount + " successful. New Balance: " + balance);
        } else {
            System.out.println("Insufficient Balance. Withdrawal of " + amount + " unsuccessful.");
        }
    }

}
