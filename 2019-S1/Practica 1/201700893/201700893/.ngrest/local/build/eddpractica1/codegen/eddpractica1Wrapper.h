// This file generated by ngrestcg
// For more information, please visit: https://github.com/loentar/ngrest
// DO NOT EDIT. ANY CHANGES WILL BE LOST

#ifndef EDDPRACTICA1WRAPPER_H
#define EDDPRACTICA1WRAPPER_H

#include <string>

#include <ngrest/engine/ServiceWrapper.h>
#include "estructurasWrapper.h"
#include "eddpractica1.h"




class eddpractica1;

//! eddpractica1 service wrapper
class eddpractica1Wrapper: public ::ngrest::ServiceWrapper
{
public:
    eddpractica1Wrapper();
    virtual ~eddpractica1Wrapper();

    virtual ::ngrest::Service* getServiceImpl() override;

    virtual void invoke(const ::ngrest::OperationDescription* operation, ::ngrest::MessageContext* context) override;

    virtual const ::ngrest::ServiceDescription* getDescription() const override;

private:
    eddpractica1* service;
};





#endif // EDDPRACTICA1WRAPPER_H

