﻿// 2 example.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
class Employee
{
public:
	virtual void raiseSalary()
	{  /* common raise salary code */
	}

	virtual void promote()
	{ /* common promote code */
	}
};

class Manager : public Employee {
	virtual void raiseSalary()
	{  /* Manager specific raise salary code, may contain
          increment of manager specific incentives*/
	}

	virtual void promote()
	{ /* Manager specific promote */
	}
};

// Similarly, there may be other types of employees 

// We need a very simple function to increment salary of all employees 
// Note that emp[] is an array of pointers and actual pointed objects can 
// be any type of employees. This function should ideally be in a class  
// like Organization, we have made it global to keep things simple 
void globalRaiseSalary(Employee *emp[], int n)
{
	for (int i = 0; i < n; i++)
		emp[i]->raiseSalary(); // Polymorphic Call: Calls raiseSalary()  
							   // according to the actual object, not  
							   // according to the type of pointer                                  
}