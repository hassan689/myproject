#include <iostream>
#include <windows.h>      // system colours
#include <mmsystem.h>     // media songs
#include <string>
#include <time.h>
#include <fstream>
using namespace std;

#pragma comment(lib , "winmm.lib")    //for music

void backgroundmusic() {
    PlaySound(TEXT("You Are My Special"), NULL, SND_FILENAME | SND_ASYNC);
    //Game Of Thrones
    //METAMORPHOSIS!
    //Way down we go
    //You Are My Special
}


void m() {

    system("color 0E");
    cout << " ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ \n";
    cout << "|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|\n";
    cout << " __      __   _                    _____      _           ___                         ___                 _   _ _             \n";
    cout << " \\ \\    / /__| |__ ___ _ __  ___  |_   _|__  | |   __ _  / __| ___ _ _ ___ _ _  ___  | _ \\___ ___ ___ _ _| |_| | |            \n";
    cout << "  \\ \\/\\/ / -_) / _/ _ \\ '  \\/ -_)   | |/ _ \\ | |__/ _` | \\__ \\/ -_) '_/ -_) ' \\/ -_) |   / -_|_-</ _ \\ '_|  _|_|_|            \n";
    cout << "   \\_/\\_/\\___|_\\__\\___/_|_|_\\___|   |_|\\___/ |____\\__,_| |___/\\___|_| \\___|_||_\\___| |_|_\\___/__\\___/_|  \\__(_|_)            \n";
    cout << "  ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ \n";
    cout << "|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|\n";

}
void displayPattern(int patternNumber)
{
    m();
    system("color 0E");

    if (patternNumber == 1)
    {
        cout << "\n\n\n\n";
        cout << " __      _____ _    ___ ___  __  __ ___ \n";
        cout << " \\ \\    / / __| |  / __/ _ \\|  \\/  | __|\n";
        cout << "  \\ \\/\\/ /| _|| |_| (_| (_) | |\\/| | _| \n";
        cout << "   \\_/\\_/ |___|____\\___\\___/|_|  |_|___|\n";
    }
    if (patternNumber == 2)
    {
        cout << "\n\n\n\n";
        cout << "  _____ ___   \n";
        cout << " |_   _/ _ \\  \n";
        cout << "   | || (_) | \n";
        cout << "   |_| \\___/  \n";
    }
    if (patternNumber == 3)
    {
        cout << "\n\n\n\n";
        cout << " _      _      ___ ___ ___ ___ _  _ ___  \n";
        cout << "| |    /_\\    / __| __| _ \\ __| \\| | __| \n";
        cout << "| |__ / _ \\   \\__ \\ _||   / _|| .` | _|  \n";
        cout << "|____/_/ \\_\\  |___/___|_|_\\___|_|\\_|___| \n";
        cout << "                                         \n";
    }
    if (patternNumber == 4)
    {
        cout << "\n\n\n\n";
        cout << "  _  _  ___ _____ ___ _      _   _   _ \n";
        cout << " | || |/ _ \\_   _| __| |    | | | | | |\n";
        cout << " | __ | (_) || | | _|| |__  |_| |_| |_|\n";
        cout << " |_||_|\\___/ |_| |___|____| (_) (_) (_)\n";
        cout << "                                       \n";
    }
}

void  mainMenu()
{
    for (int i = 0; i < 5; i++)
    {
        system("cls");
        displayPattern(i + 1);
        Sleep(1200);
    }

}
//void permanent() {
//    std::cout << "  ___                 _   _         ___           _            ___                                \n";
//    std::cout << " | _ \\_ _ ___ ______ / | | |_ ___  | _ \\ ___  ___| |__  __ _  | _ \\___  ___ _ __                  \n";
//    std::cout << " |  _/ '_/ -_|_-<_-< | | |  _/ _ \\ | _ \\/ _ \\/ _ \\ / / / _` | |   / _ \\/ _ \\ '  \\                 \n";
//    std::cout << " |_| |_| \\___/__/__/ |_|  \\__\\___/ |___/\\___/\\___/_\\_\\ \\__,_| |_|_\\___/\\___/_|_|_|                 \n";
//    std::cout << "  ___                 ___   _        __   ___              ___      _        _ _           __   _   _          ___           \n";
//    std::cout << " | _ \\_ _ ___ ______ |_  ) | |_ ___  \\ \\ / (_)_____ __ __ |   \\ ___| |_ __ _(_) |___  ___ / _| | |_| |_  ___  | _ \\___  ___ _ __ \n";
//    std::cout << " |  _/ '_/ -_|_-<_-<  / /  |  _/ _ \\  \\ V /| / -_) V  V / | |) / -_)  _/ _` | | (_-< / _ \\  _| |  _| ' \\/ -_) |   / _ \\/ _ \\ '  \\\n";
//    std::cout << " |_| |_| \\___/__/__/ /___|  \\__\\___/   \\_/ | \\___|\\_/\\_/  |___/\\___|\\__\\__,_|_|_/__/ \\___/_|    \\__|_||_||\\___| |_|_\\___/\\___/_|_|_|\n";
//    std::cout << "  ___                 ____  _        __   ___                _           _ _      _    _       ___                           \n";
//    std::cout << " | _ \\_ _ ___ ______ |__ / | |_ ___  \\ \\ / (_)_____ __ __   /_\\__ ____ _(_) |__ _| |__| |___  | _ \\___  ___ _ __  ___         \n";
//    std::cout << " |  _/ '_/ -_|_-<_-<  |_ \\ |  _/ _ \\  \\ V /| / -_) V  V /  / _ \\ V / _` | | / _` | '_ \\ / -_) |   / _ \\/ _ \\ '  \\(_-<         \n";
//    std::cout << " |_| |_| \\___/__/__/ |___/  \\__\\___/   \\_/ |_\\___|\\_/\\_/  /_/ \\_\\_/\\__,_|_|_\\__,_|_.__/_\\___| |_|_\\___/\\___/_|_|_/__/         \n";
//    std::cout << "  ___                 _ _    _          ___ _           _            _     ___                                             \n";
//    std::cout << " | _ \\_ _ ___ ______ | | |  | |_ ___   / __| |_  ___ __| |_____ _  _| |_  | _ \\___  ___ _ __                                \n";
//    std::cout << " |  _/ '_/ -_|_-<_-< |_  _| |  _/ _ \\ | (__| ' \\/ -_) _| / / _ \\ || |  _| |   / _ \\/ _ \\ '  \\                               \n";
//    std::cout << " |_| |_| \\___/__/__/   |_|   \\__\\___/  \\___|_||_\\___\\__|_\\_\\___/\\_,_|\\__| |_|_\\___/\\___/_|_|_|                               \n";
//    std::cout << "  ___ _                            _                                    _        _        _                                 \n";
//    std::cout << " | _ \\ |___ __ _ ___ ___   ___ _ _| |_ ___ _ _   _  _ ___ _  _ _ _   __| |_  ___(_)__ ___(_)                                \n";
//    std::cout << " |  _/ / -_) _` (_-</ -_) / -_) ' \\  _/ -_) '_| | || / _ \\ || | '_| / _| ' \\/ _ \\ / _/ -_)_                                 \n";
//    std::cout << " |_| |_\\___\\__,_/__/\\___| \\___|_||_\\__\\___|_|    \\_, \\___/\\_,_|_|   \\__|_||_\\___/_\\__\\___(_)                                \n";
//    std::cout << "                                                 |__/                                                                       \n";
//
//}
void loading_bar()
{
    system("COLOR 0e");

    SetConsoleCP(437);
    SetConsoleOutputCP(437);
    int bar1 = 177, bar2 = 219;
    cout << "\n\n\n\t\t\t\tLoading..........";
    cout << "\n\n\n\t\t\t\t";
    for (int i = 0; i < 25; i++)
        cout << (char)bar1;
    cout << "\r";
    cout << "\t\t\t\t";
    for (int i = 0; i < 25; i++)
    {
        cout << (char)bar2;
        Sleep(150);
    }
    cout << endl;
    cout << endl;
    cout << endl;
    system("CLS");
}
class Discount_Criteria
{
protected:
    static int num_checkouts; // categorize the price according to the floor floor one have high price and second floor with low price then first and so on
public:
    string booking_type;
    float total_amount;
    double discount;
    int netamount;
    int price = 0;
    string location;
    int floor_count;

