#define ZONEONE                         1                   //ZONEONE is pin D1, 1 = zone used 0 = zone unused
#define FIRSTZONE_SECTIONS              1                   //Number of roof sections setup below
#define FIRSTZONE_LEDS                  300                 //Number of LEDS in this zone 
#define FIRSTZONE_COLOR_ORDER           GRB                 //Color orders, can be RGB, RBG, GRB, GBR, BRG, BGR 

#define ZONETWO                         1                   //ZONETWO is pin D2, 1 = zone used 0 = zone unused
#define SECONDZONE_SECTIONS             1                   //Number of roof sections setup below
#define SECONDZONE_LEDS                 300                 //Number of LEDS in this zone 
#define SECONDZONE_COLOR_ORDER          GRB                 //Color orders, can be RGB, RBG, GRB, GBR, BRG, BGR 

#define ZONETHREE                       1                   //ZONETHREE is pin D3, 1 = zone used 0 = zone unused
#define THIRDZONE_SECTIONS              1                   //Number of roof sections setup below
#define THIRDZONE_LEDS                  300                 //Number of LEDS in this zone 
#define THIRDZONE_COLOR_ORDER           GRB                 //Color orders, can be RGB, RBG, GRB, GBR, BRG, BGR 

#define ZONEFOUR                        1                   //ZONEFOUR is pin D5, 1 = zone used 0 = zone unused
#define FOURTHZONE_SECTIONS             1                   //Number of roof sections setup below
#define FOURTHZONE_LEDS                 300                 //Number of LEDS in this zone 
#define FOURTHZONE_COLOR_ORDER          GRB                 //Color orders, can be RGB, RBG, GRB, GBR, BRG, BGR 

#define ZONEFIVE                        1                   //ZONEFIVE is pin D6, 1 = zone used 0 = zone unused
#define FIFTHZONE_SECTIONS              1                   //Number of roof sections setup below
#define FIFTHZONE_LEDS                  300                 //Number of LEDS in this zone 
#define FIFTHZONE_COLOR_ORDER           GRB                 //Color orders, can be RGB, RBG, GRB, GBR, BRG, BGR

#define ZONESIX                         1                   //ZONESIX is pin D7, 1 = zone used 0 = zone unused
#define SIXTHZONE_SECTIONS              1                   //Number of roof sections setup below
#define SIXTHZONE_LEDS                  300                 //Number of LEDS in this zone 
#define SIXTHZONE_COLOR_ORDER           GRB                 //Color orders, can be RGB, RBG, GRB, GBR, BRG, BGR 

/*****************************    ZONEONE ROOF SETUP    *************************************/
/*****************************    ZONEONE ROOF SETUP    *************************************/

#if  FIRSTZONE_SECTIONS >= 1        
#define ZONEONE_SECTION1_START            0           //starting LED for this zone
#define ZONEONE_SECTION1_END              100         //ending LED for this zone
#define ZONEONE_SECTION1_START_FIRE       1           //would you like fire to begin from this point? 0 = no 1 = yes
#define ZONEONE_SECTION1_END_FIRE         1           //would you like fire to begin from this point? 0 = no 1 = yes
#endif

#if  FIRSTZONE_SECTIONS >= 2
#define ZONEONE_SECTION2_START            0           //starting LED for this zone
#define ZONEONE_SECTION2_END              100         //ending LED for this zone
#define ZONEONE_SECTION2_START_FIRE       1           //would you like fire to begin from this point? 0 = no 1 = yes
#define ZONEONE_SECTION2_END_FIRE         1           //would you like fire to begin from this point? 0 = no 1 = yes
#endif

#if  FIRSTZONE_SECTIONS >= 3
#define ZONEONE_SECTION3_START            0           //starting LED for this zone
#define ZONEONE_SECTION3_END              100         //ending LED for this zone
#define ZONEONE_SECTION3_START_FIRE       1           //would you like fire to begin from this point? 0 = no 1 = yes
#define ZONEONE_SECTION3_END_FIRE         1           //would you like fire to begin from this point? 0 = no 1 = yes
#endif

