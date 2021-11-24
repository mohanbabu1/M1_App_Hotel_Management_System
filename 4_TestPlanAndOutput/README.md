# Test Plan:

## High Level Test Plan

|Test ID|Description            |Exp I/P   | Exp  O/P  |Actual Ouput  |Type of test|
|-----  |---------------------- |----------|-----------|--------------|------------|
|H_01   |the user service provider should register with required details|input details |name,details|    pass |Requirement Based|
|H_02   |Customer Enters the begin date,not the End date|begin date|if end date is not entered|message displayed |Scenario Baesd   |
|H_03   | Edit the Customer record by mentioning their details | renaming the details |display the details |changed the details sucessfully |Boundary Based   |





## Low Level Test Plan

|Test ID|Description            |Exp I/P   | Exp  O/P  |Actual Ouput  |Type of test|
|-----  |---------------------- |----------|-----------|--------------|------------|
|L_01   |Make a reservation room,check at apppriate time|   room is booked | message displaed|   sucessfully |Requirement Based|
|L_02   |Customer Enters the date like 21/11/2021 and also mention end date|details can be entered| some date|report displayed|Scenario Baesd   |
|L_03   | view a particular custome record|  mohan |when he entered and leave the hotel |message displayed |Boundary Based   |
