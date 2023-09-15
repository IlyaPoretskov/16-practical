#include <iostream>

using namespace std;

enum switches 
{
    LIGHTS_INSIDE = 1, 
    LIGHTS_OUTSIDE = 2, 
    HEATERS = 4, 
    WATER_PIPE_HEATING = 8, 
    CONDITIONER = 16 
};

int main() 
{
    int time = 0;                                                //time

    int temperatureIn = 0, temperatureOut = 0;                   //sensors

    int colorTemp = 5000;

    bool housePower = false,    mainPowerSockets = false,        //machines
         lightIn = false,       lightInGarden = false, 
         heatingInRoom = false, waterSupplyHeating = true, 
         conditioner = false,   movements = false;       

    while (true) {

        cout << "Temperature inside, temperature outside, movement, lights:\n";

        string forConvert1, forConvert2;
        
        cin >> temperatureIn >> temperatureOut >> forConvert1 >> forConvert2;
        
        const bool housePowerC = housePower,       mainPowerSocketsC = mainPowerSockets,
                   lightInC = lightIn,             lightInGardenC = lightInGarden,
                   heatingInRoomC = heatingInRoom, waterSupplyHeatingC = waterSupplyHeating,
                   conditionerC = conditioner,     movementsC = movements;


        if (forConvert1 == "yes")
        {
            movements = true;
        }
        if (forConvert1 == "no")
        {
            movements = false;
        }

        if (forConvert2 == "on")
        {
            lightIn = true;
        }
        if (forConvert2 == "off")
        {
            lightIn = false;
        }

        if (temperatureOut <= 0)
        {
            waterSupplyHeating |= WATER_PIPE_HEATING;
        }
        if (temperatureOut > 5)
        {
            waterSupplyHeating &= ~WATER_PIPE_HEATING;
        }

        if ((time > 16 || time < 5) && movements == true)
        {
            lightInGarden |= LIGHTS_OUTSIDE;
        } else
        {
            lightInGarden &= ~LIGHTS_OUTSIDE;
        }

        if (temperatureIn < 22)
        {
            heatingInRoom |= HEATERS;
        }
        if (temperatureIn > 25)
        {
            heatingInRoom &= HEATERS;
        }

        if (temperatureIn >= 30)
        {
            conditioner |= CONDITIONER;
        }
        if (temperatureIn <= 25)
        {
            conditioner &= ~CONDITIONER;
        }

        if (lightIn == true && (time >= 16 && time <= 20))
        {
            colorTemp - 575;
        }
        if (time == 0)
        {
            colorTemp = 5000;
        }

        if (heatingInRoom != heatingInRoomC)
        {
            if (heatingInRoom == true)
            {
                cout << "Heaters ON!\n";
            } else
            {
                cout << "Heaters OFF!\n";
            }
        }
        if (waterSupplyHeating != waterSupplyHeatingC)
        {
            if (waterSupplyHeating = true)
            {
                cout << "Water Pipe Heaters ON!\n";
            } else 
            {
                cout << "Water Pipe Heaters OFF!\n";
            }
        }
        if (lightIn != lightInC)
        {
            if (lightIn == true)
            {
                cout << "Lights ON!\n";
            } else
            {
                cout << "Lights OFF!\n";
            }
        }
        if (lightInGarden != lightInGardenC && lightIn != true)
        {
            if (lightInGarden == true)
            {
                cout << "Lights ON!\n";
            } else
            {
                cout << "Lights OFF!\n";
            }
        }
        if (conditioner != conditionerC)
        {
            if (conditioner == true)
            {
                cout << "Conditioner ON!\n";
            } else
            {
                cout << "Conditioner OFF!\n";
            }
        }
        if (lightIn == true)
        {
            cout << "Color temperature: " << colorTemp << "K\n";
        }

        time++;
        if (time == 24)
        {
            time = 0;
        }
    }
}