#if  FIRSTZONE_SECTIONS >= 4
#define ZONEONE_SECTION4_START            0           //starting LED for this zone
#define ZONEONE_SECTION4_END              100         //ending LED for this zone
#define ZONEONE_SECTION4_START_FIRE       1           //would you like fire to begin from this point? 0 = no 1 = yes
#define ZONEONE_SECTION4_END_FIRE         1           //would you like fire to begin from this point? 0 = no 1 = yes
#endif

#if  FIRSTZONE_SECTIONS >= 5
#define ZONEONE_SECTION5_START            0           //starting LED for this zone
#define ZONEONE_SECTION5_END              100         //ending LED for this zone
#define ZONEONE_SECTION5_START_FIRE       1           //would you like fire to begin from this point? 0 = no 1 = yes
#define ZONEONE_SECTION5_END_FIRE         1           //would you like fire to begin from this point? 0 = no 1 = yes
#endif

#if  FIRSTZONE_SECTIONS >= 6
#define ZONEONE_SECTION6_START            0           //starting LED for this zone
#define ZONEONE_SECTION6_END              100         //ending LED for this zone
#define ZONEONE_SECTION6_START_FIRE       1           //would you like fire to begin from this point? 0 = no 1 = yes
#define ZONEONE_SECTION6_END_FIRE         1           //would you like fire to begin from this point? 0 = no 1 = yes
#endif

#if  FIRSTZONE_SECTIONS >= 7
#define ZONEONE_SECTION7_START            0          //starting LED for this zone
#define ZONEONE_SECTION7_END              100        //ending LED for this zone
#define ZONEONE_SECTION7_START_FIRE       1          //would you like fire to begin from this point? 0 = no 1 = yes
#define ZONEONE_SECTION7_END_FIRE         1          //would you like fire to begin from this point? 0 = no 1 = yes
#endif

#if  FIRSTZONE_SECTIONS >= 8
#define ZONEONE_SECTION8_START            0          //starting LED for this zone
#define ZONEONE_SECTION8_END              100        //ending LED for this zone
#define ZONEONE_SECTION8_START_FIRE       1          //would you like fire to begin from this point? 0 = no 1 = yes
#define ZONEONE_SECTION8_END_FIRE         1          //would you like fire to begin from this point? 0 = no 1 = yes
#endif

#if  FIRSTZONE_SECTIONS >= 9
#define ZONEONE_SECTION9_START            0          //starting LED for this zone
#define ZONEONE_SECTION9_END              100        //ending LED for this zone
#define ZONEONE_SECTION9_START_FIRE       1          //would you like fire to begin from this point? 0 = no 1 = yes
#define ZONEONE_SECTION9_END_FIRE         1          //would you like fire to begin from this point? 0 = no 1 = yes
#endif

/*****************************    ZONETWO ROOF SETUP    *************************************/
/*****************************    ZONETWO ROOF SETUP    *************************************/

#if  SECONDZONE_SECTIONS >= 1        
#define ZONETWO_SECTION1_START            0           //starting LED for this zone
#define ZONETWO_SECTION1_END              44         //ending LED for this zone
#define ZONETWO_SECTION1_START_FIRE       1           //would you like fire to begin from this point? 0 = no 1 = yes
#define ZONETWO_SECTION1_END_FIRE         1           //would you like fire to begin from this point? 0 = no 1 = yes
#endif

#if  SECONDZONE_SECTIONS >= 2
#define ZONETWO_SECTION2_START            44           //starting LED for this zone
#define ZONETWO_SECTION2_END              87         //ending LED for this zone
#define ZONETWO_SECTION2_START_FIRE       1           //would you like fire to begin from this point? 0 = no 1 = yes
#define ZONETWO_SECTION2_END_FIRE         1           //would you like fire to begin from this point? 0 = no 1 = yes
#endif

#if  SECONDZONE_SECTIONS >= 3
#define ZONETWO_SECTION3_START            88           //starting LED for this zone
#define ZONETWO_SECTION3_END              94         //ending LED for this zone
#define ZONETWO_SECTION3_START_FIRE       1           //would you like fire to begin from this point? 0 = no 1 = yes
#define ZONETWO_SECTION3_END_FIRE         1           //would you like fire to begin from this point? 0 = no 1 = yes
#endif

