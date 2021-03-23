#include<bits/stdc++.h>
using namespace std;

class inheritence
{
public:

    void product()
    {
        printf("\n\n\t\t=================================");
        printf("\t\t|Product Name   |   Product Code|");
        printf("\t\t=================================");
        printf("\t\t|Rice (5 KG)    |           RC11|");
        printf("\t\t=================================");
        printf("\t\t|Beef (1 KG)    |           BF11|");
        printf("\t\t=================================");
        printf("\t\t|Vegetable      |           VG11|");
        printf("\t\t=================================");
        printf("\t\t|Salt           |           SL11|");
        printf("\t\t=================================");
        printf("\t\t|Toothpaste     |           TP11|");
        printf("\t\t=================================");
        printf("\t\t|Shampoo        |           SM11|");
        printf("\t\t=================================");
        printf("\t\t|Milk Vitae     |           MV11|");
        printf("\t\t=================================");
        printf("\t\t|Perfume        |           PR11|");
        printf("\t\t=================================");
        printf("\t\t|Cold Drinks (2 Litr)   |   CD11|");
    }
};

class sale:public inheritence
{
public:

    void full()
    {
        printf("\t\t=================================");
        printf("\t\t => Welcome to our Super-shop <=  ");
        printf("\t\t=================================");

        product();

        printf("\n\n\t\t1 => New Customer");
        printf("\n\n\t\t2 => Old Customer");
        printf("\n\n\t\tPlease press 1 or 2 => ");

        char ch[5];
        gets(ch);

        if (ch[0] == '1')
        {
            newc ob1;
            ob1.fun1();
        }

        else if (ch[0] == '2')
        {
            oldc ob2;
            ob2.fun2();

        }
        else
        {
            full();
        }


        printf("\n\nPress m to return main menu or press another key to exit => ");

        gets(ch);

        if (ch[0] == 'm')
        {
            printf("\n\n");
            full();
        }
    }
};

class newc
{
    static int c = 235;
    static double total;

public:

    void fun1()
    {
        char name[15];

        printf("\n\n\t\tCustomer Name : ");
        gets(name);
        printf("\n\n\t\tCustomer ID : " + (c++));

        price();
        footer();
    }

    void price()
    {
        double total_price = 0, total_vat = 0;
        char p_code[10];

        for (;;)
        {
            int price;
            double vat;

            printf("\n\t\t\t\t\t(press t to calculate total)");

            printf("\n\n\t\tCode    : ");
            gets(p_code);

            if (strcmp(p_code, "t") == 0)
            {
                break;
            }

            else if(strcmp(p_code, "RC11") == 0 || strcmp(p_code, "rc11") == 0)
            {
                price = 200;
                vat = 0 * price;
                total_price = total_price + price;
                total_vat = total_vat + vat;

                printf("\t\tProduct : Rice (5 KG)");
                printf("\t\tPrice   : " + price + " Tk");
                printf("\t\tVat     : " + vat + " Tk");
            }

            else if(strcmp(p_code, "BF11") == 0 || strcmp(p_code, "bf11") == 0)
            {
                price = 200;
                vat = 0 * price;
                total_price = total_price + price;
                total_vat = total_vat + vat;

                printf("\t\tProduct : Beef (1 KG)");
                printf("\t\tPrice   : " + price + " Tk");
                printf("\t\tVat     : " + vat + " Tk");
            }

            else if(strcmp(p_code, "VG11") == 0 || strcmp(p_code, "vg11") == 0)
            {
                price = 300;
                vat = 0 * price;
                total_price = total_price + price;
                total_vat = total_vat + vat;

                printf("\t\tProduct : Vegetable");
                printf("\t\tPrice   : " + price + " Tk");
                printf("\t\tVat     : " + vat + " Tk");

            }

            else if(strcmp(p_code, "SL11") == 0 || strcmp(p_code, "sl11") == 0)
            {
                price = 60;
                vat = Math.ceil(0.1 * price);
                total_price = total_price + price;
                total_vat = total_vat + vat;

                printf("\t\tProduct : Salt");
                printf("\t\tPrice   : " + price + " Tk");
                printf("\t\tVat     : " + vat + " Tk");
            }

            else if(strcmp(p_code, "TP11") == 0 || strcmp(p_code, "tp11") == 0)
            {
                price = 50;
                vat = Math.ceil(0.1 * price);
                total_price = total_price + price;
                total_vat = total_vat + vat;

                printf("\t\tProduct : Toothpaste");
                printf("\t\tPrice   : " + price + " Tk");
                printf("\t\tVat     : " + vat + " Tk");
            }

            else if(strcmp(p_code, "SM11") == 0 || strcmp(p_code, "sm11") == 0)
            {
                price = 215;
                vat = Math.ceil(0.1 * price);
                total_price = total_price + price;
                total_vat = total_vat + vat;

                printf("\t\tProduct : Shampoo");
                printf("\t\tPrice   : " + price + " Tk");
                printf("\t\tVat     : " + vat + " Tk");
            }

            else if(strcmp(p_code, "MV11") == 0 || strcmp(p_code, "mv11") == 0)
            {
                price = 58;
                vat = Math.ceil(0.1 * price);
                total_price = total_price + price;
                total_vat = total_vat + vat;

                printf("\t\tProduct : Milk Vitae");
                printf("\t\tPrice   : " + price + " Tk");
                printf("\t\tVat     : " + vat + " Tk");
            }

            else if(strcmp(p_code, "PR11") == 0 || strcmp(p_code, "pr11") == 0)
            {
                price = 220;
                vat = Math.ceil(0.1 * price);
                total_price = total_price + price;
                total_vat = total_vat + vat;

                printf("\t\tProduct : Perfume");
                printf("\t\tPrice   : " + price + " Tk");
                printf("\t\tVat     : " + vat + " Tk");
            }

            else if(strcmp(p_code, "CD11") == 0 || strcmp(p_code, "cd11") == 0)
            {
                price = 82;
                vat = Math.ceil(0.1 * price);
                total_price = total_price + price;
                total_vat = total_vat + vat;

                printf("\t\tProduct : Cold Drinks (2 Litr)");
                printf("\t\tPrice   : " + price + " Tk");
                printf("\t\tVat     : " + vat + " Tk");
            }

            else
            {
                printf("\t\tPlease Enter correct code");
            }
        }
    }


    printf("\n\n\t\tTotal price     : " + total_price);
    printf("\t\tTotal Vat       : " + total_vat);

    total = total_price + total_vat;
    printf("\t\tGrand Total     : " + total);

    void footer()
    {

        printf("\n\n\t\t\t\tThank you");
        printf("\n\t\t\t\t\t\t Zahid & Malik");
        printf("\n\t\t\t\t\t\t---------------");
        printf("\n\t\t\t\t\t\t   Signature");

    }
};


class oldc
{
public:

    void fun2()
    {
        newc ob3 = new newc();

        int id;

        printf("\n\n\t\tCustomer ID : ");
        cin >> id;


        if (id >= 235 && id < ob3.c)
        {
            ob3.price();
            printf("\n\n\t\tYou got 5% discount");

            ob3.total = ob3.total - (0.05 * ob3.total);
            cout << "\n\n\t\tTotal with discount : " << ceil(ob3.total) << " Tk";

            ob3.footer();
        }
        else
        {
            printf("\t\tSorry. You are not our old customer");
            ob3.fun1();
        }
    }
};

int main()
{
    sale ob;
    ob.full();

    return 0;
}
