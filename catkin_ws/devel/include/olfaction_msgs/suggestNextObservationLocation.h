// Generated by gencpp from file olfaction_msgs/suggestNextObservationLocation.msg
// DO NOT EDIT!


#ifndef OLFACTION_MSGS_MESSAGE_SUGGESTNEXTOBSERVATIONLOCATION_H
#define OLFACTION_MSGS_MESSAGE_SUGGESTNEXTOBSERVATIONLOCATION_H

#include <ros/service_traits.h>


#include <olfaction_msgs/suggestNextObservationLocationRequest.h>
#include <olfaction_msgs/suggestNextObservationLocationResponse.h>


namespace olfaction_msgs
{

struct suggestNextObservationLocation
{

typedef suggestNextObservationLocationRequest Request;
typedef suggestNextObservationLocationResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct suggestNextObservationLocation
} // namespace olfaction_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::olfaction_msgs::suggestNextObservationLocation > {
  static const char* value()
  {
    return "75d9701e058ed9a7608ba3dbc16b5b7e";
  }

  static const char* value(const ::olfaction_msgs::suggestNextObservationLocation&) { return value(); }
};

template<>
struct DataType< ::olfaction_msgs::suggestNextObservationLocation > {
  static const char* value()
  {
    return "olfaction_msgs/suggestNextObservationLocation";
  }

  static const char* value(const ::olfaction_msgs::suggestNextObservationLocation&) { return value(); }
};


// service_traits::MD5Sum< ::olfaction_msgs::suggestNextObservationLocationRequest> should match 
// service_traits::MD5Sum< ::olfaction_msgs::suggestNextObservationLocation > 
template<>
struct MD5Sum< ::olfaction_msgs::suggestNextObservationLocationRequest>
{
  static const char* value()
  {
    return MD5Sum< ::olfaction_msgs::suggestNextObservationLocation >::value();
  }
  static const char* value(const ::olfaction_msgs::suggestNextObservationLocationRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::olfaction_msgs::suggestNextObservationLocationRequest> should match 
// service_traits::DataType< ::olfaction_msgs::suggestNextObservationLocation > 
template<>
struct DataType< ::olfaction_msgs::suggestNextObservationLocationRequest>
{
  static const char* value()
  {
    return DataType< ::olfaction_msgs::suggestNextObservationLocation >::value();
  }
  static const char* value(const ::olfaction_msgs::suggestNextObservationLocationRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::olfaction_msgs::suggestNextObservationLocationResponse> should match 
// service_traits::MD5Sum< ::olfaction_msgs::suggestNextObservationLocation > 
template<>
struct MD5Sum< ::olfaction_msgs::suggestNextObservationLocationResponse>
{
  static const char* value()
  {
    return MD5Sum< ::olfaction_msgs::suggestNextObservationLocation >::value();
  }
  static const char* value(const ::olfaction_msgs::suggestNextObservationLocationResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::olfaction_msgs::suggestNextObservationLocationResponse> should match 
// service_traits::DataType< ::olfaction_msgs::suggestNextObservationLocation > 
template<>
struct DataType< ::olfaction_msgs::suggestNextObservationLocationResponse>
{
  static const char* value()
  {
    return DataType< ::olfaction_msgs::suggestNextObservationLocation >::value();
  }
  static const char* value(const ::olfaction_msgs::suggestNextObservationLocationResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // OLFACTION_MSGS_MESSAGE_SUGGESTNEXTOBSERVATIONLOCATION_H