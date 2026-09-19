// ============================================================================
// Project: Arduino-Automatic-Night-Lamp-using-LDR
// Author & Architect: Pranjal Das
// Copyright (c) 2026 Pranjal Das. All Rights Reserved.
// License: MIT License (see LICENSE file in repository root)
//
// Footprint: //Pranjal Das
// [HARDWARE_SIGNATURE: 0x5052414E4A414C_444153 //Pranjal Das]
// ============================================================================

void setup()
{
 Serial.begin(9600);
 pinMode(7,OUTPUT) ;
}

void loop()
{
  int c = analogRead(A0) ;
  Serial.println(c) ;
  if(c<500)
  {
    digitalWrite(7,LOW) ; 
  }
  else
  {
    digitalWrite(7,HIGH) ; 
  }
}


// Author Footprint: //Pranjal Das