    Discount_Criteria()
    {
    }

    virtual void setLocation(string local)
    {
        location = local;
    }
    int totaldiscountamount(string location, int totalprice)
    {

        int discount1 = 0;
        if (location == "Skardu")
        {
            discount1 = totalprice * 0.2;
        }
        else if (location == "Naran")
        {
            discount1 = totalprice * 0.3;
        }
        else if (location == "hunza")
        {
            discount1 = totalprice * 0.4;
        }
        if (location == "Skardu")
        {
            discount1 = totalprice * 0.2;
        }
        else if (location == "Naran")
        {
            discount1 = totalprice * 0.3;
        }
        else if (location == "Hunza")
        {
            discount1 = totalprice * 0.4;
        }
        else
        {
            discount = 0;
        }
        return discount1;
    }
    double getDiscount()
    {
        // discount = calculatediscount_amount(location);
        return discount;
    }
    void displayamount_data(string locality, string roomtype, int days)
    {
        if (roomtype == "Standard Room")
        {
            price = 10000 * days;
        }
        else if (roomtype == "Deluxe Room")
        {
            price = 20000 * days;
        }
        else if (roomtype == "Luxury Apartment")
        {
            price = 50000 * days;
        }
        else if (roomtype == "Executive Suite")
        {
            price = 40000 * days;
        }
        else if (roomtype == "Suite")
        {
            price = 30000 * days;
        }

        int discountAmount = totaldiscountamount(locality, price);
        int finalPrice = price - discountAmount;

        cout << "\n\n\n";
        cout << "The Branch You Chose:" << locality << endl;
        cout << "Your Room Type: " << roomtype << endl;
        cout << "Rent Per Night: " << price / days << endl;
        cout << "Number Of Days You Are Staying: " << days << endl;
        cout << "Total price: " << price << " PKR" << endl;
        cout << "Discount: " << discountAmount << " PKR" << endl;
        cout << "Final Price: " << finalPrice << " PKR" << endl;
    }

    int getfinalamount()
    {
        return total_amount;
    }
};
int Discount_Criteria::num_checkouts = 0;
class HotelRoom
{
public:
    int this_is_the_selected_floor;
    int room_number;
    int rows_asafloor;
    int cols_asaroomnumber;
    char symbol = 'B';
    char** array_for_availability;

public:
    HotelRoom()
    {
        array_for_availability = new char* [10];
        for (int i = 0; i < 10; i++)
        {
            array_for_availability[i] = new char[20];
        }

        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 20; j++)
            {

                if (i % 3 == 0 && j % 2 == 0) {
                    array_for_availability[i][j] = symbol;
                }
                else {
                    array_for_availability[i][j] = 'A';
                }
            }
        }
    }
    int getfloor()
    {
        return this_is_the_selected_floor;
    }
    int get_selected_room()
    {
        return room_number;
    }
    void available_rooms()
    {
        cout << "\n\n\nThese are the available rooms :  " << endl;
        cout << "A = Available\nB = Already Booked \nS = Your Room\n\n\n";
        for (int i = 0; i < 10; i++)
        {
            cout << "(Floor " << 9 - i << ")\t";

            for (int j = 0; j < 20; j++)
            {
                cout << array_for_availability[i][j] << "   ";
            }
            cout << endl;
        }

        cout << "\n\n\nFloor 0 means Ground Floor\n\n\n\n";

    }

    void check_room()
    {
        cout << "View The Room You Booked, It would be 'S'\n\n"
            << endl;
        for (int i = 0; i < 10; i++)
        {
            cout << "(Floor " << 9 - i << ")\t";

            for (int j = 0; j < 20; j++)
            {
                cout << array_for_availability[i][j] << "   ";
            }
            cout << endl;
        }
    }

    void book_a_room()
    {
        int choice;
        cout << endl
            << "Enter the floor u want the room to be at (0-9) = ";
        do
        {
            if (cin >> rows_asafloor && rows_asafloor >= 0 && rows_asafloor < 10)
            {
                break; // Exit the loop if the input is valid
            }
            else
            {
                cin.clear(); // Clear the error flag
                while (cin.get() != '\n')
                    ; // Discard invalid input
                cout << "Invalid Input, Please Enter the floor u want the room to be at (0-9) = ";

                rows_asafloor = 0; // Default value for invalid input
            }
        } while (true);
        this_is_the_selected_floor = rows_asafloor;
        if (rows_asafloor >= 0 && rows_asafloor <= 10)
        {
            cout << "Enter the room number u want ((1-20)) = ";
            do
            {
                if (cin >> cols_asaroomnumber && cols_asaroomnumber >= 0 && cols_asaroomnumber < 21)
                {
                    break; // Exit the loop if the input is valid
                }
                else
                {
                    cin.clear(); // Clear the error flag
                    while (cin.get() != '\n')
                        ; // Discard invalid input
                    cout << "Invalid Input, Please Enter the room number u want (1-20) = ";
                    cols_asaroomnumber = 0; // Default value for invalid input
                }
            } while (true);
            if (cols_asaroomnumber >= 0 && cols_asaroomnumber <= 20 && array_for_availability[9 - rows_asafloor][cols_asaroomnumber - 1] != 'S' && array_for_availability[9 - rows_asafloor][cols_asaroomnumber - 1] != 'B')
            {
                array_for_availability[9 - rows_asafloor][cols_asaroomnumber - 1] = 'S';
            }
            else {
                cout << "Room is already booked! Try Again";
                book_a_room();
            }
        }
    }

    void book_a_room(string& name, int& age, string& cnic)
    {
        int choice;
        cout << endl
            << "Enter the floor u want the room to be at (0-9) = ";
        do
        {
            if (cin >> rows_asafloor && rows_asafloor >= 0 && rows_asafloor < 10)
            {
                break; // Exit the loop if the input is valid
            }
            else
            {
                cin.clear(); // Clear the error flag
                while (cin.get() != '\n')
                    ; // Discard invalid input
                cout << "Invalid Input, Please Enter the floor u want the room to be at (0-9) = ";
                rows_asafloor = 0; // Default value for invalid input
            }
        } while (true);
        this_is_the_selected_floor = rows_asafloor;
        if (rows_asafloor >= 0 && rows_asafloor <= 10)
        {
            cout << "Enter the room number u want (1-20) = ";
            do
            {
                if (cin >> cols_asaroomnumber && cols_asaroomnumber >= 0 && cols_asaroomnumber < 21)
                {
                    break; // Exit the loop if the input is valid
                }
                else
                {
                    cin.clear(); // Clear the error flag
                    while (cin.get() != '\n')
                        ; // Discard invalid input
                    cout << "Invalid Input, Please Enter the room number u want (1-20) = ";
                    cols_asaroomnumber = 0; // Default value for invalid input
                }
            } while (true);
            if (cols_asaroomnumber >= 0 && cols_asaroomnumber <= 20 && array_for_availability[9 - rows_asafloor][cols_asaroomnumber - 1] != 'S' && array_for_availability[9 - rows_asafloor][cols_asaroomnumber - 1] != 'B')
            {
                array_for_availability[9 - rows_asafloor][cols_asaroomnumber - 1] = 'S';
            }
            else {
                cout << "Room is already booked! Try Again";
                book_a_room();
            }
        }
    }

    char** getarrayforavailablity()
    {
        return array_for_availability;
    }
    ~HotelRoom()
    {
        for (int i = 0; i < 10; i++)
        {
            delete[] array_for_availability[i];
        }
        delete[] array_for_availability;
    }
};
class RoomPrice : public HotelRoom, public Discount_Criteria
{
protected:
    string fullname;
    int age;
    int days;
    string cnic;
    string check_out;
    string type;
    float totalprice;

public:
    RoomPrice()
    {
        fullname = "";
        age = 0;
        days = 0;
        cnic = "";
        type = "";
        totalprice = 0.0;
    }
    RoomPrice(string t)
    {
        type = t;
    }

