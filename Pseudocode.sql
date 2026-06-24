BEGIN
  DECLARE voltage AS DOUBLE

  PRINT "Enter voltage reading (V): "
  INPUT voltage

  IF voltage < 0 THEN
    PRINT "Invalid voltage reading"
  ELSE IF voltage <= 50 THEN
    PRINT "Low voltage"
  ELSE IF voltage <= 240 THEN
    PRINT "Normal voltage"
  ELSE IF voltage <= 415 THEN
    PRINT "High voltage"
  ELSE
    PRINT "Dangerous voltage"
  END IF

END