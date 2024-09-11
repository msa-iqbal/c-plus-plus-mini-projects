Product Sell
===

**Project Name:** Product Sell

This project is designed to manage a basic product selling system using C++. It offers three main services: Product Listing, Product Selling, and Profit Calculation. 

- **Product Listing:** Allows the user to add products with details including net price, selling price, and quantity.
- **Product Selling:** Facilitates the sale of products, including generating a bill for the customer.
- **Product Profit:** Calculates and displays the profit from sold products.

### Manual Guidelines

Step 1:  Showing 5 Message:

    Press 1 to Add a Products
    Press 2 to View the Products
    Press 3 to Sell a Products
    Press 4 to View Profit
    Press 5 to Exit
    --------------------------
    
    
    If press 1 then 
                   Input:
                         Product Name 
                         Product Quantity
                         Product Net Price
                         Product Sell Price
                      
    If press 2 then
                   Output:
                          Product Name
                          Product Quantity
                          Product Net Price
                          Product Sell Price 
    If press 3 then 
                   Input : 
                          Product Name
                          Product Quantity
                   Output: 
                          Product Remaining Quantity
                          Total Sell Price
                          
    If press 4 then
                   Output:
                          Profit
    
    If press 5 then
                   Close the program
                            


​                 

### Explaination

	Product list:
	                 Name     -      Quantity          -      Net Price       -    Sell Price
	                 iPhone   -         1              -        20,500        -       24,999
	                 iPhone   -         2              -        20,500x2      -       24,999x2 
	                 -------------------------------------------------------------------------
	                    
	Billing:
		             Product Name         –       Product Quantity      –     Total Amount
	                   iPhone             -             2               -          49,998
	                 -------------------------------------------------------------------------
	                   
	Profit:
	Profit (Sell Price – Net Price) = (49,998 – 41,000) = 8,998 tk.
	                                  Thus, Profit = 8,998 tk
	
	Here, 
	Product Name: iPhone
	Product Net Price: 20,500 tk.
	Product Sell Price: 24,999 tk.
	Product Quantity: 2 pics
	Total Amount (Sell): 49,998 tk.
	Profit: 8,998 tk.             



### **Future Improvements:**

- Integrate a database system for better data management.
- Update the user interface for improved user experience.
- Convert the C++ program to an executable (.exe) file for ease of use.
