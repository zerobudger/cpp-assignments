#include <iostream>
using namespace std;
#include <cstdlib>

int main(){

    // 1D array

    double revenue[7];   // storing daily revenues (7 days)


    cin >> revenue[0];          /*revenue input*/
    cin >> revenue[1];
    cin >> revenue[2];
    cin >> revenue[3];
    cin >> revenue[4];
    cin >> revenue[5];
    cin >> revenue[6];
    

    // calculation and display
    double total_revenue = revenue[0] + revenue[1] + revenue[2] + revenue[3] + revenue[4] + revenue[5] + revenue[6];
    cout << "Total weekly revenue: " << total_revenue << endl;

    double average_revenue = (total_revenue / 7);
    cout << "Average daily revenue: " << average_revenue << endl;



    // 2D array

    int occupancy[5][10];
    
        for (int floors = 0; floors < 5; floors++)
        {
            
            int occupied = 0;
           for (int rooms = 0; rooms < 10; rooms++)
           {
               cin >> occupancy[floors][rooms];

               if (occupancy[floors][rooms] == 1)
               {
                occupied++;
                
               }
              
           }

           cout << "Floor " << floors + 1 << " occupied rooms: " << occupied << endl;
           cout << "Floor " << floors + 1 << " vacant rooms: " << 10 - occupied << endl;
        }



    // 3D array    

    int chain[3][5][10];
    int total_occupied = 0;

    for (int branch = 0; branch < 3; branch++)
    {
        for (int floors = 0; floors < 5; floors++)
        {
            for (int rooms = 0; rooms < 10; rooms++)
            {
               chain[branch][floors][rooms] = rand() % 2;    // rand generates a pseudo-random interger. % calc the remainder
               
               if (chain[branch][floors][rooms] == 1)
               {
                total_occupied++;
               }
            }
        }

    }
     cout << "Total occupied rooms across all branches: " << total_occupied << endl;
    

    
    return 0;
}