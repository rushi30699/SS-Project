
#include <time.h>
#define MAX_TRANSACTIONS 100
struct Transaction
{
    int transactionID; // 0, 1, 2, 3 ...
    int accountNumber;
    bool operation; // 0 -> Withdraw, 1 -> Deposit
    long int oldBalance;
    long int newBalance;
    time_t transactionTime;
};

struct Customer
{
    int id; // 0, 1, 2 ....
    char name[25];
    char gender; // M -> Male, F -> Female, O -> Other
    int age;
    // Login Credentials
    char login[30]; // Format : name-id (name will the first word in the structure member `name`)
    char password[30];
    // Bank data
    int account; // Account number of the account the customer owns
    bool isAccountholder;
};

struct Account
{
    int accountNumber;                  // 0, 1, 2, ....
    int owners[2];                      // Customer IDs
    bool isRegularAccount;              // 1 -> Regular account, 0 -> Joint account
    bool active;                        // 1 -> Active, 0 -> Deactivated (Deleted)
    long int balance;                   // Amount of money in the account
    int transactions[MAX_TRANSACTIONS]; // A list of transaction IDs. Used to look up the transactions. // -1 indicates unused space in array
};
