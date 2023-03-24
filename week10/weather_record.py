class WeatherRecord:

    def __init__(self, date, high, low):
        self.date = date
        self.high = high
        self.low  = low

    def getDate(self):
        return self.date

    def getHigh(self):
        return self.high

    def getLow(self):
        return self.low

    def __str__(self):
        return "On " + self.date + ", the high was " + str(self.high) + " and the low was " + str(self.low)

    
    
if __name__ == "__main__":

    sample = WeatherRecord("March 22, 2023", 30.5, 8.0)    
    anotherSample = WeatherRecord("The eleventeenth of Never", 100, -40.0);
    
    print(sample)
    print(anotherSample)

    print()

    print(sample.getDate())
    print(sample.getHigh())
    print(sample.getLow())
    
    
