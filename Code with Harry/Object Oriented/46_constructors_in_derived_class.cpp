/*
1. we can use constructors in derived classes in c++
2. if base class constructor does not have any arguments, there is no need of any constructor in derived class
3. but if there are one or more arguments in the base class constructor, derived class need to pass arguments to the base class constructor
4. if both base and derived classes have constructors, base class constructor is executed first

5. in multiple inheritance, base classes are constructed in the order in which they appear in the class declaration.
6. in multilevel inheritance, the constructors are executed in the order of inheritance.

***SPECIAL CASE OF VIRTUAL BASE CLASS***
>> The constructors for virtual base classes are invoked before an non virtual base class
>> If there are multiple virtual base classes, they are invoked in the order declared
>> Any non virtual base class are then constructed before the derived class constructor is executed
*/