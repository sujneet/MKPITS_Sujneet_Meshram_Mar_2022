CREATE TABLE Student2 (      
      id int primary key,     
      admission_no varchar(45) not null,  
      first_name varchar(45) not null,      
      last_name varchar(45) not null,  
      age int,  
      city varchar(25) not null     
    );    


	    CREATE TABLE Fee2 (   
      admission_no varchar(45) not null,  
      course varchar(45) not null,      
      amount_paid int,    
    );  
    INSERT INTO Student2 VALUES (1,3354,'Luisa', 'Evans', 13, 'Texas')    ,  
    (2,2135, 'Paul', 'Ward', 15, 'Alaska'),       
    (3,4321, 'Peter', 'Bennett', 14, 'California'),    
    (4,4213,'Carlos', 'Patterson', 17, 'New York'),       
    (5,5112, 'Rose', 'Huges', 16, 'Florida'),  
    (6,1613, 'Marielia', 'Simmons', 15, 'Arizona'),    
    (7,5575,'Antonio', 'Butler', 14, 'New York'),       
    (8,8345, 'Diego', 'Cox', 13, 'California'); 

	   

	    INSERT INTO Fee2(admission_no, course, amount_paid)       
    VALUES (3354,'Java', 20000),       
    (7555, 'Android', 22000),       
    (4321, 'Python', 18000),    
    (8345,'SQL', 15000),       
    (5112, 'Machine Learning', 30000); 

	select*from Student2
	select*from Fee2

      select*from Student2 s left outer join Fee2 f on s.admission_no =f.admission_no;

      