#if  SECONDZONE_SECTIONS >= 4
#define ZONETWO_SECTION4_START            95           //starting LED for this zone
#define ZONETWO_SECTION4_END              182         //ending LED for this zone
#define ZONETWO_SECTION4_START_FIRE       1           //would you like fire to begin from this point? 0 = no 1 = yes
#define ZONETWO_SECTION4_END_FIRE         1           //would you like fire to begin from this point? 0 = no 1 = yes
#endif

#if  SECONDZONE_SECTIONS >= 5
#define ZONETWO_SECTION5_START            183           //starting LED for this zone
#define ZONETWO_SECTION5_END              189         //ending LED for this zone
#define ZONETWO_SECTION5_START_FIRE       1           //would you like fire to begin from this point? 0 = no 1 = yes
#define ZONETWO_SECTION5_END_FIRE         1           //would you like fire to begin from this point? 0 = no 1 = yes
#endif

#if  SECONDZONE_SECTIONS >= 6
#define ZONETWO_SECTION6_START            190           //starting LED for this zone
#define ZONETWO_SECTION6_END              286         //ending LED for this zone
#define ZONETWO_SECTION6_START_FIRE       1           //would you like fire to begin from this point? 0 = no 1 = yes
#define ZONETWO_SECTION6_END_FIRE         1           //would you like fire to begin from this point? 0 = no 1 = yes
#endif

#if  SECONDZONE_SECTIONS >= 7
#define ZONETWO_SECTION7_START            287          //starting LED for this zone
#define ZONETWO_SECTION7_END              382        //ending LED for this zone
#define ZONETWO_SECTION7_START_FIRE       1          //would you like fire to begin from this point? 0 = no 1 = yes
#define ZONETWO_SECTION7_END_FIRE         1          //would you like fire to begin from this point? 0 = no 1 = yes
#endif

#if  SECONDZONE_SECTIONS >= 8
#define ZONETWO_SECTION8_START            0          //starting LED for this zone
#define ZONETWO_SECTION8_END              100        //ending LED for this zone
#define ZONETWO_SECTION8_START_FIRE       1          //would you like fire to begin from this point? 0 = no 1 = yes
#define ZONETWO_SECTION8_END_FIRE         1          //would you like fire to begin from this point? 0 = no 1 = yes
#endif

#if  SECONDZONE_SECTIONS >= 9
#define ZONETWO_SECTION9_START            0          //starting LED for this zone
#define ZONETWO_SECTION9_END              100        //ending LED for this zone
#define ZONETWO_SECTION9_START_FIRE       1          //would you like fire to begin from this point? 0 = no 1 = yes
#define ZONETWO_SECTION9_END_FIRE         1          //would you like fire to begin from this point? 0 = no 1 = yes
#endif


/*****************************    ZONETHREE ROOF SETUP    *************************************/
/*****************************    ZONETHREE ROOF SETUP    *************************************/

#if  THIRDZONE_SECTIONS >= 1        
#define ZONETHREE_SECTION1_START            0           //starting LED for this zone
#define ZONETHREE_SECTION1_END              100         //ending LED for this zone
#define ZONETHREE_SECTION1_START_FIRE       1           //would you like fire to begin from this point? 0 = no 1 = yes
#define ZONETHREE_SECTION1_END_FIRE         1           //would you like fire to begin from this point? 0 = no 1 = yes
#endif

#if  THIRDZONE_SECTIONS >= 2
#define ZONETHREE_SECTION2_START            0           //starting LED for this zone
#define ZONETHREE_SECTION2_END              100         //ending LED for this zone
#define ZONETHREE_SECTION2_START_FIRE       1           //would you like fire to begin from this point? 0 = no 1 = yes
#define ZONETHREE_SECTION2_END_FIRE         1           //would you like fire to begin from this point? 0 = no 1 = yes
#endif

