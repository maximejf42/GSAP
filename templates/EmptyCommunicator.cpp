//
//  EmptyCommunicator.cpp
//  Batt1 Verification Tests
//
//  Created by Teubert, Christopher (ARC-TI)[SGT, INC] on 5/27/16.
//  Copyright © 2013-2018 NASA. All rights reserved.
//

#include <string>

#include "EmptyCommunicator.h"

namespace PCOE {
    const std::string MODULE_NAME = "EMPTYCOMM"; // Replace with your module name for log

    EmptyCommunicator::EmptyCommunicator(const ConfigMap & configMap) {
        log.WriteLine(LOG_DEBUG, MODULE_NAME, "Configuring");
        ///------------------------------------
        /// HERE IS WHERE YOU CONFIGURE THE Communicator.
        /// Read the configuration map
        ///     Example: std::string SomeParam = configMap.at("SomeParam")[0];
        ///     Example2: std::vector<std::string> paramList = configMap.at("otherParam");
        ///
        /// ADD COMMUNICATOR CONFIGURATION CODE BELOW:
        ///------------------------------------
        (void)configMap; // Supress unused variable warning. Remove when implementing your communicator

        ///------------------------------------
    }

    void poll() {
        ///------------------------------------
        /// HERE IS WHERE YOU INDICATE IF THERE IS DATA TO BE READ
        ///
        /// ADD COMMUNICATOR PUBLISHER CODE BELOW:
        ///------------------------------------

        // setRead(); // <- Uncomment if there is data to be read
        // Uncommenting the above line will cause read() to be called
    }

    void EmptyCommunicator::write(AllData data) {
        ///------------------------------------
        /// HERE IS WHERE YOU SEND DATA
        ///     Send any of the data in the DataStore data or progData
        ///
        /// ADD COMMUNICATOR PUBLISHER CODE BELOW:
        ///------------------------------------
        DataStore& data = dataIn.doubleDatastore;
        ProgDataMap& progDataMap = dataIn.progData;

        ///------------------------------------
    }

    DataStore EmptyCommunicator::read() {
        ///------------------------------------
        /// HERE IS WHERE YOU RECEIVE DATA
        ///     Receive data and fill in the DataStor 'data'
        ///     Example: data["someParam"] = 1.0;
        ///
        /// ADD COMMUNICATOR SUBSCRIBER CODE BELOW:
        ///------------------------------------
        DataStore ds;


        ///------------------------------------
        return ds;
    }
}
