/*
components of stl are:
stl = containers + algorithms + iterators
containers:: object which stores data
algorithms:: procedure to process data
iterators:: object which points to an element of a container

CONTAINERS
1. sequence containers
    linear fashion mei data ko store karta hai
    eg: vector, list, dequeue

2. associative containers
    direct access, fast access mei kaam aate hai(tree ki form mei store hota hai)
    eg: set, multiset, map, multimap 

3. derived containers
    real world modeling
    eg: stack, queue, priority queue

    SEQUENCE CONTAINERS:
    1. vector=> random access is FAST
                middle insertion and deletion is SLOW
                insertion and deletion at the end is FAST

    2. List=>   random acces is SLOW
                insertion and deletion in middle is FAST
                insertion and deletion at the end is FAST

    ASSOCIATIVE CONTAINERS--> All operations are fast except random access

    DERIVED CONTAINERS--> Depends --> through data structure
*/