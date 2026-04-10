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