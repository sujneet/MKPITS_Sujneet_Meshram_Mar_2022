create table Employee(emp_id int primary key,emp_name varchar(20),emp_contact varchar(10),Emp_email varchar(20), Emp_city varchar(20),salary money)

insert into Employee values(1,'Rakesh',124565,'rakesh@gmail;.com','Nagpur',20000)
insert into Employee values(2,'Rajesh',12456545,'rajesh@gmail;.com','Delhi',21000)
insert into Employee values(3,'Suresh',12466565,'suresh@1@gmail;.com','Pune',51000)
insert into Employee values(4,'Priya',12456545,'priya12@gmail;.com','Indore',250000)
insert into Employee values(5,'Raj',124564565,'raj5@gmail;.com','Nagpur',60000)

select*from Employee

create function fun_EmployeeInfo()  returns table as return (select*from Employee)

select *from fun_EmployeeInfo()

create function fun_joinEmpColumnInfo (@EmpContact nchar(15),@EmpEmail nvarchar(50),@EmpCity varchar(30) ) 
returns nvarchar(100) as begin return(select @EmpContact +''+@EmpEmail+''+@EmpCity)end

create function fun_joinEmpColumnInfo1 (@EmpContact nchar(15),@EmpEmail nvarchar(50),@EmpCity varchar(30) ) 
returns nvarchar(100) as begin return(select @EmpContact +''+@EmpEmail+''+@EmpCity)end


      create function fun_emp2
    (  
       @EmpContact varchar(50),  
       @EmpName varchar(50),  
       @EmpCity varchar(50)  
    )  
    returns varchar(150)  
    as  
    begin return(select @EmpContact+ ' ' +@EmpName + ' ' + @EmpCity)  
    end  

select dbo.fun_emp2(empcontact,empname,empcity) as 'detail' from Employee




select*from fun_joinEmpColumnInfo