    void setLocation(string local) override
    {
        location = local;
    }

    virtual void setFullName(string fn) = 0;
    virtual void setage(int a) = 0;
    virtual void setcnic(string c) = 0;
    virtual void setdays(int d) = 0;
    virtual float getTotal() = 0;
    virtual void Checkout() = 0;
    virtual int getprice() = 0;
    virtual ~RoomPrice() {}
};
class Standard : public RoomPrice
{
private:
    int price = 10000;
    int floor;
    int room_num;
    int count;

public:
    Standard()
    {
        floor = 0;
        room_num = 0;
        count = 0;
    }
    friend ostream& operator<<(ostream& os, const Standard& room)
    {
        os << "                     STANDARD";
        os << "\n\n\n Price = 10000 PKR Per Night" << endl;
        os << "Settle into our comfortable Standard Room, offering a relaxing haven for your stay. " << endl;
        os << "* A king-sized cozy bed with cotton linens" << endl;
        os << "* Enjoy the convenience of essential in-room amenities, including air-conditioning and a TV for your entertainment." << endl;
        os << "* Enjoy complimentary Wi-Fi access and a 24/7 telephone service." << endl;
        os << "* Daily housekeeping service" << endl;
        os << "*Start your day right with a complimentary breakfast voucher for 1 person" << endl;
        os << " It can accomodate 1-2 persons." << endl;
        os << "For more information and reservations, please contact our concierge at [421-09824532] or visit the front desk.\n\n\n"
            << endl;
        return os;
    }
    void setFullName(string fn) override
    {
        fullname = fn;
    }
    void setage(int a)
    {
        age = a;
    }
    void setcnic(string id)
    {
        cnic = id;
    }
    void setdays(int d)
    {
        days = d;
        totalprice = price * days;
        if (array_for_availability[rows_asafloor][cols_asaroomnumber] != 'S')
        {
            array_for_availability[rows_asafloor][cols_asaroomnumber] = 'S';
        }
        else
        {
            cout << "This room has already been booked/n";
        }
    }
    float getTotal() override
    {
        cout << "Your Total Amount was Rs." << totalprice << endl
            << "After Discount ";
        totalprice = totalprice - totalprice * getDiscount();
        return totalprice;
    }
    int getfloor()
    {
        return floor;
    }
    int getprice() {
        cout << "Standard: ";
        return price;
    }
    void Checkout() override
    {
        cout << "Enter the Room No.  : ";
        cin >> room_number;
        cout << "Enter the Floor your room was at : ";
        cin >> floor;
        if (array_for_availability[9 - floor][room_number - 1] == 'B' || array_for_availability[9 - floor][room_number - 1] == 'S')
        {
            cout << "You have checked out successfully\n";
            array_for_availability[rows_asafloor][cols_asaroomnumber] = 'A';
            num_checkouts++;
            count++;
        }
        else
            cout << "This room wasn't checked in !!!\n";
    }

    void getCount()
    {
        cout << "Number of standard rooms  checked-out today = " << count << endl;
    }

    ~Standard()
    {
        cout << "this is the destructor for the standard class " << endl;
    }
};

class Deluxe : public RoomPrice
{
private:
    int price = 20000;
    int floor;
    int room_num;
    int count;

public:
    Deluxe()
    {
        floor = 0;
        room_num = 0;
        count = 0;
    }

    friend ostream& operator<<(ostream& os, const Deluxe& room)
    {
        os << "                     DELUXE";
        os << "\n\n\n Price = 20000 PKR Per Night" << endl;
        os << "Unwind in our luxurious Deluxe Room, offering a haven of comfort and essential amenities " << endl;
        os << "* Two king-sized cozy beds" << endl;
        os << "* Enjoy the convenience of essential in-room amenities, including air-conditioning and a Smart TV for your entertainment." << endl;
        os << "* Complimentary Wi-Fi access and a 24/7 telephone service." << endl;
        os << "* Access to luxury lounge area, perfect for socializing or relaxation" << endl;
        os << "* Start your day with a delicious complimentary breakfast for 2 persons" << endl;
        os << "* Daily housekeeping service for a clean and comfortable environment." << endl;
        os << " Relax in style - the Deluxe Room comfortably accommodates 3-4 guests and may offer a breathtaking city view (depending on availability)" << endl;
        os << "For more information and reservations, please contact our concierge at [421-09824532] or visit the front desk.\n\n\n"
            << endl;
        return os;
    }
    void setFullName(string fn) override
    {
        fullname = fn;
    }
    void setage(int a)
    {
        age = a;
    }
    void setcnic(string id)
    {
        cnic = id;
    }
    void setdays(int d)
    {
        days = d;
        totalprice = price * days;
        if (array_for_availability[rows_asafloor][cols_asaroomnumber] != 'S')
        {
            array_for_availability[rows_asafloor][cols_asaroomnumber] = 'S';
        }
        else
        {
            cout << "This room has already been booked/n";
        }
    }
    float getTotal() override
    {
        cout << "Your Total Amount was Rs." << totalprice << endl
            << "After Discount ";
        totalprice = totalprice - totalprice * getDiscount();
        return totalprice;
    }

