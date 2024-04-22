# Abstact Base class

# class --> chach

# plan ---> bari
# class --> object

# Bus Company -->Bus toirir framework toiri korteche --> Bus toiri kori --> ac , non ac , VIP bus, double decar

# Bus Company --> Abstract Base Class (ABC)
# Bus toirir framewokr -> Normal class
# different typer bus -->object

from abc import ABC, abstractmethod


class AbstractBus(ABC):
    def __init__(self, coach, driver, arrival, departure, from_des, to) -> None:
        self.coach = coach
        self.driver = driver
        self.arrival = arrival
        self.departure = departure
        self.from_des = from_des
        self.to = to
        self.seats = ["Empty" for _ in range(20)]
    # @abstractmethod
    # def install_bus(self, coach, driver, arrival, departure, from_des, to):
    #     pass

    # @abstractmethod
    # def display_available_buses(self):
    #     pass

    # @abstractmethod
    # def display_seat_status(self):
    #     pass


class Bus(AbstractBus):
    # def install_bus(coach, driver, arrival, departure, from_des, to):
    #     print(f"Bus {coach} installed successfully!
    pass


class BusCompany:
    def __init__(self) -> None:
        self.buses = {}  # sokol bus er details thakbe. database hisebe kaj korbe
        # {12 : bus_object}

    def install_bus(self, bus):
        print(f"Bus {bus.coach} added successfully")
        self.buses[bus.coach] = bus

    def display_available_buses(self):

        if not self.buses:
            print("No buses are avilable!!")
        else:
            print(f"Coach\tDriver\tArrival\tDeparture\tFrom\tTo")
            for coach, bus in self.buses.items():
                print(
                    f"{coach}\t{bus.driver}\t{bus.arrival}\t{bus.departure}\t{bus.from_des}\t{bus.to}")

    def book_ticket(self, coach, seat):
        if coach in self.buses:
            if 1 <= seat <= 20:
                if self.buses[coach].seats[seat-1] == 'Empty':
                    print("Seat Booked Successfully!!")
                    self.buses[coach].seats[seat-1] = 'Booked'
                else:
                    print("Seat already booked!!")
            else:
                print("Invalid seat number")
        else:
            print("Invalid bus coach number ")

    def display_seat_status(self, coach):
        if coach in self.buses:
            print(self.buses[coach].seats)



company = BusCompany()

while True:
    print("Welcome to Bus ticket Booking system!!")
    print("1. Install Bus")
    print("2. View Available Buses")
    print("3. Book Ticket")
    print("4. Check Seat Status")
    print("5. Exit")
    choice = int(input("Enter your choice : "))

    if choice == 1:
        coach = input("Enter Bus Number : ")
        driver = input("Enter Bus Driver Name : ")
        arrival = input("Enter Bus Arrival Time : ")
        departure = input("Enter Bus Departure Time : ")
        from_des = input("Enter Bus From Destination : ")
        to = input("Enter Bus To Destination : ")
        bus = Bus(coach, driver, arrival, departure, from_des, to)
        company.install_bus(bus)
    elif choice == 2:
        company.display_available_buses()
    elif choice == 3:
        coach = input("Enter Bus Number : ")
        seat = int(input("Enter Seat Number : "))
        
        company.book_ticket(coach, seat)
    elif choice == 4:
        coach = input("Enter Bus Number : ")
        company.display_seat_status(coach)
    
    elif choice == 5:
        print("Thanks for using our service!!")
        break
    else:
        print("invalid choice")
