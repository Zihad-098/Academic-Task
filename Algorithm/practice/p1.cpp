#include<iostream>
#include<vector>
#include<algorithm>
#include<iomanip>

using namespace std;

struct Treasure
{
    int value;
    int weight;
};

bool compare ( Treasure a, Treasure b )
{
    return (double)a.value /a.weight>(double)b.value /b.weight;
}

double getMaxValue(int n, int W, vector<Treasure>&treasures)
{
    sort (treasures.begin(),treasures.end(),compare);
    double maxValue=0.0;
    int currentWeight=0;
    int remainingWeight;
    for (int i=0; i<n; i++)
    {
        if(currentWeight +treasures[i].weight<=W)
        {
            currentWeight+=treasures[i].weight;
            maxValue+=treasures[i].value;
        }
        else
        {
            int remainingWeight=W-currentWeight;
            maxValue+=(double)treasures[i].value*remainingWeight/treasures[i].weight;
        }
    }
    return maxValue;
}

int main()
{
    int n, W;
    cout<<"Enter the number of treasures and weight capacity:";
    cin>>n>>W;
    vector<Treasure>treasures(n);
    cout<<"Enter value and weight of each treasure:";

    for (int i=0; i<n; i++)
    {
        cin>>treasures[i].value>>treasures[i].weight;

    }
cout<<"Output: ";
    cout<<fixed<<setprecision(5)<<getMaxValue(n,W,treasures)<<endl;

    return 0;
}