    void Checkout()
    {
        cout << "Enter the Room No.  : ";
        cin >> room_number;
        cout << "Enter the Floor your room was at : ";
        cin >> floor;
        if (array_for_availability[9 - floor][room_number - 1] == 'B' || array_for_availability[9 - floor][room_number - 1] == 'S')
        {
            cout << "You have checked out successfully\n";
            array_for_availability[rows_asafloor][cols_asaroomnumber] = 'A';
            num_checkouts++;
            count++;
        }
        else
            cout << "This room wasn't checked in !!!\n";
    }
    int getprice() {
        cout << "DELUXE : ";
        return price;
}
    void getCount()
    {
        cout << "Number of Deluxe rooms  checked-out today = " << count;
    }
    ~Deluxe()
    {
        cout << "this is the destructor for the deluxe class " << endl;
    }
};

class Suite : public RoomPrice
{
private:
    int price = 30000;
    int floor;
    int count;
    int room_num;

public:
    Suite()
    {
        floor = 0;
        room_num = 0;
        count = 0;
    }
    friend ostream& operator<<(ostream& os, const Suite& room)
    {
        os << "                            SUITE";
        os << "\n\n\n Price = 30000 PKR Per Night" << endl;
        os << "Embrace unparalleled comfort and space in our luxurious Suite." << endl;
        os << " Our spacious suite welcomes you with tastefully appointed furnishings, chic decor, and breathtaking views of the surrounding cityscape." << endl;
        os << "* Access to luxury lounge area, perfect for socializing or relaxation." << endl;
        os << "* Stay connected with complimentary high-speed Wi-Fi access, 24/7 telephone service and flexible accommodation options, including additional rollaway beds." << endl;
        os << "* Additional amenities may include a fully stocked mini-bar, a spacious work desk, and a luxurious marble bathroom with a rainfall shower." << endl;
        os << " Relax in style - the Suite comfortably accommodates 3-4 guests" << endl;
        os << " Whether you're traveling for business or leisure, our hotel suite promises an unforgettable stay filled with comfort, and unparalleled hospitality." << endl;
        os << "For more information and reservations, please contact our concierge at [421-09824532] or visit the front desk.\n\n\n"
            << endl;
        os << endl;
        return os;
    }
    void setFullName(string fn)
    {
        fullname = fn;
    }
    void setage(int a)
    {
        age = a;
    }
    void setcnic(string id)
    {
        cnic = id;
    }
    void setdays(int d)
    {
        days = d;
        totalprice = price * days;
        if (array_for_availability[rows_asafloor][cols_asaroomnumber] != 'S')
        {
            array_for_availability[rows_asafloor][cols_asaroomnumber] = 'S';
        }
        else
        {
            cout << "This room has already been booked/n";
        }
    }
    float getTotal() override
    {
        cout << "Your Total Amount was Rs." << totalprice << endl
            << "After Discount ";
        totalprice = totalprice - totalprice * getDiscount();
        return totalprice;
    }
    int getprice() {
        cout << "SUITE : ";
        return price;
    }
    void Checkout()
    {
        cout << "Enter the Room No.  : ";
        cin >> room_number;
        cout << "Enter the Floor your room was at : ";
        cin >> floor;
        if (array_for_availability[9 - floor][room_number - 1] == 'B' || array_for_availability[9 - floor][room_number - 1] == 'S')
        {
            cout << "You have checked out successfully\n";
            array_for_availability[rows_asafloor][cols_asaroomnumber] = 'A';
            num_checkouts++;
            count++;
        }
        else
            cout << "This room wasn't checked in !!!\n";
    }
    void getCount()
    {
        cout << "Number of Suite checked-out today = " << count;
    }
    ~Suite()
    {
        cout << "this is the destructor for the suite class " << endl;
    }
};
class ExecutiveSuite : public RoomPrice
{
private:
    int price = 40000;
    int floor;
    int room_num;
    int count;

public:
    ExecutiveSuite()
    {
        floor = 0;
        room_num = 0;
        count = 0;
    }
    friend ostream& operator<<(ostream& os, const ExecutiveSuite& room)
    {
        os << "                       EXECUTIVE SUITE";
        os << "\n\n\n Price = 40000 PKR Per Night" << endl;
        os << "Experience unparalleled luxury and refinement in our Executive Suite, an exclusive haven meticulously crafted for discerning travelers who crave elevated comfort and refinement." << endl;
        os << " Executive Suite offers an expansive living space, elegantly furnished and breathtaking views of the surrounding cityscape.. " << endl;
        os << " It also offers the option of connecting rooms, providing ample space and privacy." << endl;
        os << "Additionally, it offers a private balcony and on-site amenities such as a swimming pool, theater room. " << endl;
        os << " Enjoy complimentary breakfast and evening cocktails." << endl;
        os << " Additional amenities may include a fully stocked mini-bar, a spacious work desk, and a luxurious marble bathroom with a rainfall shower." << endl;
        os << "Experience the vibrant nightlife of our hotel with a complimentary ticket to our exclusive night pub." << endl;
        os << " Whether you're traveling for business or leisure, our hotel executive suite promises an unforgettable stay filled with luxury, comfort, and unparalleled hospitality." << endl;
        os << "For more information and reservations, please contact our concierge at [421-09824532] or visit the front desk.\n\n\n"
            << endl;

        os << endl;
        return os;
    }
    void setFullName(string fn)
    {
        fullname = fn;
    }
    void setage(int a)
    {
        age = a;
    }
    void setcnic(string id)
    {
        cnic = id;
    }
    void setdays(int d)
    {
        days = d;
        totalprice = price * days;
        if (array_for_availability[rows_asafloor][cols_asaroomnumber] != 'S')
        {
            array_for_availability[rows_asafloor][cols_asaroomnumber] = 'S';
        }
        else
        {
            cout << "This room has already been booked/n";
        }
    }
    float getTotal() override
    {
        cout << "Your Total Amount was Rs." << totalprice << endl
            << "After Discount ";
        totalprice = totalprice - totalprice * getDiscount();
        return totalprice;
    }

