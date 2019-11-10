#include "helpers.h"
using std::cout;
using std::endl;
using std::cin;
using std::string;
using std::vector;
using std::thread;


int main()
{

    Log("\n\n------------------ Lambdas -------------------\n\n{ V-#1 }");

    thread worker(DoWork);

    // blocks the thread
    // {Macros} #define End() std::cin.get()
    End();// Stops program until you press enter
    // Stops the while-loop
    is_Finished = true;
    // join will wait for the thread to join
    worker.join();// wait()/sleep()..etc until enter is pressed
    // After the thread is finished, the message below will
    // be outputted to the console
    Log("Thread is finished...");




    Log("\n----------------------------------------------\n\n{ V-#2 }");
    //##################################################################




    //##################################################################

    Log("\n----------------------------------------------\n\n{ V-#3 }");



    //##################################################################

    Log("\n----------------------------------------------\n{ V-#4 }");


    Log("\n------------------ Lambdas -------------------\n");

    End();
}
