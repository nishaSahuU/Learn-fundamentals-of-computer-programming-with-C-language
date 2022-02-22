

int main()
{
    int pin,pinIn_bankdatabase=8899;
    int cash=9000,cashW;

    printf("\nEnter your PIN:");
    scanf("%d",&pin);
    if(pin==pinIn_bankdatabase)
    {
        printf("Available amount is:%d$",cash);
        printf("\nEnter amount to widthdraw:");
        scanf("%d",&cashW);
        if(cashW>cash)
        {
            printf("\nAmount is not available\n");
        }
        else{
            cash=cash-cashW;
            printf("Available Amount is %d $",cash);
        }
    }
    else{
        printf("The PIN is incorrect, try again!");
    }
}