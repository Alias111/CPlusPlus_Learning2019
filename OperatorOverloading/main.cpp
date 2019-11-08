#include "Helpers.h"
using std::cout;
using std::endl;
using std::cin;

int main()
{
    Log("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");

    Log("--------------- Operator Overloading ---------------\n\n");

    Vector2 postion(4.0f, 4.0f);
    Vector2 speed(0.5f, 1.5f);
    Vector2 powerUp(1.1f, 1.1f);

    // Adding the two vectors The JVM Way 🤮 💀
    auto result = postion.Add(speed.Multiply(powerUp));
    // Using Operator Overloading `td::ostream& operator<<`
    auto result2 = postion + speed * powerUp;

    /* Will not load because there is no operation overload for '<<'*/
    // std::cout << result2 << std::endl;// HUGE ERROR!!!!
    cout << "Version#1) postion.Add(speed.Multiply(powerUp)) = [ "<< result << " ]" << endl;
    cout << "Version#2) postion + speed * powerUp = [ "<< result2 << " ]" << endl;

    // Using our `==` operator with our two struct instances
    if (!(result == result2)) {
        Log("Not Equal");
    } else Log("Are equal");

    Log("\n\n--------------- Operator Overloading ---------------");


    Log("\n\n\n\n\n\n\n\n\n\n\n\n\n");
    cin.get();
}
