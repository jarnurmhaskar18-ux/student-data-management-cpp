# Student Data Management System (C++)

A console-based Student Data Management System developed in **C++** using **Object-Oriented Programming (OOP)** and **File Handling** concepts.

This project allows management of student records for different academic years (F.Y.BSc.IT, S.Y.BSc.IT, and T.Y.BSc.IT) through a menu-driven interface.

---

## Project Overview

The Student Data Management System is designed to maintain student records in text files. It demonstrates the practical use of:

- Object-Oriented Programming
- File Handling
- Menu Driven Applications
- Data Management Techniques
- Console-Based User Interface

Student data is stored permanently using text files, allowing records to remain available even after the program is closed.

---

## Features

### Add Student
- Add new student records.
- Store Roll Number, First Name, Last Name, and Class.
- Data is automatically saved to the corresponding file.

### Show All Students
- Display all student records from:
  - F.Y.BSc.IT
  - S.Y.BSc.IT
  - T.Y.BSc.IT

### Remove Student
- Cancel a student's admission using their roll number.
- Student status changes from:
  - Admitted → Canceled

### Total Students
- Count students in each class.
- Display the total number of BSc.IT students.

### File Handling
Student data is stored in:

- fyit.txt
- syit.txt
- tyit.txt

This ensures data persistence across program executions.

---

## Technologies Used

| Technology | Purpose |
|------------|----------|
| C++ | Core Programming Language |
| OOP | Program Structure |
| File Handling | Data Storage |
| fstream | Reading/Writing Files |
| Console Application | User Interface |

---

## OOP Concepts Implemented

### Class
The entire system is built around a `student` class.

### Objects
A student object is created to access all operations.

### Encapsulation
Student-related data and functions are grouped together within a class.

### Member Functions
Functions such as:

- fyadd()
- syadd()
- tyadd()
- fy_all()
- sy_all()
- ty_all()
- remove_fy()
- remove_sy()
- remove_ty()

are implemented as class member functions.

---

## Project Structure

```text
student-data-management-system-cpp/
│
├── studentManagement.cpp
├── fyit.txt
├── syit.txt
├── tyit.txt
├── screenshots/
│   ├── home.png
│   ├── add-student.png
│   ├── show-students.png
│   └── total-students.png
└── README.md
```

---

## How It Works

### Main Menu

```text
1. Add Student
2. Show All Students
3. Remove Student
4. Total Students
5. Log Out
```

### Student Addition Flow

```text
Select Class
      ↓
Enter Student Details
      ↓
Store Data in File
      ↓
Display Confirmation
```

### Student Removal Flow

```text
Display Students
      ↓
Enter Roll Number
      ↓
Update Status
      ↓
Save Changes
```

---

## Learning Outcomes

Through this project, I gained hands-on experience in:

- Object-Oriented Programming
- File Handling in C++
- Data Persistence
- Menu Driven Applications
- Basic Record Management Systems
- Working with Streams (ifstream, ofstream, fstream)

---

## Current Limitations

- Uses text files instead of a database.
- Limited validation of user input.
- Console-based interface only.
- Fixed file structure.

---

## Future Enhancements

Planned improvements include:

- Search Student by Roll Number
- Update Student Details
- Student Result Management
- GPA Calculation
- Database Integration (MySQL)
- Login Authentication
- Graphical User Interface (GUI)
- Cross-Platform Support

---

## Author

**Jarnur Mhaskar**

B.Sc. Information Technology Graduate

### Skills Demonstrated

- C++
- Object-Oriented Programming
- File Handling
- Problem Solving
- Data Management

GitHub: https://github.com/jarnurmhaskar18-ux

---

## ⭐ If you found this project helpful, consider giving it a star!
