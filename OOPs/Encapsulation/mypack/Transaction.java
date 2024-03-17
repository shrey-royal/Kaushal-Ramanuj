package mypack;

public class Transaction {
    public void transfer(BankAccount sender, BankAccount receiver, double amount) {
        if(sender.getBalance() >= amount) {
            sender.withdraw(amount);
            receiver.deposit(amount);
            System.out.println("Transfer of " + amount + " from " + sender.getAccountHolderName() + " to " + receiver.getAccountHolderName() + " Successful.");
        } else {
            System.out.println("Transfer Failed. Insufficient funds in the sender's account.");
        }
    }
}
