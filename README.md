# 🚗 Parking Fee Calculator

A simple C++ console application that calculates the total parking fee based on the entry and exit times. It displays a neatly formatted receipt showing the total time parked and the amount due.

## 📄 Description

This program prompts the user to enter the entry and exit times in hours and minutes. It then calculates the total parking time, breaks it into full hours and remaining minutes, and applies the hourly and per-minute rates to generate the final fee.

## 🧾 Example Output
```
Enter the entry time (HH MM): 
9 30
Enter the exit time (HH MM): 
11 45

--- Parking Receipt ---
Entry Time: 9:30
Exit Time: 11:45
Total Time Parked: 2 hours and 15 minutes
Total Fee: R95.00
------------------------
Thank you for using our parking service!
```

## 🛠️ Technologies Used
* Language: C++
* IDE Used: Visual Studio (But any IDE will work)

## 📦 How to Run
1. Clone The Repo Using CMD:
```
git clone https://github.com/UncleH25/Parking-Fee-Calculator.git
cd parking-fee-calculator
```

3. From a terminal (in the extracted folder), run:
```
g++ -o parking_calculator main.cpp
./parking_calculator
```

4. Or, if you're using an IDE like Code::Blocks or Visual Studio, open the file and press **Run** or **Build and Run**.

## 📌 License
This project is open source and free to use under the **MIT License**.
