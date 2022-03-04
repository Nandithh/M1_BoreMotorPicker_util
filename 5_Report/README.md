# Bore Motor Picker

## Introduction
  Bore Motor Picker is a system that helps customers to buy Bore motors of various brands as well as generate a bill when they place an order.
# 1.REQUIREMENTS
## 1.1 Research
* When it comes to choosing a proper motor for our borewell it becomes a complex task.
* When choosing a bore motor goes wrong,there comes a lot of problems along with it. There is wastage of power and water.
* Bore Motor Picker is a ultiliy developed to help customers to choose a motor for their Bore-well based on their requirements just by entering certain parameters of the bore.

## 1.2Identifying features
*  To buy a motor by entering specifications.
*  To buy motors according to brands of choice.
*  Based on the size and Horse power required  the motor should be chosen.
*  Price of the motor must be displayed.

## 1.3SWOT Analysis

![](/6_ImagesAndVideos/SWOT.png)

### Strength
•	Selects according to brands.    
•	Decision making is easy.      
•	Appropriate method.   

### Weakness
•	updating the price details is slow.   
* No user interface.


### Oppurtunities
•   It helps in updating from older manual methods.   
•   It Does not require internet.   

### Threat
•	Data theft.

## 1.4 5W's and 1H

### What
   It is an automatic assistant that help customers buy their pump sets according to their requirement.
   
### Why
   It is required to buy the motor as per specification.
       
### When
   * It is used when buying motors for new borewell.  
   * Buying manual. 
       
### Where
   * This can be used as an mobile application.
   * It can be used in motor dealership shops.
       
### Who
   * Agriculturists.
   * Industrialists.
   * Domestic consumers.
       
### How
   * This motor picker can be used like a manual to choose motor of different brands.



## 1.5 **HIGH LEVEL REQUIREMENTS:**                                                                   


ID     | Description                                                |Status  |
-------| -----------------------------------------------------------|--------|
HLR 1  |To choose the right bore motor based on brands             |Implemented|
HLR 2  |To get the size of the bore and other inputs from the user  |Implemented|
HLR 3  |To print the price of motor basd upon the inputs            |Implemented|
HLR 4  |To generate a bill for the order placed by the user         |Implemented|

##  1.6 **LOW LEVEL REQUIREMENTS:**
 
 ID     | Description                                                      |Status  |
--------| -----------------------------------------------------------------|--------|
LLR 1   | The list brands available shall be given as choice               |Implemented|
LLR 1.1 | Choice is first given to choose between (Texmo/Kirloskar/CRI/Taro)|Implemented|
LLR 2   | The size of motor shall be stored in a variable                          |Implemented|
LLR 3   |  The price of motor shall be processed based on brand and other inputs   |Implemented|
LLR 4   |  Customer details shall be taken to generate the bill                    |Implemented|




##1.7 APPLICATIONS
*  Motor Dealership shops.
*  Consumers of all segment.

# 2.ARCHITECTURE

# 2.1BEHAVIOURAL DIAGRAMS

## 2.1.1 HIGH LEVEL BEHAVIOURAL DIAGRAM
![](/2_Architecture/Behavioral%20diagram/Behavioural%20HLD.png)
 

## 2.1.2 LOW LEVEL BEHAVIOURAL DIAGRAM 

  ![](/2_Architecture/Behavioral%20diagram/Behavioural%20LLD.png)


# 2.2STRUCTURAL DIAGRAMS
## 2.2.1HIGH LEVEL DIAGRAM
![](/6_ImagesAndVideos/Structural%20HLD.png) 



## 2.2.2LOW LEVEL DIAGRAM

![](/6_ImagesAndVideos/Structural%20LLD.png)

# 3.TEST PLAN AND OUTPUT:

## Table no: High Level test plan and Output

|**Test ID**|**Description**|**Exp i/P**|**Exp O/P**|**Actual O/P**|
| :- | :-: | :-: | :-: | :-: |
|HLT_01|Choosing the brand of motor the user wants to buy|Choice|1|1|
|HLT_02|Choose the size of motor|Choice|1|1|
|HLT_03|Choose the Horse power of motor|Choice|1|1|
|HLT_04|Display the price of motor selected|Choice|price|price|
|HLT_05|Generate a bill for the selected product|customer details|bill details|bill details|



## Table no: Low Level test plan and Output


|Test ID|HL\_ID|Description|input|Exp Output|Actual Output|
| :- | :- | :- | :- | :- | :- |
|LLT_01|HLT_01|To Display The brands of motor|1|texmo|texmo|
|LLT_02|HLT_02|To choose the available size of motors|1| 4 inch|4 inch|
|LLT_03|HLT_03|To display the motors based on HP|1| 2 HP|2 HP|
|LLT_04|HLT_04|To Display the price of selected motor|1|17300|17300|
|LLT_05|HLT_05|Generate bill by getting customer details|customer details|Bill details|Bill details|

## 3.1OUTPUT
![](/6_ImagesAndVideos/Screenshot%20(94).png)
![](/6_ImagesAndVideos/Screenshot%20(92).png)