#if  THIRDZONE_SECTIONS >= 3
#define ZONETHREE_SECTION3_START            0           //starting LED for this zone
#define ZONETHREE_SECTION3_END              100         //ending LED for this zone
#define ZONETHREE_SECTION3_START_FIRE       1           //would you like fire to begin from this point? 0 = no 1 = yes
#define ZONETHREE_SECTION3_END_FIRE         1           //would you like fire to begin from this point? 0 = no 1 = yes
#endif

#if  THIRDZONE_SECTIONS >= 4
#define ZONETHREE_SECTION4_START            0           //starting LED for this zone
#define ZONETHREE_SECTION4_END              100         //ending LED for this zone
#define ZONETHREE_SECTION4_START_FIRE       1           //would you like fire to begin from this point? 0 = no 1 = yes
#define ZONETHREE_SECTION4_END_FIRE         1           //would you like fire to begin from this point? 0 = no 1 = yes
#endif

#if  THIRDZONE_SECTIONS >= 5
#define ZONETHREE_SECTION5_START            0           //starting LED for this zone
#define ZONETHREE_SECTION5_END              100         //ending LED for this zone
#define ZONETHREE_SECTION5_START_FIRE       1           //would you like fire to begin from this point? 0 = no 1 = yes
#define ZONETHREE_SECTION5_END_FIRE         1           //would you like fire to begin from this point? 0 = no 1 = yes
#endif

#if  THIRDZONE_SECTIONS >= 6
#define ZONETHREE_SECTION6_START            0           //starting LED for this zone
#define ZONETHREE_SECTION6_END              100         //ending LED for this zone
#define ZONETHREE_SECTION6_START_FIRE       1           //would you like fire to begin from this point? 0 = no 1 = yes
#define ZONETHREE_SECTION6_END_FIRE         1           //would you like fire to begin from this point? 0 = no 1 = yes
#endif

#if  THIRDZONE_SECTIONS >= 7
#define ZONETHREE_SECTION7_START            0          //starting LED for this zone
#define ZONETHREE_SECTION7_END              100        //ending LED for this zone
#define ZONETHREE_SECTION7_START_FIRE       1          //would you like fire to begin from this point? 0 = no 1 = yes
#define ZONETHREE_SECTION7_END_FIRE         1          //would you like fire to begin from this point? 0 = no 1 = yes
#endif

#if  THIRDZONE_SECTIONS >= 8
#define ZONETHREE_SECTION8_START            0          //starting LED for this zone
#define ZONETHREE_SECTION8_END              100        //ending LED for this zone
#define ZONETHREE_SECTION8_START_FIRE       1          //would you like fire to begin from this point? 0 = no 1 = yes
#define ZONETHREE_SECTION8_END_FIRE         1          //would you like fire to begin from this point? 0 = no 1 = yes
#endif

#if  THIRDZONE_SECTIONS >= 9
#define ZONETHREE_SECTION9_START            0          //starting LED for this zone
#define ZONETHREE_SECTION9_END              100        //ending LED for this zone
#define ZONETHREE_SECTION9_START_FIRE       1          //would you like fire to begin from this point? 0 = no 1 = yes
#define ZONETHREE_SECTION9_END_FIRE         1          //would you like fire to begin from this point? 0 = no 1 = yes
#endif

/*****************************    ZONEFOUR ROOF SETUP    *************************************/
/*****************************    ZONEFOUR ROOF SETUP    *************************************/

#if  FOURTHZONE_SECTIONS >= 1        
#define ZONEFOUR_SECTION1_START            0           //starting LED for this zone
#define ZONEFOUR_SECTION1_END              100         //ending LED for this zone
#define ZONEFOUR_SECTION1_START_FIRE       1           //would you like fire to begin from this point? 0 = no 1 = yes
#define ZONEFOUR_SECTION1_END_FIRE         1           //would you like fire to begin from this point? 0 = no 1 = yes
#endif

#if  FOURTHZONE_SECTIONS >= 2
#define ZONEFOUR_SECTION2_START            0           //starting LED for this zone
#define ZONEFOUR_SECTION2_END              100         //ending LED for this zone
#define ZONEFOUR_SECTION2_START_FIRE       1           //would you like fire to begin from this point? 0 = no 1 = yes
#define ZONEFOUR_SECTION2_END_FIRE         1           //would you like fire to begin from this point? 0 = no 1 = yes
#endif

