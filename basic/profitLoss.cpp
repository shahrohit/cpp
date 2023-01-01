#include <iostream>
using namespace std;
int main()
{
      float buying, selling, percent;

      cout << "Buying Price : ";
      cin >> buying;

      cout << "Selling Price : ";
      cin >> selling;

      if (selling - buying > 0)
      {
            percent = ((selling - buying) / selling) * 100;
            cout << "Your profit percent is : " << percent << "%" << endl;
      }
      else if (buying - selling > 0)
      {
            percent = ((buying - selling) / buying) * 100;
            cout << "Your loss percent is : " << percent << "%" << endl;
      }
      else
      {
            cout << "No profit and No loss.";
      }

      return 0;
}