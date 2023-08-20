#ifndef _USER_CONFIG_OVERRIDE_H_
#define _USER_CONFIG_OVERRIDE_H_


// force the compiler to show a warning to confirm that this file is inlcuded
#warning **** user_config_override.h: Using Settings from this File ****


// ***********************************************
// ************* GLOBAL SETTING ******************
// ***********************************************

// -- Master parameter control --------------------
#undef  CFG_HOLDER
#define CFG_HOLDER        4699                  // [Reset 1] Change this value to load SECTION1 configuration parameters to flash   (default: 4617)

#undef SAVE_DATA
#define SAVE_DATA              1                 // [SaveData] Save changed parameters to Flash (0 = disable, 1 - 3600 seconds)

#undef SAVE_STATE
#define SAVE_STATE             1                 // [SetOption0] Save changed power state to Flash (0 = disable, 1 = enable)//#undef WEB_PORT


// -- WEBSERVER ---------------------------------------

//#define WEB_PORT             8099                // Web server Port for User and Admin mode

//#undef WEB_USERNAME
//#define WEB_USERNAME         "admin"           // Web server Admin mode user name

//#undef WEB_SERVER
//#define WEB_SERVER             2                 // [WebServer] Web server (0 = Off, 1 = Start as User, 2 = Start as Admin)

//#undef WEB_PASSWORD
//#define WEB_PASSWORD "racksync" // [WebPassword] Web server Admin mode Password for WEB_USERNAME (empty string = Disable)

#undef FRIENDLY_NAME
#define FRIENDLY_NAME PROJECT // [FriendlyName] Friendlyname up to 32 characters (aka DeviceName in Config Other)


// -- WIFI ---------------------------------------

//#undef STA_SSID1
//#define STA_SSID1 "" // [Ssid1] Wifi SSID

//#undef STA_PASS1
//#define STA_PASS1 "" // [Password1] Wifi password

// #undef STA_SSID2
// #define STA_SSID2              ""                // [Ssid2] Optional alternate AP Wifi SSID

// #undef STA_PASS2
// #define STA_PASS2              ""                // [Password2] Optional alternate AP Wifi password

// -- MQTT ---------------------------------------


#undef MQTT_HOST
#define MQTT_HOST "homeassistant.local" // [MqttHost]

#undef MQTT_PORT 
#define MQTT_PORT              1883              // [MqttPort] MQTT port (10123 on CloudMQTT)

#undef MQTT_USER
#define MQTT_USER "mqtt" // [MqttUser] MQTT user

#undef MQTT_PASS
#define MQTT_PASS "mqtt1234"


// -- mDNS ----------------------------------------
#undef MDNS_ENABLED
#define MDNS_ENABLED           true             // [SetOption55] Use mDNS (false = Disable, true = Enable)

#undef USE_DISCOVERY
#define USE_DISCOVERY                            // Enable mDNS for the following services (+8k code or +23.5k code with core 2_5_x, +0.3k mem)

#undef WEBSERVER_ADVERTISE
#define WEBSERVER_ADVERTISE                    // Provide access to webserver by name <Hostname>.local/

#undef MQTT_HOST_DISCOVERY
#define MQTT_HOST_DISCOVERY                    // Find MQTT host server (overrides MQTT_HOST if found)

#undef TELE_PERIOD
#define TELE_PERIOD            10               // [TelePeriod] Telemetry (0 = disable, 10 - 3600 seconds)

#undef MQTT_CLIENT_ID
#define MQTT_CLIENT_ID         PROJECT "_%06X"         // [MqttClient] Also fall back topic using Chip Id = last 6 characters of MAC address

// -- RETAIN STATUS
#undef MQTT_POWER_RETAIN
#define MQTT_POWER_RETAIN      true             // [PowerRetain] Power status message may send retain flag (false = off, true = on)

// -- MQTT --------------
  
#define MQTT_TOPIC             PROJECT "_%06X"  
#undef HOME_ASSISTANT_DISCOVERY_ENABLE    
#define HOME_ASSISTANT_DISCOVERY_ENABLE   true      // [SetOption19] Home Assistant Discovery (false = Disable, true = Enable)

