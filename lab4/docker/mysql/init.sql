use stud;

CREATE TABLE IF NOT EXISTS `Person` (
    `login` VARCHAR(256) NOT NULL UNIQUE,
    `first_name` VARCHAR(256) NOT NULL,
    `last_name` VARCHAR(256) NOT NULL,
    `age` INT NOT NULL,
    PRIMARY KEY (`login`)
);

INSERT INTO `Person` (`login`, `first_name`, `last_name`, `age`) VALUES
('login1', 'fname1', 'lname1', 10),
('login2', 'fname2', 'lname2', 20),
('login3', 'fname3', 'lname3', 30);