#if  FOURTHZONE_SECTIONS >= 3
#define ZONEFOUR_SECTION3_START            0           //starting LED for this zone
#define ZONEFOUR_SECTION3_END              100         //ending LED for this zone
#define ZONEFOUR_SECTION3_START_FIRE       1           //would you like fire to begin from this point? 0 = no 1 = yes
#define ZONEFOUR_SECTION3_END_FIRE         1           //would you like fire to begin from this point? 0 = no 1 = yes
#endif

#if  FOURTHZONE_SECTIONS >= 4
#define ZONEFOUR_SECTION4_START            0           //starting LED for this zone
#define ZONEFOUR_SECTION4_END              100         //ending LED for this zone
#define ZONEFOUR_SECTION4_START_FIRE       1           //would you like fire to begin from this point? 0 = no 1 = yes
#define ZONEFOUR_SECTION4_END_FIRE         1           //would you like fire to begin from this point? 0 = no 1 = yes
#endif

#if  FOURTHZONE_SECTIONS >= 5
#define ZONEFOUR_SECTION5_START            0           //starting LED for this zone
#define ZONEFOUR_SECTION5_END              100         //ending LED for this zone
#define ZONEFOUR_SECTION5_START_FIRE       1           //would you like fire to begin from this point? 0 = no 1 = yes
#define ZONEFOUR_SECTION5_END_FIRE         1           //would you like fire to begin from this point? 0 = no 1 = yes
#endif

#if  FOURTHZONE_SECTIONS >= 6
#define ZONEFOUR_SECTION6_START            0           //starting LED for this zone
#define ZONEFOUR_SECTION6_END              100         //ending LED for this zone
#define ZONEFOUR_SECTION6_START_FIRE       1           //would you like fire to begin from this point? 0 = no 1 = yes
#define ZONEFOUR_SECTION6_END_FIRE         1           //would you like fire to begin from this point? 0 = no 1 = yes
#endif

#if  FOURTHZONE_SECTIONS >= 7
#define ZONEFOUR_SECTION7_START            0          //starting LED for this zone
#define ZONEFOUR_SECTION7_END              100        //ending LED for this zone
#define ZONEFOUR_SECTION7_START_FIRE       1          //would you like fire to begin from this point? 0 = no 1 = yes
#define ZONEFOUR_SECTION7_END_FIRE         1          //would you like fire to begin from this point? 0 = no 1 = yes
#endif

#if  FOURTHZONE_SECTIONS >= 8
#define ZONEFOUR_SECTION8_START            0          //starting LED for this zone
#define ZONEFOUR_SECTION8_END              100        //ending LED for this zone
#define ZONEFOUR_SECTION8_START_FIRE       1          //would you like fire to begin from this point? 0 = no 1 = yes
#define ZONEFOUR_SECTION8_END_FIRE         1          //would you like fire to begin from this point? 0 = no 1 = yes
#endif

#if  FOURTHZONE_SECTIONS >= 9
#define ZONEFOUR_SECTION9_START            0          //starting LED for this zone
#define ZONEFOUR_SECTION9_END              100        //ending LED for this zone
#define ZONEFOUR_SECTION9_START_FIRE       1          //would you like fire to begin from this point? 0 = no 1 = yes
#define ZONEFOUR_SECTION9_END_FIRE         1          //would you like fire to begin from this point? 0 = no 1 = yes
#endif


/*****************************    ZONEFIVE ROOF SETUP    *************************************/
/*****************************    ZONEFIVE ROOF SETUP    *************************************/

#if  FIFTHZONE_SECTIONS >= 1        
#define ZONEFIVE_SECTION1_START            0           //starting LED for this zone
#define ZONEFIVE_SECTION1_END              100         //ending LED for this zone
#define ZONEFIVE_SECTION1_START_FIRE       1           //would you like fire to begin from this point? 0 = no 1 = yes
#define ZONEFIVE_SECTION1_END_FIRE         1           //would you like fire to begin from this point? 0 = no 1 = yes
#endif

