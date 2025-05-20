# import tkinter as tk
# from tkinter import messagebox

# def submit_registration():
#     name = name_entry.get()
#     address = address_entry.get()
#     mobile_number = mobile_entry.get()
#     email = email_entry.get()
#     gender = gender_var.get()
#     selected_state = state_listbox.get(state_listbox.curselection())
#     hostel = hostel_var.get()
    
#     print("Name:", name)
#     print("Address:", address)
#     print("Mobile Number:", mobile_number)
#     print("Email ID:", email)
#     print("Gender:", gender)
#     print("State:", selected_state)
#     print("Hostel Requirement:", "Yes" if hostel else "No")
    
#     info_message = f"Name: {name}\nAddress: {address}\nMobile Number: {mobile_number}\nEmail ID: {email}\nGender: {gender}\nState: {selected_state}\nHostel Requirement: {'Yes' if hostel else 'No'}"
#     messagebox.showinfo("Registration Details", info_message)

# root = tk.Tk()
# root.title("Student Registration System")

# name_label = tk.Label(root, text="Name:")
# name_label.pack()
# name_entry = tk.Entry(root)
# name_entry.pack()

# address_label = tk.Label(root, text="Address:")
# address_label.pack()
# address_entry = tk.Entry(root)
# address_entry.pack()

# mobile_label = tk.Label(root, text="Mobile Number:")
# mobile_label.pack()
# mobile_entry = tk.Entry(root)
# mobile_entry.pack()

# email_label = tk.Label(root, text="Email ID:")
# email_label.pack()
# email_entry = tk.Entry(root)
# email_entry.pack()

# gender_label = tk.Label(root, text="Gender:")
# gender_label.pack()

# gender_var = tk.StringVar()
# male_radio = tk.Radiobutton(root, text="Male", variable=gender_var, value="Male")
# male_radio.pack()
# female_radio = tk.Radiobutton(root, text="Female", variable=gender_var, value="Female")
# female_radio.pack()

# state_label = tk.Label(root, text="State:")
# state_label.pack()

# state_listbox = tk.Listbox(root, selectmode=tk.SINGLE)
# state_listbox.pack()

# states = ["State 1", "State 2", "State 3", "State 4", "State 5"]
# for state in states:
#     state_listbox.insert(tk.END, state)

# hostel_var = tk.BooleanVar()
# hostel_checkbutton = tk.Checkbutton(root, text="Hostel Requirement", variable=hostel_var)
# hostel_checkbutton.pack()

# submit_button = tk.Button(root, text="Submit", command=submit_registration)
# submit_button.pack()

# root.mainloop()


import tkinter as tk
from tkinter import messagebox

def display_details():
    name = entry_name.get()
    address = entry_address.get()
    mobile = entry_mobile.get()
    email = entry_email.get()

    details = f"Name: {name}\nAddress: {address}\nMobile: {mobile}\nEmail: {email}"

    print(details)
    messagebox.showinfo("Student Details", details)

# Create the main window
root = tk.Tk()
root.title("Student Registration System")

# Labels and Textboxes
labels = ["Name", "Address", "Mobile", "Email"]
for i, label_text in enumerate(labels):
    label = tk.Label(root, text=label_text)
    label.grid(row=i, column=0, sticky=tk.E, padx=10, pady=5)

entry_name = tk.Entry(root)
entry_name.grid(row=0, column=1, padx=10, pady=5)
entry_address = tk.Entry(root)
entry_address.grid(row=1, column=1, padx=10, pady=5)
entry_mobile = tk.Entry(root)
entry_mobile.grid(row=2, column=1, padx=10, pady=5)
entry_email = tk.Entry(root)
entry_email.grid(row=3, column=1, padx=10, pady=5)

# Submit Button
submit_button = tk.Button(root, text="Submit", command=display_details)
submit_button.grid(row=4, column=1, pady=10)

# Run the GUI
root.mainloop()










