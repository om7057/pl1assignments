attendee_list = []

def register_attendee(name):
    attendee_list.append(name)
    print(f"{name} has been registered for the event.")

def check_in_attendee(name):
    if name in attendee_list:
        print(f"{name} has been checked in.")
    else:
        print(f"{name} is not registered for the event.")

def generate_attendee_list():
    print("Attendee List:")
    for i, attendee in enumerate(attendee_list, 1):
        print(f"{i}. {attendee}")

register_attendee("Alice")
register_attendee("Bob")
check_in_attendee("Alice")
check_in_attendee("Charlie")
generate_attendee_list()
