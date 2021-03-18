#Solve step
definition of class

#Problem I met
static int total needs to be definited again with

// get total
int BankAccount::total;
int BankAccount::getAllMoneyInBank() { return total; }

#Solution
Because the static int total only delcaration
didn't definite it, you need to definite it again.