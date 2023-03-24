class WeatherRecord

  # constructor
  def initialize(date, high, low)
    @date = date
    @high = high
    @low  = low
  end

  # convert the current object to a string
  def to_s()
    return "On #{@date}, the high was #{@high} and the low was #{@low}"
  end

  def getDate()
    return @date
  end

  def getHigh()
    return @high
  end

  def getLow()
    return @low
  end
  
end
    
    
sample = WeatherRecord.new("March 22, 2023", 30.5, 8.0)    
anotherSample = WeatherRecord.new("The eleventeenth of Never", 100, -40.0)
    
puts(sample)
puts(anotherSample)

puts()

puts(sample.getDate())
puts(sample.getHigh())
puts(sample.getLow())
    
    
