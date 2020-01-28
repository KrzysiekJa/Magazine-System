#include "gtest/gtest.h"
#include <string>
#include <iostream>
#include "Employee.h"
#include "OrdersControlSystem.h"
#include "Messenger.h"
#include "Driver.h"

void Driver::deselectOrder(std::string id, std::string status) {

    sql_string = "UPDATE ORDERS SET STATUS = '" + status + "' WHERE ID = " + id + "";
    executeQuery(sql_string);
}

TEST(driverMenu, allred) {
        std::string str="show all"

    void Driver::driverMenu(std::string str) 
    {
        
        std::cout << "";
    }
    
    EXPECT(Driver::driverMenu(str), oCSys.showListOfOrdres());     //oczekuje wywo³ania funckji dla podanej komendy
}
TEST(driverMenu, allgreen) {

    std::string str = "show all";
    void Driver::driverMenu( std::string str) {
        OrdersControlSystem oCSys;
        while (true)
           
        
       
        
            oCSys.showListOfOrdres();
        

    }

        EXPECT(Driver::driverMenu(str), oCSys.showListOfOrdres());
}
TEST(driverMenu, show) {
        std::string str="show";
    void Driver::driverMenu(std::string str) {
        OrdersControlSystem oCSys;
        while (true)
            
        if (str == "show all")
        {
            oCSys.showListOfOrdres();
        }
        if (str == "show")
        {
            std::cout << "Order's id : ";
            std::string order_id;
            std::cin >> order_id;
            oCSys.showOrder(order_id);
        }


    }

    EXPECT(Driver::driverMenu(str), oCSys.showOrder(order_id));
}
TEST(driverMenu, deselect) {

    std::string str="deselect";
    void Driver::driverMenu(std::string str) {
        OrdersControlSystem oCSys;
        while (true)
            
       if (str == "show all")
        {
            oCSys.showListOfOrdres();
        }
        if (str == "show")
        {
            std::cout << "Order's id : ";
            std::string order_id;
            std::cin >> order_id;
            oCSys.showOrder(order_id);
        }
        if (str == "deselect")
        {
            std::string id, status;
            std::cout << "id";
            std::cin >> id;
            std::cout << "status";
            std::cin >> status;
            deselectOrder(id, status);
        }


    }

    EXPECT(Driver::driverMenu(str), deselectOrder(id, status));
}
TEST(driverMenu, complited) {
    std::string str="complited";
    void Driver::driverMenu(std::string str) {
        OrdersControlSystem oCSys;
        while (true)
            
       if (str == "show all")
        {
            oCSys.showListOfOrdres();
        }
        if (str == "show")
        {
            std::cout << "Order's id : ";
            std::string order_id;
            std::cin >> order_id;
            oCSys.showOrder(order_id);
        }
        if (str == "deselect")
        {
            std::string id, status;
            std::cout << "id";
            std::cin >> id;
            std::cout << "status";
            std::cin >> status;
            deselectOrder(id, status);
        }
        if (str == "complited")
        {
            std::string id, status;
            std::cout << "id";
            std::cin >> id;
            std::cout << "status";
            std::cin >> status;
            oCSys.changeStatus(id, status);
        }


    }

    EXPECT(Driver::driverMenu(str), oCSys.changeStatus(id, status));
}
TEST(driverMenu, read) {
    std::string str="read";
    void Driver::driverMenu(std::string str) {
        OrdersControlSystem oCSys;
        Messenger mess;
        while (true)
            
                if (str == "show all")
        {
            oCSys.showListOfOrdres();
        }
        if (str == "show")
        {
            std::cout << "Order's id : ";
            std::string order_id;
            std::cin >> order_id;
            oCSys.showOrder(order_id);
        }
        if (str == "deselect")
        {
            std::string id, status;
            std::cout << "id";
            std::cin >> id;
            std::cout << "status";
            std::cin >> status;
            deselectOrder(id, status);
        }
        if (str == "complited")
        {
            std::string id, status;
            std::cout << "id";
            std::cin >> id;
            std::cout << "status";
            std::cin >> status;
            oCSys.changeStatus(id, status);
        }
        if (str == "read")
        {
            std::string messageID;
            std::cout << "Massage's id : ";
            std::cin >> messageID;
            mess.readMessage(messageID);
        }


    }

    EXPECT(Driver::driverMenu(str), mess.readMessage(messageID));
}
TEST(driverMenu, send) {
    std::string str="send";
    void Driver::driverMenu(std::string str) {
        OrdersControlSystem oCSys;
        Messenger mess;
        while (true)

        if (str == "show all")
        {
            oCSys.showListOfOrdres();
        }
        if (str == "show")
        {
            std::cout << "Order's id : ";
            std::string order_id;
            std::cin >> order_id;
            oCSys.showOrder(order_id);
        }
        if (str == "deselect")
        {
            std::string id, status;
            std::cout << "id";
            std::cin >> id;
            std::cout << "status";
            std::cin >> status;
            deselectOrder(id, status);
        }
        if (str == "complited")
        {
            std::string id, status;
            std::cout << "id";
            std::cin >> id;
            std::cout << "status";
            std::cin >> status;
            oCSys.changeStatus(id, status);
        }
        if (str == "read")
        {
            std::string messageID;
            std::cout << "Massage's id : ";
            std::cin >> messageID;
            mess.readMessage(messageID);
        }
        if (str == "send")
        {
            std::string message, sender, receiver;
            std::cout << "Your id : ";
            std::cin >> sender;
            std::cout << "Receiver's id : ";
            std::cin >> receiver;
            std::cout << "Massage : ";
            std::cin >> message;
            mess.sendMessage(message, receiver, sender);
        }


    }

    EXPECT(Driver::driverMenu(str), mess.sendMessage(message, receiver, sender));
}
TEST(driverMenu, logout) {
    std::string str = "logout";
    void Driver::driverMenu(std::string str) {
        OrdersControlSystem oCSys;
        Messenger mess;
        while (true)
            
        if (str == "show all")
        {
            oCSys.showListOfOrdres();
        }
        if (str == "show")
        {
            std::cout << "Order's id : ";
            std::string order_id;
            std::cin >> order_id;
            oCSys.showOrder(order_id);
        }
        if (str == "deselect")
        {
            std::string id, status;
            std::cout << "id";
            std::cin >> id;
            std::cout << "status";
            std::cin >> status;
            deselectOrder(id, status);
        }
        if (str == "complited")
        {
            std::string id, status;
            std::cout << "id";
            std::cin >> id;
            std::cout << "status";
            std::cin >> status;
            oCSys.changeStatus(id, status);
        }
        if (str == "read")
        {
            std::string messageID;
            std::cout << "Massage's id : ";
            std::cin >> messageID;
            mess.readMessage(messageID);
        }
        if (str == "send")
        {
            std::string message, sender, receiver;
            std::cout << "Your id : ";
            std::cin >> sender;
            std::cout << "Receiver's id : ";
            std::cin >> receiver;
            std::cout << "Massage : ";
            std::cin >> message;
            mess.sendMessage(message, receiver, sender);
        }
        if (str == "logout")
        {
            return;
        }

    }

    EXPECT(Driver::driverMenu(str), return);
}



