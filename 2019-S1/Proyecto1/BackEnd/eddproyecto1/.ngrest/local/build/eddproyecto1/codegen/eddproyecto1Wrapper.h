// This file generated by ngrestcg
// For more information, please visit: https://github.com/loentar/ngrest
// DO NOT EDIT. ANY CHANGES WILL BE LOST

#ifndef EDDPROYECTO1WRAPPER_H
#define EDDPROYECTO1WRAPPER_H

#include <string>

#include <ngrest/engine/ServiceWrapper.h>
#include "estructuraWrapper.h"
#include "eddproyecto1.h"




class eddproyecto1;

//! eddproyecto1 service wrapper
class eddproyecto1Wrapper: public ::ngrest::ServiceWrapper
{
public:
    eddproyecto1Wrapper();
    virtual ~eddproyecto1Wrapper();

    virtual ::ngrest::Service* getServiceImpl() override;

    virtual void invoke(const ::ngrest::OperationDescription* operation, ::ngrest::MessageContext* context) override;

    virtual const ::ngrest::ServiceDescription* getDescription() const override;

private:
    eddproyecto1* service;
};





#endif // EDDPROYECTO1WRAPPER_H
