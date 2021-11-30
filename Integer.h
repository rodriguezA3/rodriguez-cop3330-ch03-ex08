/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 adan rodriguez
 */

#ifndef INTEGER_H
#define INTEGER_H

class Integer 
{
    int num; 
    bool even;

public:
    Integer(int n);
   int getNum();
   bool isEven();
};
#endif