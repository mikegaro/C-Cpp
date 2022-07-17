/*

    What is an enumeration?

    -> A user-defined type that models a set of constant integral values

        -> The days of the week
        -> The months of the year
        -> The directions of a compass
        -> ETC.

    The reason for enumerators is readability, because it is way easier
    to read it like

    Whithout enumerators:

    if (state==0)
        initiate(3);
    if (state==1)
        initiate(4);

    WITH ENUMERATORS:

    if (state == Engine_Failure)
        initiate(Abort);
    if (state == Engine_Success)
        initiate(Liftoff)

    Structure

    enum-key enum-name  :   enumerator-type {};

    enum {Red, Green, Blue};
           0     1      2

    enum {Red=1, Green, Blue};
           1      2      3

Enumeration name:

    enum Color {Red, Green, Blue};
    Color my_color;
    my_color = Green; // Valid
    my_color = 4;     // Not valid
*/

int main( ) {


    return 0;
}