
rm ./files/account.bank ./files/customer.bank ./files/transactions.bank
gcc ./src/client.c -o client -w
gcc ./src/server.c -lcrypt -o server -w

