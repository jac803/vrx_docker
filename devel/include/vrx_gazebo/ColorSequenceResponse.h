// Generated by gencpp from file vrx_gazebo/ColorSequenceResponse.msg
// DO NOT EDIT!


#ifndef VRX_GAZEBO_MESSAGE_COLORSEQUENCERESPONSE_H
#define VRX_GAZEBO_MESSAGE_COLORSEQUENCERESPONSE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace vrx_gazebo
{
template <class ContainerAllocator>
struct ColorSequenceResponse_
{
  typedef ColorSequenceResponse_<ContainerAllocator> Type;

  ColorSequenceResponse_()
    : success(false)  {
    }
  ColorSequenceResponse_(const ContainerAllocator& _alloc)
    : success(false)  {
  (void)_alloc;
    }



   typedef uint8_t _success_type;
  _success_type success;





  typedef boost::shared_ptr< ::vrx_gazebo::ColorSequenceResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::vrx_gazebo::ColorSequenceResponse_<ContainerAllocator> const> ConstPtr;

}; // struct ColorSequenceResponse_

typedef ::vrx_gazebo::ColorSequenceResponse_<std::allocator<void> > ColorSequenceResponse;

typedef boost::shared_ptr< ::vrx_gazebo::ColorSequenceResponse > ColorSequenceResponsePtr;
typedef boost::shared_ptr< ::vrx_gazebo::ColorSequenceResponse const> ColorSequenceResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::vrx_gazebo::ColorSequenceResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::vrx_gazebo::ColorSequenceResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::vrx_gazebo::ColorSequenceResponse_<ContainerAllocator1> & lhs, const ::vrx_gazebo::ColorSequenceResponse_<ContainerAllocator2> & rhs)
{
  return lhs.success == rhs.success;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::vrx_gazebo::ColorSequenceResponse_<ContainerAllocator1> & lhs, const ::vrx_gazebo::ColorSequenceResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace vrx_gazebo

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::vrx_gazebo::ColorSequenceResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::vrx_gazebo::ColorSequenceResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::vrx_gazebo::ColorSequenceResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::vrx_gazebo::ColorSequenceResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::vrx_gazebo::ColorSequenceResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::vrx_gazebo::ColorSequenceResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::vrx_gazebo::ColorSequenceResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "358e233cde0c8a8bcfea4ce193f8fc15";
  }

  static const char* value(const ::vrx_gazebo::ColorSequenceResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x358e233cde0c8a8bULL;
  static const uint64_t static_value2 = 0xcfea4ce193f8fc15ULL;
};

template<class ContainerAllocator>
struct DataType< ::vrx_gazebo::ColorSequenceResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "vrx_gazebo/ColorSequenceResponse";
  }

  static const char* value(const ::vrx_gazebo::ColorSequenceResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::vrx_gazebo::ColorSequenceResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool success\n"
"\n"
;
  }

  static const char* value(const ::vrx_gazebo::ColorSequenceResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::vrx_gazebo::ColorSequenceResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.success);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ColorSequenceResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::vrx_gazebo::ColorSequenceResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::vrx_gazebo::ColorSequenceResponse_<ContainerAllocator>& v)
  {
    s << indent << "success: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.success);
  }
};

} // namespace message_operations
} // namespace ros

#endif // VRX_GAZEBO_MESSAGE_COLORSEQUENCERESPONSE_H