    void Checkout()
    {
        cout << "Enter the Room No.  : ";
        cin >> room_number;
        cout << "Enter the Floor your room was at : ";
        cin >> floor;
        if (array_for_availability[9 - floor][room_number - 1] == 'B' || array_for_availability[9 - floor][room_number - 1] == 'S')
        {
            cout << "You have checked out successfully\n";
            array_for_availability[rows_asafloor][cols_asaroomnumber] = 'A';
            num_checkouts++;
            count++;
        }
        else
            cout << "This room wasn't checked in! \n";
    }
    void getCount()
    {
        cout << "Number of Deluxe rooms  checked-out today = " << count;
    }
    int getprice() {
        cout << "EXECUTIVE SUITE: ";
        return price;
    }
    ~ExecutiveSuite()
    {
        cout << "this is the detructor of the executive class " << endl;
    }
};

class LuxuryApartment : public RoomPrice
{
private:
    int price = 50000;
    int floor;
    int room_num;
    int count;

public:
    LuxuryApartment()
    {
        floor = 0;
        room_num = 0;
        count = 0;
    }
    friend ostream& operator<<(ostream& os, const LuxuryApartment& room)
    {
        os << "                 LUXURY APARTMENT";
        os << "\n\n\n Price = 50000 PKR Per Night" << endl;
        os << "Two king-sized bedroom." << endl;
        os << "Access to exclusive amenities such as a gym, swimming pool, spa, concierge services, and private parking." << endl;
        os << "Stunning views of the city skyline from private balcony." << endl;
        os << "Whether you're traveling for business or leisure, our hotel executive suite promises an unforgettable stay filled with luxury, comfort, and unparalleled hospitality." << endl;
        os << "For more information and reservations, please contact our concierge at [421-09824532] or visit the front desk.\n\n\n"
            << endl;

        return os;
    }
    void setFullName(string fn) override
    {
        fullname = fn;
    }
    void setage(int a)
    {
        age = a;
    }
    void setcnic(string id)
    {
        cnic = id;
    }
    void setdays(int d)
    {
        days = d;
        totalprice = price * days;
        if (array_for_availability[rows_asafloor][cols_asaroomnumber] != 'S')
        {
            array_for_availability[rows_asafloor][cols_asaroomnumber] = 'S';
        }
        else
        {
            cout << "This room has already been booked/n";
        }
    }
    float getTotal() override
    {
        cout << "Your Total Amount was Rs." << totalprice << endl
            << "After Discount ";
        totalprice = totalprice - totalprice * getDiscount();
        return totalprice;
    }

    void Checkout()
    {
        cout << "Enter the Room No.  : ";
        cin >> room_number;
        cout << "Enter the Floor your room was at : ";
        cin >> floor;
        if (array_for_availability[9 - floor][room_number - 1] == 'B' || array_for_availability[9 - floor][room_number - 1] == 'S')
        {
            cout << "You have checked out successfully\n";
            array_for_availability[rows_asafloor][cols_asaroomnumber] = 'A';
            num_checkouts++;
            count++;
        }
        else
            cout << "This room wasn't checked in !!!\n";
    }
    int getprice() {
        cout << "LUXURY APARTMENT: ";
        return price;
    }
    void getCount()
    {
        cout << "Number of Apartments checked-out today = " << count << endl;
    }
    ~LuxuryApartment()
    {
        cout << "this is the destructor for the luxapartment class " << endl;
    }
};
void displayPrice(string locality, string roomtype, int days)
{
    Discount_Criteria obj;
    obj.displayamount_data(locality, roomtype, days);
}


void saveData(string& fullname, string roomtype, string& cnic, int& numberofrooms, int& age) {
    ofstream out;
    out.open("output.txt", ios::app); // Open in append mode
    if (!out) {
        cout << "Error opening file" << endl;
        return;
    }

    out << "Details of the customer: \n";
    out << "Name = " << fullname << endl;
    out << "CNIC = " << cnic << endl;
    out << "Age = " << age << endl;
    out << "Number of rooms customer booked = " << numberofrooms << endl;
    out << "Room 1 Type = " << roomtype << endl;
    out << "--------------------------------------" << endl; // Added separator for clarity

    out.close(); // Always close the file after finishing
}



void saveData1(string& fullname, string roomtype, string roomtype1, string& cnic, int& numberofrooms, int& age) {
    ofstream out;
    out.open("output.txt", ios::app); // Open in append mode
    if (!out) {
        cout << "Error opening file" << endl;
        return;
    }

    out << "Details of the customer: \n";
    out << "Name = " << fullname << endl;
    out << "CNIC = " << cnic << endl;
    out << "Age = " << age << endl;
    out << "Number of rooms customer booked = " << numberofrooms << endl;
    out << "Room 1 Type = " << roomtype << endl;
    out << "Room 2 Type = " << roomtype1 << endl;
    out << "--------------------------------------" << endl; // Added separator for clarity

    out.close(); // Always close the file after finishing
}

void saveData2(string& fullname, string roomtype, string roomtype1, string roomtype2, string& cnic, int& numberofrooms, int& age) {
    ofstream out;
    out.open("output.txt", ios::app); // Open in append mode
    if (!out) {
        cout << "Error opening file" << endl;
        return;
    }

    out << "Details of the customer: \n";
    out << "Name = " << fullname << endl;
    out << "CNIC = " << cnic << endl;
    out << "Age = " << age << endl;
    out << "Number of rooms customer booked = " << numberofrooms << endl;
    out << "Room 1 Type = " << roomtype << endl;
    out << "Room 2 Type = " << roomtype1 << endl;
    out << "Room 3 Type = " << roomtype2 << endl;
    out << "--------------------------------------" << endl; // Added separator for clarity


    out.close();
}

// void resumeGame(int array2[100][100], string& fullname, string roomtype , string& cnic, int& numberofrooms, int& finalprice, int& age)
//{
//     ifstream in;                  // ifstream in
//     in.open("output.txt");        // in.open("input.txt");
//     if (!in)                       // if (!in) { cout << error ; }
//     {
//         cout << "Error" << endl;
//     }
//
//     in.ignore();
//     getline(in, fullname);                                // taking important details from a output file
//     getline(in, cnic);
//     getline(in, roomtype);
//     in >> age;
//     in >> numberofrooms;
//     in >> finalprice;
//
//
//     for (int i = 0; i < 10; i++)
//     {
//         for (int j = 0; j < 20; j++)
//         {
//             in >> array2[i][j];
//         }
//     }
//     in.close();
// }

