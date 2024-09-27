// Generated by gencpp from file tm_msgs/SvrResponse.msg
// DO NOT EDIT!


#ifndef TM_MSGS_MESSAGE_SVRRESPONSE_H
#define TM_MSGS_MESSAGE_SVRRESPONSE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace tm_msgs
{
template <class ContainerAllocator>
struct SvrResponse_
{
  typedef SvrResponse_<ContainerAllocator> Type;

  SvrResponse_()
    : header()
    , id()
    , mode(0)
    , content()
    , error_code(0)  {
    }
  SvrResponse_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , id(_alloc)
    , mode(0)
    , content(_alloc)
    , error_code(0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _id_type;
  _id_type id;

   typedef int8_t _mode_type;
  _mode_type mode;

   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _content_type;
  _content_type content;

   typedef int8_t _error_code_type;
  _error_code_type error_code;





  typedef boost::shared_ptr< ::tm_msgs::SvrResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::tm_msgs::SvrResponse_<ContainerAllocator> const> ConstPtr;

}; // struct SvrResponse_

typedef ::tm_msgs::SvrResponse_<std::allocator<void> > SvrResponse;

typedef boost::shared_ptr< ::tm_msgs::SvrResponse > SvrResponsePtr;
typedef boost::shared_ptr< ::tm_msgs::SvrResponse const> SvrResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::tm_msgs::SvrResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::tm_msgs::SvrResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::tm_msgs::SvrResponse_<ContainerAllocator1> & lhs, const ::tm_msgs::SvrResponse_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.id == rhs.id &&
    lhs.mode == rhs.mode &&
    lhs.content == rhs.content &&
    lhs.error_code == rhs.error_code;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::tm_msgs::SvrResponse_<ContainerAllocator1> & lhs, const ::tm_msgs::SvrResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace tm_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::tm_msgs::SvrResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::tm_msgs::SvrResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::tm_msgs::SvrResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::tm_msgs::SvrResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::tm_msgs::SvrResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::tm_msgs::SvrResponse_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::tm_msgs::SvrResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "26fc8fa918b76675f2a40eb53a72721d";
  }

  static const char* value(const ::tm_msgs::SvrResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x26fc8fa918b76675ULL;
  static const uint64_t static_value2 = 0xf2a40eb53a72721dULL;
};

template<class ContainerAllocator>
struct DataType< ::tm_msgs::SvrResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "tm_msgs/SvrResponse";
  }

  static const char* value(const ::tm_msgs::SvrResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::tm_msgs::SvrResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# For WriteItem / AskItem service\n"
"# More details please refer to the TM Expression Editor Manual(2.12 rev1.00) Chapter 14.6\n"
"\n"
"Header header\n"
"\n"
"string id\n"
"int8 mode\n"
"string content\n"
"int8 error_code\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
;
  }

  static const char* value(const ::tm_msgs::SvrResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::tm_msgs::SvrResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.id);
      stream.next(m.mode);
      stream.next(m.content);
      stream.next(m.error_code);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SvrResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::tm_msgs::SvrResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::tm_msgs::SvrResponse_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "id: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.id);
    s << indent << "mode: ";
    Printer<int8_t>::stream(s, indent + "  ", v.mode);
    s << indent << "content: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.content);
    s << indent << "error_code: ";
    Printer<int8_t>::stream(s, indent + "  ", v.error_code);
  }
};

} // namespace message_operations
} // namespace ros

#endif // TM_MSGS_MESSAGE_SVRRESPONSE_H