#if  FIFTHZONE_SECTIONS >= 2
#define ZONEFIVE_SECTION2_START            0           //starting LED for this zone
#define ZONEFIVE_SECTION2_END              100         //ending LED for this zone
#define ZONEFIVE_SECTION2_START_FIRE       1           //would you like fire to begin from this point? 0 = no 1 = yes
#define ZONEFIVE_SECTION2_END_FIRE         1           //would you like fire to begin from this point? 0 = no 1 = yes
#endif

#if  FIFTHZONE_SECTIONS >= 3
#define ZONEFIVE_SECTION3_START            0           //starting LED for this zone
#define ZONEFIVE_SECTION3_END              100         //ending LED for this zone
#define ZONEFIVE_SECTION3_START_FIRE       1           //would you like fire to begin from this point? 0 = no 1 = yes
#define ZONEFIVE_SECTION3_END_FIRE         1           //would you like fire to begin from this point? 0 = no 1 = yes
#endif

#if  FIFTHZONE_SECTIONS >= 4
#define ZONEFIVE_SECTION4_START            0           //starting LED for this zone
#define ZONEFIVE_SECTION4_END              100         //ending LED for this zone
#define ZONEFIVE_SECTION4_START_FIRE       1           //would you like fire to begin from this point? 0 = no 1 = yes
#define ZONEFIVE_SECTION4_END_FIRE         1           //would you like fire to begin from this point? 0 = no 1 = yes
#endif

#if  FIFTHZONE_SECTIONS >= 5
#define ZONEFIVE_SECTION5_START            0           //starting LED for this zone
#define ZONEFIVE_SECTION5_END              100         //ending LED for this zone
#define ZONEFIVE_SECTION5_START_FIRE       1           //would you like fire to begin from this point? 0 = no 1 = yes
#define ZONEFIVE_SECTION5_END_FIRE         1           //would you like fire to begin from this point? 0 = no 1 = yes
#endif

#if  FIFTHZONE_SECTIONS >= 6
#define ZONEFIVE_SECTION6_START            0           //starting LED for this zone
#define ZONEFIVE_SECTION6_END              100         //ending LED for this zone
#define ZONEFIVE_SECTION6_START_FIRE       1           //would you like fire to begin from this point? 0 = no 1 = yes
#define ZONEFIVE_SECTION6_END_FIRE         1           //would you like fire to begin from this point? 0 = no 1 = yes
#endif

#if  FIFTHZONE_SECTIONS >= 7
#define ZONEFIVE_SECTION7_START            0          //starting LED for this zone
#define ZONEFIVE_SECTION7_END              100        //ending LED for this zone
#define ZONEFIVE_SECTION7_START_FIRE       1          //would you like fire to begin from this point? 0 = no 1 = yes
#define ZONEFIVE_SECTION7_END_FIRE         1          //would you like fire to begin from this point? 0 = no 1 = yes
#endif

#if  FIFTHZONE_SECTIONS >= 8
#define ZONEFIVE_SECTION8_START            0          //starting LED for this zone
#define ZONEFIVE_SECTION8_END              100        //ending LED for this zone
#define ZONEFIVE_SECTION8_START_FIRE       1          //would you like fire to begin from this point? 0 = no 1 = yes
#define ZONEFIVE_SECTION8_END_FIRE         1          //would you like fire to begin from this point? 0 = no 1 = yes
#endif

#if  FIFTHZONE_SECTIONS >= 9
#define ZONEFIVE_SECTION9_START            0          //starting LED for this zone
#define ZONEFIVE_SECTION9_END              100        //ending LED for this zone
#define ZONEFIVE_SECTION9_START_FIRE       1          //would you like fire to begin from this point? 0 = no 1 = yes
#define ZONEFIVE_SECTION9_END_FIRE         1          //would you like fire to begin from this point? 0 = no 1 = yes
#endif


/*****************************    ZONESIX ROOF SETUP    *************************************/
/*****************************    ZONESIX ROOF SETUP    *************************************/

