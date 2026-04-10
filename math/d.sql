CREATE TABLE Students (
    StudentID INT PRIMARY KEY,
    FirstName VARCHAR(50) NOT NULL,
    LastName VARCHAR(50) NOT NULL,
    Age INT,
    EnrollmentDate DATE DEFAULT CURRENT_DATE
);
INSERT INTO Students (StudentID, FirstName, LastName, Age) VALUES
(1, 'John', 'Doe', 20),
(2, 'Jane', 'Smith', 22),
(3, 'Emily', 'Johnson', 19),
(4, 'Michael', 'Brown', 21),
(5, 'Sarah', 'Davis', 23);
SELECT * FROM Students;
SELECT FirstName, LastName FROM Students WHERE Age > 21;


CoreCard SQL High Probability Questions

1. Find 2nd Highest Salary
SELECT MAX(salary) 
FROM employees 
WHERE salary < (SELECT MAX(salary) FROM employees);
2. Find Duplicate Records
SELECT name, COUNT(*) 
FROM employees 
GROUP BY name 
HAVING COUNT(*) > 1;
3. Employees with Salary > Average
SELECT name, salary 
FROM employees 
WHERE salary > (SELECT AVG(salary) FROM employees);
4. INNER JOIN Example
SELECT e.name, d.department_name
FROM employees e
INNER JOIN departments d
ON e.dept_id = d.id;
5. Departments with more than 2 Employees
SELECT dept_id, COUNT(*) 
FROM employees 
GROUP BY dept_id 
HAVING COUNT(*) > 2;
Bonus: Top 3 Highest Salaries
SELECT salary 
FROM employees 
ORDER BY salary DESC 
LIMIT 3;