#undef USE_HOME_ASSISTANT  
#define USE_HOME_ASSISTANT                       // Enable Home Assistant Discovery Support (+4.1k code, +6 bytes mem)

#undef HOME_ASSISTANT_DISCOVERY_PREFIX
#define HOME_ASSISTANT_DISCOVERY_PREFIX "homeassistant"  // Home Assistant discovery prefix

#undef HASS_AS_LIGHT   
#define HASS_AS_LIGHT          false             // [SetOption30] Enforce HAss autodiscovery as light

// -- Location ------------------------------------
#undef LATITUDE
#define LATITUDE               13.7563        // [Latitude] Your location to be used with sunrise and sunset
#undef LONGITUDE
#define LONGITUDE              100.5018          // [Longitude] Your location to be used with sunrise and sunset

// -- Application ---------------------------------
#undef APP_TIMEZONE
#define APP_TIMEZONE           +7                 // [Timezone] +1 hour (Amsterdam) (-13 .. 14 = hours from UTC, 99 = use TIME_DST/TIME_STD)

#undef APP_LEDSTATE
#define APP_LEDSTATE           LED_POWER         // [LedState] Function of led
                                                 //   (LED_OFF, LED_POWER, LED_MQTTSUB, LED_POWER_MQTTSUB, LED_MQTTPUB, LED_POWER_MQTTPUB, LED_MQTT, LED_POWER_MQTT)
#undef APP_DISABLE_POWERCYCLE 
#define APP_DISABLE_POWERCYCLE true             // [SetOption65] Disable fast power cycle detection for device reset

#undef APP_POWERON_STATE
#define APP_POWERON_STATE      POWER_ALL_OFF   // [PowerOnState] Power On Relay state
                                                 //   (POWER_ALL_OFF, POWER_ALL_ON, POWER_ALL_SAVED_TOGGLE, POWER_ALL_SAVED, POWER_ALL_ALWAYS_ON, POWER_ALL_OFF_PULSETIME_ON)

#undef KEY_ONLY_SINGLE_PRESS
#define KEY_ONLY_SINGLE_PRESS  false             // [SetOption13] Enable only single press to speed up button press recognition

// -- HTTP ----------------------------------------
#undef USE_WEBSERVER
#define USE_WEBSERVER // Enable web server and Wifi Manager (+66k code, +8k mem)


// Theme for Retail

#undef COLOR_TEXT
#define COLOR_TEXT "#eaeaea" // [WebColor1] Global text color - Very light gray
#undef COLOR_BACKGROUND
#define COLOR_BACKGROUND "#252525" // [WebColor2] Global background color - Very dark gray (mostly black)
#undef COLOR_FORM
#define COLOR_FORM "#282531" // [WebColor3] Form background color - Very dark gray
#undef COLOR_INPUT_TEXT
#define COLOR_INPUT_TEXT "#eaeaea" // [WebColor4] Input text color - Black
#undef COLOR_INPUT
#define COLOR_INPUT "#282531" // [WebColor5] Input background color - Very light gray
#undef COLOR_CONSOLE_TEXT
#define COLOR_CONSOLE_TEXT "#d7ccff" // [WebColor6] Console text color - Strong Green
#undef COLOR_CONSOLE
#define COLOR_CONSOLE "#1d1b26" // [WebColor7] Console background color - Very dark gray (mostly black)
#undef COLOR_TEXT_WARNING
#define COLOR_TEXT_WARNING "#ff5661" // [WebColor8] Warning text color - Brick Red
#undef COLOR_TEXT_SUCCESS
#define COLOR_TEXT_SUCCESS "#fc8000" // [WebColor9] Success text color - Dark lime green
#undef COLOR_BUTTON_TEXT
#define COLOR_BUTTON_TEXT "#faffff" // [WebColor10] Button text color - Very pale (mostly white) cyan
#undef COLOR_BUTTON
#define COLOR_BUTTON "#de6304" // [WebColor11] Button color - Vivid blue
#undef COLOR_BUTTON_HOVER
#define COLOR_BUTTON_HOVER "#164192" // [WebColor12] Button color when hovered over - Dark blue
#undef COLOR_BUTTON_RESET
#define COLOR_BUTTON_RESET "#b73d5d" // [WebColor13] Restart/Reset/Delete button color - Strong red
#undef COLOR_BUTTON_RESET_HOVER
#define COLOR_BUTTON_RESET_HOVER "#00d9ff" // [WebColor14] Restart/Reset/Delete button color when hovered over - Dark red
#undef COLOR_BUTTON_SAVE
#define COLOR_BUTTON_SAVE "#1f917c" // [WebColor15] Save button color - Moderate lime green
#undef COLOR_BUTTON_SAVE_HOVER
#define COLOR_BUTTON_SAVE_HOVER "#156353" // [WebColor16] Save button color when hovered over - Dark moderate lime green
#undef COLOR_TIMER_TAB_TEXT
#define COLOR_TIMER_TAB_TEXT "#faffff" // [WebColor17] Config timer tab text color - Very pale (mostly white) cyan.
#undef COLOR_TIMER_TAB_BACKGROUND
#define COLOR_TIMER_TAB_BACKGROUND "#716b7f" // [WebColor18] Config timer tab background color - Dark gray
#undef COLOR_TITLE_TEXT
#define COLOR_TITLE_TEXT "#eaeaea" // [WebColor19] Title text color - Very light gray