#if  SIXTHZONE_SECTIONS >= 1        
#define ZONESIX_SECTION1_START            0           //starting LED for this zone
#define ZONESIX_SECTION1_END              100         //ending LED for this zone
#define ZONESIX_SECTION1_START_FIRE       1           //would you like fire to begin from this point? 0 = no 1 = yes
#define ZONESIX_SECTION1_END_FIRE         1           //would you like fire to begin from this point? 0 = no 1 = yes
#endif

#if  SIXTHZONE_SECTIONS >= 2
#define ZONESIX_SECTION2_START            0           //starting LED for this zone
#define ZONESIX_SECTION2_END              100         //ending LED for this zone
#define ZONESIX_SECTION2_START_FIRE       1           //would you like fire to begin from this point? 0 = no 1 = yes
#define ZONESIX_SECTION2_END_FIRE         1           //would you like fire to begin from this point? 0 = no 1 = yes
#endif

#if  SIXTHZONE_SECTIONS >= 3
#define ZONESIX_SECTION3_START            0           //starting LED for this zone
#define ZONESIX_SECTION3_END              100         //ending LED for this zone
#define ZONESIX_SECTION3_START_FIRE       1           //would you like fire to begin from this point? 0 = no 1 = yes
#define ZONESIX_SECTION3_END_FIRE         1           //would you like fire to begin from this point? 0 = no 1 = yes
#endif

#if  SIXTHZONE_SECTIONS >= 4
#define ZONESIX_SECTION4_START            0           //starting LED for this zone
#define ZONESIX_SECTION4_END              100         //ending LED for this zone
#define ZONESIX_SECTION4_START_FIRE       1           //would you like fire to begin from this point? 0 = no 1 = yes
#define ZONESIX_SECTION4_END_FIRE         1           //would you like fire to begin from this point? 0 = no 1 = yes
#endif

#if  SIXTHZONE_SECTIONS >= 5
#define ZONESIX_SECTION5_START            0           //starting LED for this zone
#define ZONESIX_SECTION5_END              100         //ending LED for this zone
#define ZONESIX_SECTION5_START_FIRE       1           //would you like fire to begin from this point? 0 = no 1 = yes
#define ZONESIX_SECTION5_END_FIRE         1           //would you like fire to begin from this point? 0 = no 1 = yes
#endif

#if  SIXTHZONE_SECTIONS >= 6
#define ZONESIX_SECTION6_START            0           //starting LED for this zone
#define ZONESIX_SECTION6_END              100         //ending LED for this zone
#define ZONESIX_SECTION6_START_FIRE       1           //would you like fire to begin from this point? 0 = no 1 = yes
#define ZONESIX_SECTION6_END_FIRE         1           //would you like fire to begin from this point? 0 = no 1 = yes
#endif

#if  SIXTHZONE_SECTIONS >= 7
#define ZONESIX_SECTION7_START            0          //starting LED for this zone
#define ZONESIX_SECTION7_END              100        //ending LED for this zone
#define ZONESIX_SECTION7_START_FIRE       1          //would you like fire to begin from this point? 0 = no 1 = yes
#define ZONESIX_SECTION7_END_FIRE         1          //would you like fire to begin from this point? 0 = no 1 = yes
#endif

#if  SIXTHZONE_SECTIONS >= 8
#define ZONESIX_SECTION8_START            0          //starting LED for this zone
#define ZONESIX_SECTION8_END              100        //ending LED for this zone
#define ZONESIX_SECTION8_START_FIRE       1          //would you like fire to begin from this point? 0 = no 1 = yes
#define ZONESIX_SECTION8_END_FIRE         1          //would you like fire to begin from this point? 0 = no 1 = yes
#endif

#if  SIXTHZONE_SECTIONS >= 9
#define ZONESIX_SECTION9_START            0          //starting LED for this zone
#define ZONESIX_SECTION9_END              100        //ending LED for this zone
#define ZONESIX_SECTION9_START_FIRE       1          //would you like fire to begin from this point? 0 = no 1 = yes
#define ZONESIX_SECTION9_END_FIRE         1          //would you like fire to begin from this point? 0 = no 1 = yes
#endif