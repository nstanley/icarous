//******************************************************************
// 
//  Generated by IDL to C++ Translator
//  
//  File name: GPSInfo.h
//  Source: /home/mfeliu/Desktop/icarous/icarous-legacy/C++/include/DDS/topics/GPSInfo.idl
//  Generated: Mon Dec 18 16:02:26 2017
//  OpenSplice V6.4.140407OSS
//  
//******************************************************************
#ifndef _GPSINFO_H_
#define _GPSINFO_H_
#ifndef OPENSPLICE_ISOCXX_PSM
#define OPENSPLICE_ISOCXX_PSM
#endif

#include "sacpp_mapping.h"
#include "sacpp_DDS_DCPS.h"
#include <dds/core/ddscore.hpp>


namespace MAVLink
{
   class GPSInfo;

   class GPSInfo OSPL_DDS_FINAL
   {
   public:
         GPSInfo() {}
         explicit GPSInfo(
                  DDS::Double time,
                  DDS::Double latitude,
                  DDS::Double longitude,
                  DDS::Double absoluteAltitude,
                  DDS::Double relativeAltitude,
                  DDS::Double xVelocity,
                  DDS::Double yVelocity,
                  DDS::Double zVelocity)         :
                           time_(time),
                           latitude_(latitude),
                           longitude_(longitude),
                           absoluteAltitude_(absoluteAltitude),
                           relativeAltitude_(relativeAltitude),
                           xVelocity_(xVelocity),
                           yVelocity_(yVelocity),
                           zVelocity_(zVelocity) {}
#ifdef OSPL_DDS_CXX11
#  ifdef OSPL_CXX11_NO_FUNCTION_DEFAULTS
         GPSInfo(const GPSInfo& _other)
         :
                           time_(_other.time_),
                           latitude_(_other.latitude_),
                           longitude_(_other.longitude_),
                           absoluteAltitude_(_other.absoluteAltitude_),
                           relativeAltitude_(_other.relativeAltitude_),
                           xVelocity_(_other.xVelocity_),
                           yVelocity_(_other.yVelocity_),
                           zVelocity_(_other.zVelocity_)
         {}
         GPSInfo(GPSInfo&& _other)
         :
                           time_(::std::move(_other.time_)),
                           latitude_(::std::move(_other.latitude_)),
                           longitude_(::std::move(_other.longitude_)),
                           absoluteAltitude_(::std::move(_other.absoluteAltitude_)),
                           relativeAltitude_(::std::move(_other.relativeAltitude_)),
                           xVelocity_(::std::move(_other.xVelocity_)),
                           yVelocity_(::std::move(_other.yVelocity_)),
                           zVelocity_(::std::move(_other.zVelocity_))
         {}
         GPSInfo& operator=(GPSInfo&& _other)
         {
                  if (this != &_other)
                  {
                           time_ = ::std::move(_other.time_);
                           latitude_ = ::std::move(_other.latitude_);
                           longitude_ = ::std::move(_other.longitude_);
                           absoluteAltitude_ = ::std::move(_other.absoluteAltitude_);
                           relativeAltitude_ = ::std::move(_other.relativeAltitude_);
                           xVelocity_ = ::std::move(_other.xVelocity_);
                           yVelocity_ = ::std::move(_other.yVelocity_);
                           zVelocity_ = ::std::move(_other.zVelocity_);
                  }
                  return *this;
         }
         GPSInfo& operator=(const GPSInfo& _other)
         {
                  if (this != &_other)
                  {
                           time_ = _other.time_;
                           latitude_ = _other.latitude_;
                           longitude_ = _other.longitude_;
                           absoluteAltitude_ = _other.absoluteAltitude_;
                           relativeAltitude_ = _other.relativeAltitude_;
                           xVelocity_ = _other.xVelocity_;
                           yVelocity_ = _other.yVelocity_;
                           zVelocity_ = _other.zVelocity_;
                  }
                  return *this;
         }
#  else
         GPSInfo(const GPSInfo& _other) = default;
         GPSInfo(GPSInfo&& _other) = default;
         GPSInfo& operator=(GPSInfo&& _other) = default;
         GPSInfo& operator=(const GPSInfo& _other) = default;
#  endif
#endif
         DDS::Double time() const { return this->time_; }
         DDS::Double& time() { return this->time_; }
         void time(DDS::Double _val_) { this->time_ = _val_; }
#ifdef OSPL_DDS_CXX11
         void time(DDS::Double&& _val_) { this->time_ = _val_; }
#endif
         DDS::Double latitude() const { return this->latitude_; }
         DDS::Double& latitude() { return this->latitude_; }
         void latitude(DDS::Double _val_) { this->latitude_ = _val_; }
#ifdef OSPL_DDS_CXX11
         void latitude(DDS::Double&& _val_) { this->latitude_ = _val_; }
#endif
         DDS::Double longitude() const { return this->longitude_; }
         DDS::Double& longitude() { return this->longitude_; }
         void longitude(DDS::Double _val_) { this->longitude_ = _val_; }
#ifdef OSPL_DDS_CXX11
         void longitude(DDS::Double&& _val_) { this->longitude_ = _val_; }
#endif
         DDS::Double absoluteAltitude() const { return this->absoluteAltitude_; }
         DDS::Double& absoluteAltitude() { return this->absoluteAltitude_; }
         void absoluteAltitude(DDS::Double _val_) { this->absoluteAltitude_ = _val_; }
#ifdef OSPL_DDS_CXX11
         void absoluteAltitude(DDS::Double&& _val_) { this->absoluteAltitude_ = _val_; }
#endif
         DDS::Double relativeAltitude() const { return this->relativeAltitude_; }
         DDS::Double& relativeAltitude() { return this->relativeAltitude_; }
         void relativeAltitude(DDS::Double _val_) { this->relativeAltitude_ = _val_; }
#ifdef OSPL_DDS_CXX11
         void relativeAltitude(DDS::Double&& _val_) { this->relativeAltitude_ = _val_; }
#endif
         DDS::Double xVelocity() const { return this->xVelocity_; }
         DDS::Double& xVelocity() { return this->xVelocity_; }
         void xVelocity(DDS::Double _val_) { this->xVelocity_ = _val_; }
#ifdef OSPL_DDS_CXX11
         void xVelocity(DDS::Double&& _val_) { this->xVelocity_ = _val_; }
#endif
         DDS::Double yVelocity() const { return this->yVelocity_; }
         DDS::Double& yVelocity() { return this->yVelocity_; }
         void yVelocity(DDS::Double _val_) { this->yVelocity_ = _val_; }
#ifdef OSPL_DDS_CXX11
         void yVelocity(DDS::Double&& _val_) { this->yVelocity_ = _val_; }
#endif
         DDS::Double zVelocity() const { return this->zVelocity_; }
         DDS::Double& zVelocity() { return this->zVelocity_; }
         void zVelocity(DDS::Double _val_) { this->zVelocity_ = _val_; }
#ifdef OSPL_DDS_CXX11
         void zVelocity(DDS::Double&& _val_) { this->zVelocity_ = _val_; }
#endif
         bool operator==(const GPSInfo& _other) const
         {
                  return time_ == _other.time_ &&
                  latitude_ == _other.latitude_ &&
                  longitude_ == _other.longitude_ &&
                  absoluteAltitude_ == _other.absoluteAltitude_ &&
                  relativeAltitude_ == _other.relativeAltitude_ &&
                  xVelocity_ == _other.xVelocity_ &&
                  yVelocity_ == _other.yVelocity_ &&
                  zVelocity_ == _other.zVelocity_;
         }
         bool operator!=(const GPSInfo& other) const
         {
                  return !(*this == other);
         }
         DDS::Double time_;
         DDS::Double latitude_;
         DDS::Double longitude_;
         DDS::Double absoluteAltitude_;
         DDS::Double relativeAltitude_;
         DDS::Double xVelocity_;
         DDS::Double yVelocity_;
         DDS::Double zVelocity_;
   };

}




#endif 