// -- Syslog --------------------------------------
//
// (LOG_LEVEL_NONE, LOG_LEVEL_ERROR, LOG_LEVEL_INFO, LOG_LEVEL_DEBUG, LOG_LEVEL_DEBUG_MORE)
//
#undef SYS_LOG_LEVEL
#define SYS_LOG_LEVEL LOG_LEVEL_NONE

#undef SERIAL_LOG_LEVEL
#define SERIAL_LOG_LEVEL LOG_LEVEL_INFO

#undef WEB_LOG_LEVEL
#define WEB_LOG_LEVEL LOG_LEVEL_INFO

// ***********************************************
// ********* END OF GLOBAL SETTING ***************
// ***********************************************




// ***********************************************
// ******** Aubess Power Monitor with (BL0942) 
// ***********************************************


#ifdef EXPERIMENT_AUBESS_POWER_MONITOR
    #warning **** Build: EXPERIMENT_AUBESS_POWER_MONITOR ****

    #undef CODE_IMAGE_STR
    #define CODE_IMAGE_STR "racksync"

    // Put here your override for firmware 
    #undef PROJECT
    #define PROJECT "RACKSYNC_AUBESS_POWER" // PROJECT is used as the default topic delimiter

    #ifdef MODULE
    #undef MODULE
    #endif
    #define MODULE                 USER_MODULE   // [Module] Select default model (the list is kModuleNiceList() in file tasmota_template.h) USER_MODULE is the TEMPLATE

    #ifdef FALLBACK_MODULE
    #undef FALLBACK_MODULE
    #endif
    #define FALLBACK_MODULE        USER_MODULE   // to Select the default model as FALLBACK when the user does a RESET 1 


    #ifdef USER_TEMPLATE
    #undef USER_TEMPLATE
    #endif

    #define USER_TEMPLATE "{\"NAME\":\"AUBESS POWER with (BL0942)\",\"GPIO\":[0,3200,0,7520,0,0,0,0,160,0,224,0,0,0],\"FLAG\":0,\"BASE\":18}" // [Template] Set JSON template
    

    // #undef FRIENDLY_NAME
    // #define FRIENDLY_NAME PROJECT // [FriendlyName] Friendlyname up to 32 characters (aka DeviceName in Config Other)

    // OTA
    #undef OTA_URL
    #define OTA_URL                "https://racksync.com/iot/tasmota/release/experiment_aubess_power_monitor.bin"  

#endif



// **** EOF USER_CONFIG_OVERRIDE

#endif 


