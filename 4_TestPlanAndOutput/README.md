# TEST PLAN AND OUTPUT:

## Table no: High Level test plan and Output

|**Test ID**|**Description**|**Exp i/P**|**Exp O/P**|**Actual O/P**|
| :- | :-: | :-: | :-: | :-: |
|HLT_01|Choosing the brand of motor the user wants to buy|Choice|1|1|
|HLT_02|Choose the size of motor|Choice|1|1|
|HLT_03|Choose the Horse power of motor|Choice|1|1|
|HLT_04|Display the price of motor selected|1|price|price|
|HLT_05|Generate a bill for the selected product|customer details|bill details|bill details|



## Table no: Low Level test plan and Output


|Test ID|HL\_ID|Description|Exp input|Exp Output|Actual Output|
| :- | :- | :- | :- | :- | :- |
|LLT_01|H\_01|To Display|80|5 HP|5 HP|
|LLT_02|H\_01|Choosing the right motor for Agri purpose if(depth>=101 && depth<=200)|140|7.5 HP|7.5 HP|
|L\_03|H\_01|Choosing the right motor for Agri purpose if(depth>=201 && depth<=300)|250|10 HP|10 HP|
|L\_04|H\_01|Choosing the right motor for Agri purpose if(depth>301)|340|12.5 HP|12.5 HP|
|L\_05|H\_02|Choosing the right motor for Industry purpose if(depth<=100)|60|<p>7.5 HP</p><p></p>|<p>7.5 HP</p><p></p>|
|L\_06|H\_02|Choosing the right motor for Industry purpose if(depth>=101 && depth <=200)|145|10 HP|10 HP|
|L\_07|H\_02|Choosing the right motor for Industry purpose if(depth>=201 && depth <=300)|280|12.5|12.5|
|L\_08|H\_02|Choosing the right motor for Industry purpose if(depth>300)|340|15 HP|15 HP|

