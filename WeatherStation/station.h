#ifndef WEATHER_STATION_STATION_H
#define WEATHER_STATION_STATION_H

#include <vector>
#include <chrono>
#include "temperature.h"
#include "humidity.h"
#include "pressure.h"
#include "record.h"
#include "subject.h"

namespace WeatherStation
{
    class Station : public Subject// TODO: Make this a ConcreteSubject.
    {
    private:
        std::vector<WeatherStation::Record> history_{};

    public:
        Station() noexcept;

        Temperature getTemperature() const;
        Humidity getHumidity() const;
        Pressure getPressure() const;

        Temperature getMeanTemperature(std::chrono::system_clock::time_point const t0, std::chrono::system_clock::time_point const t1) const;
        Humidity getMeanHumidity(std::chrono::system_clock::time_point const t0, std::chrono::system_clock::time_point const t1) const;
        Pressure getMeanPressure(std::chrono::system_clock::time_point const t0, std::chrono::system_clock::time_point const t1) const;

        void measure();
    };
}

#endif // WEATHER_STATION_STATION_H
