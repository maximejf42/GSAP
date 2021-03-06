/**  EmptyModel - Header
*   @file       EmptyModel.h
*   @ingroup    GSAP-Support
*
*   @brief      EmptyModel model class for prognostics
*
*   @author     Matthew Daigle
*   @version    1.1.0
*
*   @pre        N/A
*
*      Contact: Matthew Daigle (matthew.j.daigle@nasa.gov)
*      Created: January 10, 2017
*
*   @copyright Copyright (c) 2017-2018 United States Government as represented by
*     the Administrator of the National Aeronautics and Space Administration.
*     All Rights Reserved.
*/

#ifndef EmptyModel_H
#define EmptyModel_H

#include <cmath>
#include <vector>

#include "Model.h"
#include "ConfigMap.h"
#include "ModelFactory.h"

class EmptyModel final : public PCOE::Model {
 public:
    // Constructor
    EmptyModel();

    // Constructor based on configMap
    EmptyModel(const PCOE::ConfigMap & paramMap);

    /** @brief      Execute state equation. This version of the function uses a given sampling time.
    *   @param      t Time
    *   @param      x Current state vector. This gets updated to the state at the new time.
    *   @param      u Input vector
    *   @param      n Process noise vector
    *   @param      dt Sampling time
    **/
    void stateEqn(const double t, std::vector<double> & x, const std::vector<double> & u,
                  const std::vector<double> & n, const double dt);
    
    /** @brief      Execute output equation
    *   @param      t Time
    *   @param      x State vector
    *   @param      u Input vector
    *   @param      n Sensor noise vector
    *   @param      z Output vector. This gets updated to the new output at the given time.
    **/
    void outputEqn(const double t, const std::vector<double> & x, const std::vector<double> & u,
                   const std::vector<double> & n, std::vector<double> & z);
    
    /** @brief      Initialize state vector given initial inputs and outputs.
    *   @param      x Current state vector. This gets updated.
    *   @param      u Input vector
    *   @param      z Output vector
    **/
    void initialize(std::vector<double> & x, const std::vector<double> & u, const std::vector<double> & z);
};


#endif
