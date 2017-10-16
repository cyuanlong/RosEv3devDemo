// Generated by gencpp from file just_move/moveResponse.msg
// DO NOT EDIT!


#ifndef JUST_MOVE_MESSAGE_MOVERESPONSE_H
#define JUST_MOVE_MESSAGE_MOVERESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace just_move
{
template <class ContainerAllocator>
struct moveResponse_
{
  typedef moveResponse_<ContainerAllocator> Type;

  moveResponse_()
    : distance(0.0)  {
    }
  moveResponse_(const ContainerAllocator& _alloc)
    : distance(0.0)  {
  (void)_alloc;
    }



   typedef double _distance_type;
  _distance_type distance;




  typedef boost::shared_ptr< ::just_move::moveResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::just_move::moveResponse_<ContainerAllocator> const> ConstPtr;

}; // struct moveResponse_

typedef ::just_move::moveResponse_<std::allocator<void> > moveResponse;

typedef boost::shared_ptr< ::just_move::moveResponse > moveResponsePtr;
typedef boost::shared_ptr< ::just_move::moveResponse const> moveResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::just_move::moveResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::just_move::moveResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace just_move

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'just_move': ['/home/robot/catkin_ws/src/just_move/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::just_move::moveResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::just_move::moveResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::just_move::moveResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::just_move::moveResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::just_move::moveResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::just_move::moveResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::just_move::moveResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "acff7fda0c683c872875f5c4b069f124";
  }

  static const char* value(const ::just_move::moveResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xacff7fda0c683c87ULL;
  static const uint64_t static_value2 = 0x2875f5c4b069f124ULL;
};

template<class ContainerAllocator>
struct DataType< ::just_move::moveResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "just_move/moveResponse";
  }

  static const char* value(const ::just_move::moveResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::just_move::moveResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float64 distance\n\
\n\
\n\
";
  }

  static const char* value(const ::just_move::moveResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::just_move::moveResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.distance);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct moveResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::just_move::moveResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::just_move::moveResponse_<ContainerAllocator>& v)
  {
    s << indent << "distance: ";
    Printer<double>::stream(s, indent + "  ", v.distance);
  }
};

} // namespace message_operations
} // namespace ros

#endif // JUST_MOVE_MESSAGE_MOVERESPONSE_H