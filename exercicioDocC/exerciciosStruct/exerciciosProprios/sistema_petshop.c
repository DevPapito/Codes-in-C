/*
* Um sistema que tem a finalidade de permitir multiplos cadastros e pesquisas de Clientes e seus respectivos animais cadastrados no banco de dados(In Memory)
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define DEFAULT_SIZE 150
#define DB_SIZE 5

typedef struct
{

    unsigned int    id;
    char    name[DEFAULT_SIZE];
    long code;

} Animal;

typedef struct
{

    unsigned int    id;
    char    name[DEFAULT_SIZE];
    char    email[DEFAULT_SIZE];
    long    phone;
    long    code_animal;

} Client;

Animal db_animals[DB_SIZE];

Client db_clients[DB_SIZE];

int runtime;

int     create_client(Client client, Animal animal);
Client  read_client(long code, long phone, char email[]);

int     main(void)
{

    srand(time(NULL));

    printf("Welcome to PetShop System!\n");
    printf("Press any button to continue... ");
    getchar();

    short   operation;
    char    message[DEFAULT_SIZE] = "Notfing happying!";
    int id_interator = -1;

    do
    {

        printf("Alert System: %s\n",message);
        strncpy(message,"Noting happing!\n",sizeof(message));

        printf("1 - create client | 2 - read client info | 3 - exit of system\n");

        printf(">>> ");
        scanf("%hd",&operation);

        switch(operation)
        {

            case 1:

                Animal animal;
                Client client;
                animal.id = id_interator;
                client.id = id_interator;

                printf("Start Cadastration!\n");
                printf("Type client name in down: \n");
                printf(">>> ");
                scanf(" %s",client.name);

                printf("Type animal name in down: \n");
                printf(">>> ");
                scanf(" %s",animal.name);


                printf("Type client email in down: \n");
                printf(">>> ");
                scanf(" %s",client.email);

                printf("Type client phone in down: \n");
                printf(">>> ");
                scanf(" %ld",&client.phone);

                long code = (rand() % 999999) + 100000;

                animal.code = code;
                client.code_animal = animal.code;

                if(create_client(client, animal) != 0)
                {

                    strncpy(message,"Client it already exists!\n",sizeof(message));

                }
                else
                {
                    id_interator++;
                    strncpy(message,"Client registred with success!\n",sizeof(message));        printf("This is code identify your animal, don't forget her\n");
                    printf("Your animal code: %ld\n\n",code);

                }
                break;

            case 2:

                short choice;

                printf("Search client info by code animal and email or phone\n");

                printf("Choice your method 1 - code animal | 2 - email | 3 - phone\n");
                printf(">>> ");
                scanf(" %hd",&choice);

                long client_code = 0;
                long client_phone;
                char client_email[DEFAULT_SIZE];
                Client ref_client;

                switch(choice)
                {

                    case 1:

                        printf("Type your code: ");
                        scanf(" %ld",&client_code);
                        client = read_client(client_code,0,'\0');

                        break;
                    case 2:

                        printf("Type your email: ");
                        scanf(" %s",client_email);
                        client = read_client(0,0,client_email);

                        break;

                    case 3:

                        printf("Type your phone: ");
                        scanf(" %ld",&client_phone);
                        client = read_client(0,client_phone,'\0');
                        break;

                    default:


                        strncpy(message,"Command typed no exists!\n",sizeof(message));
                }

                if (client.phone == 1)
                {

                    strncpy(message,"Client not existes you typed wrong!\n",sizeof(message));

                }
                else
                {
                    strncpy(message,"Success find client!\n",sizeof(message));

                    printf("\n\nInfo Client\n");
                    printf("Name: %s\nEmail: %s\nPhone: %ld\n",
                                                client.name,
                                                client.email,
                                                client.phone);

                }

                break;
            case 3:

                runtime = 1;
                break;
            defualt:
                strncpy(message,"Command typed no exists!\n",sizeof(message));

        }

    } while (runtime != 1);


    return 0;

}

int create_client(Client client, Animal animal)
{

    for (int i = 0; i < DB_SIZE; i++)
    {

        if (i == client.id) continue;

        for (int j = 0; j < DB_SIZE; j++) {

            if (db_clients[j].phone == client.phone || strcmp(db_clients[j].email,client.email) == 0) return 1;

        }

        db_clients[i] = client;
        db_animals[i] = animal;

        return 0;

    }

    return 1;

}

Client read_client(long code, long phone, char email[])
{

    for (int i = 0; i < DB_SIZE; i++)
    {

        if (code != 0)
        {
            if (db_clients[i].code_animal == code)
            {

                return db_clients[i];

            }

        } else if (phone != 0)
        {

            if (db_clients[i].phone == phone)
            {

                return db_clients[i];

            }

        } else
        {

            if (strcmp(db_clients[i].email,email) == 0)
            {

                return db_clients[i];
            }
        }

    }

    Client client;
    return client;

}