int main()
{
    backgroundmusic();
    string room_type;
    int opt;
    string localitiy;
    string roomtype, roomtype1, roomtype2;
    string location;
    RoomPrice* ptr = nullptr;
    RoomPrice* ptr1 = nullptr;
    RoomPrice* ptr2 = nullptr;
    Standard stand;
    Deluxe doub;
    ExecutiveSuite esuite;
    Suite su;
    LuxuryApartment lux;
    HotelRoom fahad;
    int Number_of_roomsbooked = 0;

    // loading_bar();
   /* cout << "------------------------------------------------\n";
    cout << "------------Welcome To La Serene Resort!!--------\n";
    cout << "------------------------------------------------\n\n\n";*/
    //UPCASTING
    RoomPrice* room[5];
    room[0] = &stand;
    room[1] = &doub;
    room[2] = &su;
    room[3] = &esuite;
    room[4] = &lux;
    for (int i = 0; i < 5; i++){
       cout << room[i]->getprice() << endl;
    
    }
    ////DOWNCASTING
    //for (int i = 0; i < 5; ++i) {
    //
    //    Standard* standardPtr = dynamic_cast<Standard*>(room[i]);
    //    if (standardPtr) {
    //        cout << "Standard Room downcasting succesful:" << endl;
    //        cout << standardPtr->getprice() << endl;
    //    }
    //    else {
    //        Deluxe* deluxePtr = dynamic_cast<Deluxe*>(room[i]);
    //        if (deluxePtr) {
    //            cout << "Deluxe Room downcasting succesful:" << endl;
    //            cout << deluxePtr->getprice() << endl;
    //        }
    //        else {
    //            Suite* suitePtr = dynamic_cast<Suite*>(room[i]);
    //            if (suitePtr) {
    //                cout << "Suite Room downcasting succesful:" << endl;
    //                cout << suitePtr->getprice() << endl;
    //            }
    //            else {
    //                ExecutiveSuite* execSuitePtr = dynamic_cast<ExecutiveSuite*>(room[i]);
    //                if (execSuitePtr) {
    //                    cout << "Executive Suite downcasting succesful:" << endl;
    //                    cout << execSuitePtr->getprice() << endl;
    //                }
    //                else {
    //                    LuxuryApartment* luxApartmentPtr = dynamic_cast<LuxuryApartment*>(room[i]);
    //                    if (luxApartmentPtr) {
    //                        cout << "Luxury Apartment downcasting succesful:" << endl;
    //                        cout << luxApartmentPtr->getprice() << endl;
    //                    }
    //                    else {
    //                        cout << "Invalid Room Type" << endl;
    //                    }
    //                }
    //            }
    //        }
    //    }
    //}
    {
        int option;
        do
        {
            m();


            cout << "\n\nPress 1 to Book a Room\n";
            cout << "Press 2 to View Details of the Room\n";
            cout << "Press 3 to View Available Rooms\n";
            cout << "Press 4 to Checkout Room\n";
            cout << "Press 5 Exit\n";
            cout << "Please enter your choice: ";
            cout << "\n\n\n";

            do
            {
                if (cin >> option && option > 0 && option < 6)
                {
                    break; // Exit the loop if the input is valid
                }
                else
                {
                    cin.clear(); // Clear the error flag
                    while (cin.get() != '\n')
                        ; // Discard invalid input
                    cout << "Invalid Input. Enter Again = ";
                    option = 0; // Default value for invalid input
                }
            } while (true);



            if (option == 1)
            {
                int age, d, d1, d2;
                string full_name, cnic;
                {
                    int option1;
                    do
                    {


                        int temp;
                        cout << "\n\n\nSelect Where do you want to stay at one of our Prized Locations:" << endl;
                        cout << "\n1.Skardu \n\n2.Naran \n\n3.Hunza" << endl;
                        cout << "\nChoice = ";
                        do {
                            if (cin >> temp && temp > 0 && temp < 4) {
                                break; // Exit the loop if the input is valid
                            }
                            else {
                                cin.clear(); // Clear the error flag
                                while (cin.get() != '\n'); // Discard invalid input
                                cout << "Invalid Input. Enter Again = ";
                                temp = 0; // Default value for invalid input
                            }
                        } while (true);

                        switch (temp)
                        {
                        case 1:
                        {
                            location = "Skardu";
                            localitiy = "Skardu";
                            break;
                        }
                        case 2:
                        {
                            location = "Naran";
                            localitiy = "Naran";
                            break;
                        }
                        case 3:
                        {
                            location = "Hunza";
                            localitiy = "hunza";
                            break;
                        }
                        default:
                        {
                            cout << "Invalid Location";
                            break;
                        }
                        }




                        cout << "\n\n\n";
                        cout << "We have different types of rooms available:\n\n";
                        cout << "Press 1 to Book Standard room\n";
                        cout << "Press 2 to Book Deluxe room\n";
                        cout << "Press 3 to Book Suite room\n";
                        cout << "Press 4 to Book Executive Suite room\n";
                        cout << "Press 5 to Book Apartment \n";
                        cout << "Press 6 to EXIT\n";
                        cout << "Enter your choice: ";
                        do
                        {
                            if (cin >> option1)
                            {
                                break; // Exit the loop if the input is valid
                            }
                            else
                            {
                                cin.clear(); // Clear the error flag
                                while (cin.get() != '\n')
                                    ; // Discard invalid input
                                cout << "Invalid Input. Enter Again = ";
                                option1 = 0; // Default value for invalid input
                            }
                        } while (true);

                        if (option1 >= 1 && option1 <= 5)
                        {
                            switch (option1)
                            {
                            case 1:
                                ptr = &stand;
                                roomtype = "Standard Room";
                                ptr->setLocation(location);
                                fahad.available_rooms();
                                fahad.book_a_room();
                                break;
                            case 2:
                                ptr = &doub;
                                roomtype = "Deluxe Room";
                                ptr->setLocation(location);
                                fahad.available_rooms();
                                fahad.book_a_room();
                                break;
                            case 3:
                                ptr = &su;
                                roomtype = "Suite";
                                ptr->setLocation(location);
                                fahad.available_rooms();
                                fahad.book_a_room();
                                break;
                            case 4:
                                ptr = &esuite;
                                roomtype = "Executive Suite";
                                ptr->setLocation(location);
                                fahad.available_rooms();
                                fahad.book_a_room();
                                break;
                            case 5:
                                ptr = &lux;
                                roomtype = "Luxury Apartment";
                                ptr->setLocation(location);
                                fahad.available_rooms();
                                fahad.book_a_room();
                                break;
                            }
                            break;
                        }
                        else if (option1 == 6)
                        {
                            break;
                        }
                        else
                        {
                            cout << "Invalid option! Please enter a number between 1 and 6." << endl;
                            cin >> option1;
                        }
                    } while (true);
                    cout << "Enter Your Days You Want To Stay: ";
                    do
                    {
                        if (cin >> d && d > 0)
                        {
                            break; // Exit the loop if the input is valid
                        }
                        else
                        {
                            cin.clear(); // Clear the error flag
                            while (cin.get() != '\n')
                                ; // Discard invalid input
                            cout << "Invalid Input. Enter Again = ";
                            d = 0; // Default value for invalid input
                        }
                    } while (true);
                    ptr->setdays(d);
                    cout << "Enter Your Full Name: ";
                    cin.ignore();
                    getline(cin, full_name);
                    ptr->setFullName(full_name);
                    cout << "Enter Your Age: ";
                    do
                    {
                        if (cin >> age && age > 0)
                        {
                            break; // Exit the loop if the input is valid
                        }
                        else
                        {
                            cin.clear(); // Clear the error flag
                            while (cin.get() != '\n')
                                ; // Discard invalid input
                            cout << "Invalid Input. Enter Again = ";
                            age = 0; // Default value for invalid input
                        }
                    } while (true);
                    ptr->setage(age);
                    cout << "Enter Your CNIC No.: ";
                    do
                    {
                        if (cin >> cnic)
                        {
                            break; // Exit the loop if the input is valid
                        }
                        else
                        {
                            cin.clear(); // Clear the error flag
                            while (cin.get() != '\n')
                                ; // Discard invalid input
                            cout << "Invalid Input. Enter Again = ";
                            cnic = 0.0; // Default value for invalid input
                        }
                    } while (true);
                    ptr->setcnic(cnic);

                    cout << "\n\n\nRoom Booked Successfully!\n\n";
                    fahad.check_room();
                    cout << "\n\n\n";
                    Number_of_roomsbooked++;
                    int ch;
                    do
                    {
                        cout << "\n\nDo you want to book another room? (If Yes, Enter 1, else Enter 0 to exit) = ";
                        do
                        {
                            if (cin >> ch && ch >= 0 && ch < 2)
                            {
                                break; // Exit the loop if the input is valid
                            }
                            else
                            {
                                cin.clear(); // Clear the error flag
                                while (cin.get() != '\n')
                                    ; // Discard invalid input
                                cout << "Invalid Input. Enter Again = ";
                                ch = 0; // Default value for invalid input
                            }
                        } while (true);

                        if (ch == 1)
                        {
                            do
                            {
                                cout << "\n\n\n";
                                cout << "Press 1 to Book Standard room\n";
                                cout << "Press 2 to Book Deluxe room\n";
                                cout << "Press 3 to Book Suite room\n";
                                cout << "Press 4 to Book Executive Suite room\n";
                                cout << "Press 5 to Book Apartment \n";
                                cout << "Press 6 to EXIT\n";
                                cout << "Enter your choice: ";
                                do
                                {
                                    if (cin >> option1)
                                    {
                                        break; // Exit the loop if the input is valid
                                    }
                                    else
                                    {
                                        cin.clear(); // Clear the error flag
                                        while (cin.get() != '\n')
                                            ; // Discard invalid input
                                        cout << "Invalid Input. Enter Again = ";
                                        option1 = 0; // Default value for invalid input
                                    }
                                } while (true);

                                if (option1 >= 1 && option1 <= 5)
                                {
                                    switch (option1)
                                    {
                                    case 1:
                                    {
                                        if (Number_of_roomsbooked == 1)
                                        {
                                            ptr1 = &stand;
                                            roomtype1 = "Standard Room";
                                            ptr1->setLocation(location);
                                            fahad.available_rooms();
                                            fahad.book_a_room(full_name, age, cnic);
                                        }
                                        if (Number_of_roomsbooked == 2)
                                        {
                                            ptr2 = &stand;
                                            roomtype2 = "Standard Room";
                                            ptr2->setLocation(location);
                                            fahad.available_rooms();
                                            fahad.book_a_room(full_name, age, cnic);
                                        }
                                    }
                                    break;
                                    case 2:
                                    {
                                        if (Number_of_roomsbooked == 1)
                                        {
                                            ptr1 = &doub;
                                            roomtype1 = "Deluxe Room";
                                            ptr1->setLocation(location);
                                            fahad.available_rooms();
                                            fahad.book_a_room(full_name, age, cnic);
                                        }
                                        if (Number_of_roomsbooked == 2)
                                        {
                                            ptr2 = &doub;
                                            roomtype2 = "Deluxe Room";
                                            ptr2->setLocation(location);
                                            fahad.available_rooms();
                                            fahad.book_a_room(full_name, age, cnic);
                                        }
                                    }
                                    break;
                                    case 3:
                                    {
                                        if (Number_of_roomsbooked == 1)
                                        {
                                            ptr1 = &su;
                                            roomtype1 = "Suite";
                                            ptr1->setLocation(location);
                                            fahad.available_rooms();
                                            fahad.book_a_room(full_name, age, cnic); // function overloading
                                        }
                                        if (Number_of_roomsbooked == 2)
                                        {
                                            ptr2 = &su;
                                            roomtype2 = "Suite";
                                            ptr2->setLocation(location);
                                            fahad.available_rooms();
                                            fahad.book_a_room(full_name, age, cnic); // function overloading
                                        }
                                    }
                                    break;
                                    case 4:
                                    {
                                        if (Number_of_roomsbooked == 1)
                                        {
                                            ptr1 = &esuite;
                                            roomtype1 = "Executive Suite";
                                            ptr1->setLocation(location);
                                            fahad.available_rooms();
                                            fahad.book_a_room(full_name, age, cnic); // function overloading
                                        }
                                        if (Number_of_roomsbooked == 2)
                                        {
                                            ptr2 = &esuite;
                                            roomtype2 = "Executive Suite";
                                            ptr2->setLocation(location);
                                            fahad.available_rooms();
                                            fahad.book_a_room(full_name, age, cnic);
                                        }
                                    }
                                    break;
                                    case 5:
                                    {
                                        if (Number_of_roomsbooked == 1)
                                        {
                                            ptr1 = &lux;
                                            roomtype1 = "Luxury Apartment";
                                            ptr1->setLocation(location);
                                            fahad.available_rooms();
                                            fahad.book_a_room(full_name, age, cnic);
                                        }
                                        if (Number_of_roomsbooked == 2)
                                        {
                                            ptr2 = &lux;
                                            roomtype2 = "Luxury Apartment";
                                            ptr2->setLocation(location);
                                            fahad.available_rooms();
                                            fahad.book_a_room(full_name, age, cnic);
                                        }
                                    }
                                    break;
                                    }
                                    break;
                                }
                                else if (option1 == 6)
                                {
                                    break;
                                }
                                else
                                {
                                    cout << "Invalid option! Please enter a number between 1 and 6." << endl;
                                    cin >> option1;
                                }
                            } while (true);
                            if (Number_of_roomsbooked == 1)
                            {
                                cout << "Enter Your Days You Want To Stay: ";
                                do
                                {
                                    if (cin >> d1 && d1 > 0)
                                    {
                                        break; // Exit the loop if the input is valid
                                    }
                                    else
                                    {
                                        cin.clear(); // Clear the error flag
                                        while (cin.get() != '\n')
                                            ; // Discard invalid input
                                        cout << "Invalid Input. Enter Again = ";
                                        d1 = 0; // Default value for invalid input
                                    }
                                } while (true);
                                ptr1->setdays(d1);
                                cout << "\n\n\nRoom Booked Successfully!\n\n\n";
                                fahad.check_room();

                                Number_of_roomsbooked++;
                            }
                            else
                            {
                                cout << "Enter Your Days You Want To Stay: ";
                                do
                                {
                                    if (cin >> d2 && d2 > 0)
                                    {
                                        break; // Exit the loop if the input is valid
                                    }
                                    else
                                    {
                                        cin.clear(); // Clear the error flag
                                        while (cin.get() != '\n')
                                            ; // Discard invalid input
                                        cout << "Invalid Input. Enter Again = ";
                                        d2 = 0; // Default value for invalid input
                                    }
                                } while (true);
                                ptr2->setdays(d2);
                                cout << "\n\n\nRoom Booked Successfully!\n\n\n";
                                fahad.check_room();
                                Number_of_roomsbooked++;
                            }
                        }
                    } while (ch != 0);

                    if (Number_of_roomsbooked == 1)
                    {
                        saveData(full_name, roomtype, cnic, Number_of_roomsbooked, age);
                    }
                    if (Number_of_roomsbooked == 2)
                    {
                        saveData1(full_name, roomtype, roomtype1, cnic, Number_of_roomsbooked, age);
                    }
                    if (Number_of_roomsbooked == 3)
                    {
                        saveData2(full_name, roomtype, roomtype1, roomtype2, cnic, Number_of_roomsbooked, age);
                    }

                    int opt1;

                    cout << "Select Payment Method:\n\n\n";
                    cout << "Press 1 to Pay online.\n";
                    cout << "Press 2 to Pay Cash.\n";
                    cout << "Press 3 to Exit\n\n";
                    cout << "Enter your choice: ";
                    do
                    {
                        if (cin >> opt1 && opt1 > 0 && opt1 < 4)
                        {
                            break; // Exit the loop if the input is valid
                        }
                        else
                        {
                            cin.clear(); // Clear the error flag
                            while (cin.get() != '\n')
                                ; // Discard invalid input
                            cout << "Invalid Input. Enter Again = ";
                            opt1 = 0; // Default value for invalid input
                        }
                    } while (true);
                    if (opt1 == 1)
                    {
                        cout << "\n\n\nBill:\n\n";
                        if (Number_of_roomsbooked > 1)
                        {
                            cout << "Total Number of rooms you booked:" << Number_of_roomsbooked << endl;
                            cout << "\nRoom 1:\n";
                        }
                        displayPrice(location, roomtype, d);

                        if (Number_of_roomsbooked == 1 && Number_of_roomsbooked < 2)
                        {
                            cout << "THANK YOU FOR CHOOSING US -------- HAVE A MEMORABLE STAY. \n\n\n";
                        }

                        for (int i = 1; i < Number_of_roomsbooked; i++)
                        {
                            cout << "\nRoom " << i + 1 << ":" << endl;
                            if (i == 1 && i < 2)
                            {
                                displayPrice(location, roomtype1, d1);
                                if (Number_of_roomsbooked == 2 && Number_of_roomsbooked < 3)
                                {
                                    cout << "THANK YOU FOR CHOOSING US -------- HAVE A MEMORABLE STAY. \n\n\n";
                                }
                            }
                            if (i == 2)
                            {
                                displayPrice(location, roomtype2, d2);
                                if (Number_of_roomsbooked == 3 && Number_of_roomsbooked < 4)
                                {
                                    cout << "THANK YOU FOR CHOOSING US -------- HAVE A MEMORABLE STAY. \n\n\n";
                                }
                            }
                        }
                        break;
                    }
                    else if (opt1 == 2)
                    {
                        cout << "\n\n\nBill:\n\n";
                        if (Number_of_roomsbooked > 1)
                        {
                            cout << "Total Number of rooms you booked:" << Number_of_roomsbooked << endl;
                            cout << "\nRoom 1:\n";
                        }
                        displayPrice(location, roomtype, d);

                        if (Number_of_roomsbooked == 1 && Number_of_roomsbooked < 2)
                        {
                            cout << "THANK YOU FOR CHOOSING US -------- HAVE A MEMORABLE STAY. \n\n\n";
                        }

                        for (int i = 1; i < Number_of_roomsbooked; i++)
                        {
                            cout << "\n\Room " << i + 1 << ":" << endl;
                            if (i == 1 && i < 2)
                            {
                                displayPrice(location, roomtype1, d1);
                                if (Number_of_roomsbooked == 2 && Number_of_roomsbooked < 3)
                                {
                                    cout << "THANK YOU FOR CHOOSING US -------- HAVE A MEMORABLE STAY. \n\n\n";
                                }
                            }
                            if (i == 2)
                            {
                                displayPrice(location, roomtype2, d2);
                                if (Number_of_roomsbooked == 3 && Number_of_roomsbooked < 4)
                                {
                                    cout << "THANK YOU FOR CHOOSING US -------- HAVE A MEMORABLE STAY. \n\n\n";
                                }
                            }
                        }
                        break;
                    }
                }
            }
            if (option == 2)
            {
                while (true)
                {
                    cout << "\n\n\n";
                    cout << "Press 1 To See the Details of Standard Room." << endl;
                    cout << "Press 2 To See the Details of Deluxe Room. " << endl;
                    cout << "Press 3 To See the Details of Suite. " << endl;
                    cout << "Press 4 To See the Details of Executive Suite. " << endl;
                    cout << "Press 5 To See the Details of Luxury Apartment. " << endl;
                    cout << "Press 6 To Exit " << endl;
                    cout << "Choice = ";
                    do
                    {
                        if (cin >> opt)
                        {
                            break; // Exit the loop if the input is valid
                        }
                        else
                        {
                            cin.clear(); // Clear the error flag
                            while (cin.get() != '\n')
                                ; // Discard invalid input
                            cout << "Invalid Input. Enter Again = ";
                            opt = 0.0; // Default value for invalid input
                        }
                    } while (true);

                    if (opt == 1)
                    {
                        cout << stand; // operator overloading
                    }
                    else if (opt == 2)
                    {
                        cout << doub;
                    }
                    else if (opt == 3)
                    {
                        cout << su;
                    }
                    else if (opt == 4)
                    {
                        cout << esuite;
                    }
                    else if (opt == 5)
                    {
                        cout << lux;
                    }
                    else if (opt == 6)
                    {
                        break;
                    }
                }
            }
            if (option == 3)
            {
                fahad.available_rooms();
                Sleep(7000);
                system("cls");


            }
            if (option == 4)
            {
                string type;
                while (true)
                {
                    cout << "Please enter category of room you stayed in: ";
                    cin >> type;
                    if (type == "standard" || type == "Standard")
                    {
                        ptr = &stand;
                        break;
                    }
                    else if (type == "deluxe" || type == "Deluxe")
                    {
                        ptr = &doub;
                        break;
                    }
                    else if (type == "suite" || type == "Suite")
                    {
                        ptr = &su;
                        break;
                    }
                    else if (type == "executive" || type == "Executive")
                    {
                        ptr = &esuite;
                        break;
                    }
                    else if (type == "luxury" || type == "Luxury")
                    {
                        ptr = &lux;
                        break;
                    }
                }
                ptr->Checkout();
                break;
            }
        } while (option != 5);
    }
    system("pause");
    return 0;
}